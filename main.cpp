/* Main file to call algorithms, random array generator, and print. */
#include "randarr.h"
#include "printarr.h"

int main() {

    /* set length and range of test array */
    int len = 10;
    int max = 1000;

    /* Create array */
    int * arr = randarr(len, max);

    /* Run sorting algorithm */


    /* print result */
    printarr(arr, len);
}