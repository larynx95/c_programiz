/**********************************************************
 * Programiz: https://www.programiz.com
 *
 * insertion sort
 * https://www.programiz.com/dsa/insertion-sort
 **********************************************************/

#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      // For descending order, change key<array[j] to key>array[j].
      array[j + 1] = array[j];
      printArray(array, size);
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  printf("Original array:\n");
  printArray(data, size);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}