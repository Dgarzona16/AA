//
// Created by dgarzona on 23/10/2023.
//

#ifndef HEAPSORT_HEAPSORT_HPP
#define HEAPSORT_HEAPSORT_HPP

#include <iostream>

enum class HeapType {
    MIN_HEAP,
    MAX_HEAP
};

template <typename T>
class HeapSortMethods {
public:
    void setHeap(HeapType heapType);
    void sort(T *array, int size);

    HeapSortMethods();
private:
    HeapType heapType;
    void heapify(T *array, int size, int i);
    void swap(T *array, int i, int j);
};

template <typename T>
HeapSortMethods<T>::HeapSortMethods() {
    heapType = HeapType::MAX_HEAP;
}

template <typename T>
void HeapSort(T *array, int size) {
    HeapSortMethods<T> heapSortMethods = HeapSortMethods<T>();
    heapSortMethods.sort(array, size);
}

template <typename T>
void HeapSort(T *array, int size, HeapType heapType) {
    HeapSortMethods<T> heapSortMethods = HeapSortMethods<T>();
    heapSortMethods.setHeap(heapType);
    heapSortMethods.sort(array, size);
}

template <typename T>
void HeapSortMethods<T>::setHeap(HeapType heapType) {
    HeapSortMethods<T>::heapType = heapType;
}

template <typename T>
void HeapSortMethods<T>::sort(T *array, int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i);
    }
    for (int i = size - 1; i >= 0; i--) {
        swap(array, 0, i);
        heapify(array, i, 0);
    }
}

template <typename T>
void HeapSortMethods<T>::heapify(T *array, int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    switch (heapType) {
        case HeapType::MAX_HEAP:
            if (left < size && array[left] > array[largest]) {
                largest = left;
            }
            if (right < size && array[right] > array[largest]) {
                largest = right;
            }
            break;
        case HeapType::MIN_HEAP:
            if (left < size && array[left] < array[largest]) {
                largest = left;
            }
            if (right < size && array[right] < array[largest]) {
                largest = right;
            }
            break;
    }
    if (largest != i) {
        swap(array, i, largest);
        heapify(array, size, largest);
    }
}

template <typename T>
void HeapSortMethods<T>::swap(T *array, int i, int j) {
    T temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

#endif //HEAPSORT_HEAPSORT_HPP
