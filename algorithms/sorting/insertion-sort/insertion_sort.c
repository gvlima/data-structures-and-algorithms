/*
* Algorithm: Insertion Sort
* Time complexity: O(n²)
* Space complexity: O(1)
*/

#include "insertion_sort.h"

void insertion_sort (int *list, int size) {
    // O(n): runs n - 1 times, once for each element from the second one
    for (int i=1; i<size; i++) {
        int currentValue = list[i];
        int j = i-1;

        // Worst case: i iterations (all elements in list[0..i-1] are greater) = O(n)
        while (j >= 0 && list[j] > currentValue) {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = currentValue;
    }
}