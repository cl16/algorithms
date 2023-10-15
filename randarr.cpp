#include <iostream>
#include <stdlib.h>
#include <time.h>

int* randarr(int l, int m) {
    /* initialize random seed */
    srand (time(NULL));
    
    /* create array of random numbers */
    int * arr = new int[l]; // initialize array of length l
    for (int i = 0; i < l; i++) {
        arr[i] = rand() % m + 1; // random number from range 1 to m
    }
    return arr;
}