#include <iostream>

int printarr(int* arr, int len) {
    std::cout << "[";
    for (int i = 0; i < (len - 1); i++) {
        std::cout << std::to_string(arr[i]) + ", ";
    }
    std::cout << std::to_string(arr[len - 1]) + "]\n";

    return 0;
}