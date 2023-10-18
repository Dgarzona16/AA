//
// Created by dgarzona on 18/10/2023.
//
#include <iostream>
#include "../Objects/Objects.h"
#include "QuickSortMethods.hpp"

using namespace std;

int main () {
    int size = 6;
    car array[size];
    plane array2[size];

    QuickSort(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}