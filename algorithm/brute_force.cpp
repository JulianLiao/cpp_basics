#include <limits.h>

#include <iostream>

using namespace std;

// Returns maximum sum in a subarray of size k
int maxSum(int arr[], int n, int k) {

  int max_sum = INT_MIN;
  cout << "Intial max_sum: " << max_sum << endl;

  // Consider all possible k-length blocks starting with i
  // 时间复杂度是 O(n*k)
  for (int i = 0; i < (n-k+1); i++) {
    int current_sum = 0;
    for (int j = i; j < (i+k); j++) {
      current_sum += arr[j];
    }

    if (current_sum > max_sum) {
        max_sum = current_sum;
    }
  }

  return max_sum;
}

int main() {
    int arr[] = {1,4,2,10,2,3,1,0,20};  // the result should be 24
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "arr size: " << sizeof(arr) << ", n: " << n << endl;
    int sum = maxSum(arr, n, k);
    cout << "Brute Force result: " << sum << endl;
    return 0;
}
