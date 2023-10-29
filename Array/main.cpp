#include<iostream>
using namespace std;

#define tab "\t"
#define ARR
#define DRR
#define CRR

const int rows = 5;
const int cols = 5;

void Fill_Rand(int arr[], const int n);
void Fill_Rand(double arr[], const int n);
void Fill_Rand(char arr[], const int n);

void Fill_Rand(int arr[rows][cols], const int rows, const int cols);
void Fill_Rand(double arr[rows][cols], const int rows, const int cols);
void Fill_Rand(char arr[rows][cols], const int rows, const int cols);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[rows][cols], const int rows, const int cols);

template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[rows][cols], const int rows, const int cols);

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[rows][cols], const int rows, const int cols);

template<typename T> double Avg(T arr[], const int n);
char Avg(char arr[], const int n);
template<typename T> double Avg(T arr[rows][cols], const int rows, const int cols);

template<typename T> T Min_Value(T arr[], const int n);
template<typename T> T Min_Value(T arr[rows][cols], const int rows, const int cols);

template<typename T> T Max_Value(T arr[], const int n);
template<typename T> T Max_Value(T arr[rows][cols], const int rows, const int cols);

template<typename T> void Shift_Left(T arr[], const int n, int shift);
template<typename T> void Shift_Left(T arr[rows][cols], const int rows, const int cols, int shift);

template<typename T> void Shift_Right(T arr[], const int n, int shift);
template<typename T> void Shift_Right(T arr[rows][cols], const int rows, const int cols, int shift);
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

	cout << "Сдвиг массива влево на "; cin >> shift;
	Shift_Left(arr, n, shift);
	Print(arr, n);

	cout << "Сдвиг массива вправо на "; cin >> shift;
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
//--------------------------------------------------//
void Fill_Rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Fill_Rand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void Fill_Rand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Fill_Rand(int arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Fill_Rand(double arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void Fill_Rand(char arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand();
		}
	}
}
//--------------------------------------------------//
template<typename T>void Print(T arr[], const int n)
{
	//Вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
}
template<typename T>void Print(T arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
//--------------------------------------------------//
template<typename T> void Sort(T arr[], const int n)
{
	//Сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}

template<typename T> void Sort(T arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = i; k < rows; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < cols; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
//--------------------------------------------------//
template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T> T Sum(T arr[rows][cols], const int rows, const int cols)
{
	T sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
//--------------------------------------------------//
template<typename T> double Avg(T arr[], const int n)
{
	//return (double)Sum(arr, n) / n;
	T avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg = (double)arr[i] / n;
	}
	return avg;
}

char Avg(char arr[], const int n)
{
	char avg = 0; char sum = 0;
	for (int i = 0; i < n; i++)
	{
		avg = arr[i] / n;
	}
	return avg;
}
template<typename T> double Avg(T arr[rows][cols], const int rows, const int cols)
{
	return (double)Sum(arr, rows, cols) / (rows * cols);
}
//--------------------------------------------------//
template<typename T> T Min_Value(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

template<typename T> T Min_Value(T arr[rows][cols], const int rows, const int cols)
{
	T min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}

//--------------------------------------------------//
template<typename T> T Max_Value(T arr[], const int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;

}

template<typename T> T Max_Value(T arr[rows][cols], const int rows, const int cols)
{
	T max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}
//--------------------------------------------------//
template<typename T> void Shift_Left(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T> void Shift_Left(T arr[rows][cols], const int rows, const int cols, int shift)
{
	for (int k = 0; k < shift; k++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[rows - 1][cols - 1] = buffer;
	}
}
//--------------------------------------------------//
template<typename T> void Shift_Right(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

template<typename T> void Shift_Right(T arr[rows][cols], const int rows, const int cols, int shift)
{
	for (int k = 0; k < shift; k++)
	{
		T buffer = arr[rows - 1][cols - 1];
		for (int i = rows - 1; i >= 0; i--)
		{
			for (int j = cols - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}
//--------------------------------------------------//