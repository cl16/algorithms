/* Main file to call algorithms, random array generator, and print. */
#include <iostream>
#include "randarr.h"
#include "printarr.h"
#include "sorting.h"

int main() {

    /* set length and range of test array */
    int len = 10;
    int max = 1000;

    /* Create array */
    int * arr = randarr(len, max);
    std::cout << " >> Array before sort: \n";
    printarr(arr, len);

    /* Run sorting algorithm */
    insertion_sort(arr, len);

    /* print result */
    std::cout << " >> Array after sort: \n";
    printarr(arr, len);
}