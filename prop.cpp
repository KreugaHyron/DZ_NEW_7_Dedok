#include "function.h"
int main() {
    const int size = 5;
    DataType array[size];

    FillArray(array, size);
    ShowArray(array, size);

    DataType min = FindMin(array, size);
    DataType max = FindMax(array, size);

    SortArray(array, size);
    ShowArray(array, size);

    EditValue(array, 2, 10);
    ShowArray(array, size);
    return 0;
}