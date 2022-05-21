
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
using namespace std;
template<typename Type>
 void pyz(Type* arr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
#endif // !COMPLEX_H


