
#include <iostream>

 int main() {

    int N = 12;
    int arr[12] = {2, 6, 9, 77, -1, 3, 8, 23, 76, 1, 4, 7};

    // insertion sort O(n^2) complixty
    for (size_t i = 1; i < N; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j > -1 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    return (0);
 }