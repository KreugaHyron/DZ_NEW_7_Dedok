#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

#ifdef INTEGER
typedef int DataType;
#define ShowArray ShowIntArray
#elif ifdef CHAR
typedef char DataType;
#define ShowArray ShowCharArray
#else ifdef DOUBLE
typedef double DataType;
#define ShowArray ShowDoubleArray
#endif

void FillArray(DataType* array, int size);
void ShowArray(DataType* array, int size);
DataType FindMin(DataType* array, int size);
DataType FindMax(DataType* array, int size);
void SortArray(DataType* array, int size);
void EditValue(DataType* array, int index, DataType newValue);

#endif