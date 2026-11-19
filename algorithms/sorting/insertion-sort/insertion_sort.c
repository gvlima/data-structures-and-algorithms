#include "insertion_sort.h"

void insertion_sort (int *list, int size) {
    for (int i=1; i<size; i++) {
        int currentValue = list[i];
        int j = i-1;

        while (j >= 0 && list[j] > currentValue) {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = currentValue;
    }
}
