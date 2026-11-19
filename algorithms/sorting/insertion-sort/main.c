#include <stdio.h>
#include "insertion_sort.h"

int main() {
    int list [] = {10, 4, 7, 9, 6, 5, 2, 8, 3, 1};
    int size = sizeof(list) / sizeof(int);

    insertion_sort (list, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}