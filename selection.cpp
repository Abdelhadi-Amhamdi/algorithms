#include <iostream>

 // buble sort O(n^2) complixty
 int main() {

    int N = 12;
    int arr[12] = {2, 6, 9, 77, -1, 3, 8, 23, 76, 1, 4, 7};

    // selection sort O(n^2) complixity 
    for (size_t i = 0; i < N; i++) {
        int min = i;
        for (size_t j = i + 1; j < N; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    return (0);
 }