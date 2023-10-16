/* Insertion sort algorithm. */
#include <iostream>
#include "printarr.h"

int insertion_sort(int * arr, int len) {

    /* int j for stepping backward, p for shifts, t for temporary value store */
    int j, p, t;

    /* loop through array left to right, start at second element */
    for (int i = 1; i < len; i++) {        
        
        /* j will be eventual position of element, j-1 is lesser element that stops loop */
        j = 1;
        while (arr[i] < arr[i - j - 1]) {
            j++;
        }
        if (arr[i] < arr[i - j]) {
            t = arr[i];
            for (int p = i; p > (i - j); p--) {
                arr[p] = arr[p - 1];
            }
            arr[i - j] = t;
        }
    }
    return 0;
}