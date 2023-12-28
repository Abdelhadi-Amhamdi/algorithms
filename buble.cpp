
#include <iostream>

 int main() {

    int N = 12;
    int arr[12] = {2, 6, 9, 77, -1, 3, 8, 23, 76, 1, 4, 7};

    // buble sort O(n^2) complixty
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return (0);
 }