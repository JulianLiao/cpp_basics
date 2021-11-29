
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

struct PntIdx {
    size_t x_idx;
    size_t y_idx;

    PntIdx(): x_idx(0), y_idx(0) {}
    PntIdx(const size_t x_idx, const size_t y_idx): x_idx(x_idx), y_idx(y_idx) {}
};

int main(int argc, char** argv) {
    unsigned int a;
    printf("sizeof(unsigned int)    :    %lu\n", sizeof(unsigned int));
    printf("sizeof(unsigned int a)    :    %lu\n", sizeof(a));

    printf("UINT_MAX    :    %u\n", UINT_MAX);
    a = UINT_MAX - 1;
    printf("11 - a    :    %u\n", a);
    a += 1;
    printf("22 - a    :    %u\n", a);
    a += 1;
    printf("33 - a    :    %u\n", a);



    std::vector<PntIdx> linePtIdx;
    linePtIdx.push_back(PntIdx(714, 810));
    linePtIdx.push_back(PntIdx(714, 811));
    linePtIdx.push_back(PntIdx(713, 812));
    linePtIdx.push_back(PntIdx(712, 813));
    linePtIdx.push_back(PntIdx(712, 814));
    linePtIdx.push_back(PntIdx(711, 815));
    linePtIdx.push_back(PntIdx(710, 816));
    linePtIdx.push_back(PntIdx(710, 817));
    linePtIdx.push_back(PntIdx(709, 818));
    linePtIdx.push_back(PntIdx(708, 819));
    linePtIdx.push_back(PntIdx(708, 820));
    linePtIdx.push_back(PntIdx(707, 821));
    linePtIdx.push_back(PntIdx(706, 822));
    linePtIdx.push_back(PntIdx(705, 823));

    int size_a = linePtIdx.end() - linePtIdx.begin();
    std::cout << "size_a: " << size_a << ",  size: " << linePtIdx.size() << std::endl;


    /* BEGIN shrink_to_fit */
    std::vector<int> test_v;
    cout << "Default-constructed capacity is: " << test_v.capacity() << "\n";
    test_v.resize(100);
    cout << "Capacity of a 100-element vector is: " << test_v.capacity() << "\n";
    test_v.resize(50);
    cout << "Capacity after resize(50) is: " << test_v.capacity() << "\n";
    test_v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit() is: " << test_v.capacity() << "\n";
    test_v.clear();
    cout << "Capacity after clear() is: " << test_v.capacity() << "\n";
    test_v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit() is: " << test_v.capacity() << "\n";
    for (int i = 1000; i < 1300; ++i) {
        test_v.push_back(i);
    }
    cout << "Capacity after adding 300 elements is: " << test_v.capacity() << "\n";
    test_v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit() is: " << test_v.capacity() << "\n";
    /* END shrink_to_fit */

    return 0;
}

