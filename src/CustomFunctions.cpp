#include <CustomFunctions.hpp>

namespace ms {
	void ReadArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]) {
		std::cin >> strings >> columns;
		for (int i = 0; i < strings; i++) {
			for (int j = 0; j < columns; j++) {
				std::cin >> array[i][j];
			}
		}
	}

	void PrintArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]) {
		for (int i = 0; i < strings; i++) {
			for (int j = 0; j < columns - 1; j++) {
				std::cout << array[i][j] << " ";
			}
			std::cout << array[i][columns - 1] << std::endl;
		}
	}

	int DigitsSum(int number) {
		int digitsSum = 0;
		while (number / 10) {
			digitsSum += abs(number % 10);
			number /= 10;
		}
		digitsSum += abs(number);
		return digitsSum;
	}

	int Maximal(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]) {
		int maximal = INT_MIN;
		for (int i = 0; i < strings; i++) {
			for (int j = 0; j < columns; j++) {
				if (array[i][j] > maximal) {
					maximal = array[i][j];
				}
			}
		}
		return maximal;
	}

	int Minimal(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS]) {
		int minimal = INT_MAX;
		for (int i = 0; i < strings; i++) {
			for (int j = 0; j < columns; j++) {
				if (array[i][j] < minimal) {
					minimal = array[i][j];
				}
			}
		}
		return minimal;
	}

	int ColumnElementsSum(int columnIndex, int& strings, int array[MAX_STRINGS][MAX_COLUMNS]) {
		int columnElementsSum = 0;
		for (int i = 0; i < strings; i++) {
			columnElementsSum += array[i][columnIndex];
		}
		return columnElementsSum;
	}

	void FillSumsArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS], int sumsArray[MAX_COLUMNS]) {
		for (int j = 0; j < columns; j++) {
			sumsArray[j] = ColumnElementsSum(j, strings, array);
		}
	}

	void SortArray(int& strings, int& columns, int array[MAX_STRINGS][MAX_COLUMNS], int sumsArray[MAX_COLUMNS]) {
		for (int i = 0; i < columns -1; i++) {
			for (int j = i + 1; j < columns; j++) {
				if (sumsArray[i] > sumsArray[j]) {
					std::swap(sumsArray[i], sumsArray[j]);
					for (int k = 0; k < strings; k++) {
						std::swap(array[k][i], array[k][j]);
					}
				}
			}
		}
	}
}