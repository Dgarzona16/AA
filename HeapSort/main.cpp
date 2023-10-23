#include <iostream>
#include "../Objects/Objects.h"
#include "HeapSortMethods.hpp"

int main() {
    int size = 6;
    int array[] = {12, 11, 13, 5, 6, 7};

    HeapSort(array, size, HeapType::MAX_HEAP);

    for (int value : array){
        std::cout << value << std::endl;
    }

    return 0;
}
