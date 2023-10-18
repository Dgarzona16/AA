//
// Created by dgarzona on 18/10/2023.
//

#ifndef QUICKSORT_QUICKSORTMETHODS_HPP
#define QUICKSORT_QUICKSORTMETHODS_HPP

#include <iostream>

template <typename T>
class QuickSortMethods {
    public:
        static void sort(T *array, int size);
    private:
        static void sort(T *array, int low, int high);
        static int partition(T *array, int low, int high);
        static void swap(T *array, int i, int j);
};

template <typename T>
void QuickSort(T *array, int size) {
    QuickSortMethods<T>::sort(array, size);
}

template <typename T>
void QuickSortMethods<T>::sort(T *array, int size) {
    sort(array, 0, size - 1);
}
/**
 * Este método se encarga de ordenar el array de acuerdo al pivote
 * que se le pase como parámetro.
 * @tparam T
 * @param array
 * @param low
 * @param high
 */
template <typename T>
void QuickSortMethods<T>::sort(T *array, int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);
        sort(array, low, pivot - 1);
        sort(array, pivot + 1, high);
    }
}
/**
 * Este método se encarga de ordenar el array de acuerdo al pivote
 * que se le pase como parámetro.
 * @tparam T
 * @param array
 * @param low
 * @param high
 * @return la posición del pivote
 */
template <typename T>
int QuickSortMethods<T>::partition(T *array, int low, int high) {
    T pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        // this conditional indicates the order of the sorting
        if (array[j] <= pivot) {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, high);
    return i + 1;
}
/**
 * Este método se encarga de intercambiar los valores de las posiciones
 * i y j del array.
 * @tparam T
 * @param array
 * @param i
 * @param j
 */
template <typename T>
void QuickSortMethods<T>::swap(T *array, int i, int j) {
    T temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
#endif //QUICKSORT_QUICKSORTMETHODS_HPP
