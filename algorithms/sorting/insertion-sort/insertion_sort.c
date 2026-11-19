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

        // Worst case (reverse-sorted input): each run of this loop shifts every element of the sorted part list[0..i-1]
        //
        // Total across all iterations of the outer loop (Gauss sum): 1 + 2 + ... + (n-1) = n(n-1)/2 = n²/2 - n/2 = O(n²)
        // This total already accounts for the outer loop, so it must not be multiplied by it again.
        while (j >= 0 && list[j] > currentValue) {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = currentValue;
    }
}