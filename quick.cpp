#include <iostream>

void swap(int *arr, int f, int sec) {
    int temp = arr[f];
    arr[f] = arr[sec];
    arr[sec] = temp;
}

int partition(int *arr, int left , int right) {
   int piv = arr[right];
   // std::cout << piv << std::endl;
   int i = left;
   for (size_t j = left; j < right; j++) {
      if (arr[j] < piv) {
         swap(arr, j, i);
         i++;
      }
   }
   swap(arr, right, i);
   return (i);
}

void quickSort(int *arr, int left , int right) {
   if (left >= right)
      return;
   int a = partition(arr, left, right);
   quickSort(arr, left, a - 1);
   quickSort(arr, a + 1, right);
}

int main() {

   int N = 6;
   int arr[12] = {2, 6, 9, 77, -1, 3};

   quickSort(arr, 0, N - 1);

   for (int i = 0; i < N; i++)
      std::cout << arr[i] << " ";
   return (0);
 }