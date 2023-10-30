#include"stdafx.h"
#include"constants.h"
#include"Fill_Rand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"statistics.h"
#include"statistics.cpp"
#include"Shift.h"
#include"Shift.cpp"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int shift = 2;

#ifdef ARR
	int arr[n];
	cout << "----------- Массив arr -----------" << endl << endl;

	Fill_Rand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << endl;
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(arr, n) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(arr, n) << endl;

	cout << "Сдвиг массива влево на "; 
	Shift_Left(arr, n, shift);
	Print(arr, n);

	cout << "Сдвиг массива вправо на ";
	Shift_Right(arr, n, shift);
	Print(arr, n);
#endif // ARR

#ifdef DRR
	cout << "----------- Массив drr -----------" << endl << endl;

	double drr[n];
	Fill_Rand(drr, n);
	Print(drr, n);
	Sort(drr, n);
	Print(drr, n);

	cout << "Сумма элементов массива = " << Sum(drr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(drr, n) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(drr, n) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(drr, n) << endl;

	cout << "Сдвиг массива влево на " << endl;;
	Shift_Left(drr, n, shift);
	Print(drr, n);

	cout << "Сдвиг массива вправо на " << endl;;
	Shift_Right(drr, n, shift);
	Print(drr, n);
#endif // DRR

#ifdef CRR

	cout << "----------- Массив crr -----------" << endl << endl;

	char crr[n];
	Fill_Rand(crr, n);
	Print(crr, n); cout << endl;
	Sort(crr, n);
	Print(crr, n);

	cout << "Сумма элементов массива = " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(crr, n) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(crr, n) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(crr, n) << endl;

	cout << "Сдвиг массива влево на " << endl;;
	Shift_Left(crr, n, shift);
	Print(crr, n);

	cout << "Сдвиг массива вправо на " << endl;;
	Shift_Right(crr, n, shift);
	Print(crr, n);
#endif // CRR

	cout << "----------- Двумерный массив int  -----------" << endl << endl;

	int arr_2d[rows][cols];
	Fill_Rand(arr_2d, rows, cols);
	Print(arr_2d, rows, cols);
	cout << endl;
	Sort(arr_2d, rows, cols);
	Print(arr_2d, rows, cols);

	cout << endl;

	cout << "Сумма элементов двумерного массива = " << Sum(arr_2d, rows, cols) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr_2d, rows, cols) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(arr_2d, rows, cols) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(arr_2d, rows, cols) << endl;

	cout << "Сдвиг массива влево на " << endl;;
	Shift_Left(arr_2d, rows, cols, shift);
	Print(arr_2d, rows, cols);

	cout << endl;
	cout << "Сдвиг массива вправо на " << endl;;
	Shift_Right(arr_2d, rows, cols, shift);
	Print(arr_2d, rows, cols);

	cout << endl;
	cout << "----------- Двумерный массив double  -----------" << endl << endl;

	double drr_2d[rows][cols];
	Fill_Rand(drr_2d, rows, cols);
	Print(drr_2d, rows, cols);
	cout << endl;
	Sort(drr_2d, rows, cols);
	Print(drr_2d, rows, cols);

	cout << endl;
	cout << "Сумма элементов двумерного массива = " << Sum(drr_2d, rows, cols) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(drr_2d, rows, cols) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(drr_2d, rows, cols) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(drr_2d, rows, cols) << endl;

	cout << endl;
	cout << "Сдвиг массива влево на " << endl;;
	Shift_Left(drr_2d, rows, cols, shift);
	Print(drr_2d, rows, cols);

	cout << endl;
	cout << "Сдвиг массива вправо на " << endl;;
	Shift_Right(drr_2d, rows, cols, shift);
	Print(drr_2d, rows, cols);
}

