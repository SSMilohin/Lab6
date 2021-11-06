#pragma once
#define MAX_STRINGS 100
#define MAX_COLUMNS 100
#include <iostream>
#include <limits.h>

namespace ms {
	void ReadArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]);

	void PrintArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]);

	int DigitsSum(int number);

	int Maximal(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]);

	int Minimal(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]);

	int ColumnElementsSum(int columnIndex, int& strings, int array[MAX_STRINGS][MAX_COLUMNS]);

	void FillSumsArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS], int sumsArray[MAX_COLUMNS]);

	void SortArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS], int sumsArray[MAX_COLUMNS]);
}