// Лабораторная работа №6 Вариант 9
// 
// При выполнении лабораторной работы используйте процедуры и функции:
// Функция чтения
// Функция обработки (может быть несколько)
// Функция записи
// Их необходимо расположить в отдельных файлах(*.hpp и* .cpp) в отдельном пространстве имен.
// 
// Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. 
// Если суммы цифр минимального и максимального элементов матрицы отличаются не более, чем на 2, 
// упорядочить столбцы матрицы по неубыванию суммы элементов.

#include <CustomFunctions.hpp>

int main()
{
    int strings, 
        columns, 
        array[MAX_STRINGS][MAX_COLUMNS],
        columnElementsSums[MAX_COLUMNS],
        maximalDigitsSum,
        minimalDigitsSum;

    ms::ReadArray(strings, columns, array);
    maximalDigitsSum = ms::DigitsSum(ms::Maximal(strings, columns, array));
    minimalDigitsSum = ms::DigitsSum(ms::Minimal(strings, columns, array));

    if (abs(maximalDigitsSum - minimalDigitsSum) <= 2) {
        ms::FillSumsArray(strings, columns, array, columnElementsSums);
        ms::SortArray(strings, columns, array, columnElementsSums);
    }

    std::cout << std::endl;
    ms::PrintArray(strings, columns, array);
}