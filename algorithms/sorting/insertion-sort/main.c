//
// Created by gvlima on 11/18/26.
//

#include <stdio.h>

#include "insertion_sort.h"

int main () {
    int list [10] = {10, 4, 7, 9, 6, 5, 2, 8, 3, 1};

    insertion_sort (list, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}