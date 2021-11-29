#include <limits.h>

#include <iostream>

using namespace std;

// Returns maximum sum in a subarray of size k
int maxSum(int arr[], int n, int k) {
  if (n < k) {
    cout << "n must be greater than k";
    return -1;
  }

  int max_sum = 0;
  cout << "Intial max_sum: " << max_sum << endl;

  // Compute sum of first window of size k
  for (int i = 0; i < k; i++) {
    max_sum += arr[i];
  }

  int window_sum = max_sum;
  // Compute sums of remaining windows by removing first element of previous window and adding last element of current window
  for (int i = k; i < n; i++) {
    window_sum += (arr[i] - arr[i-k]);
    max_sum = max(max_sum, window_sum);
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
