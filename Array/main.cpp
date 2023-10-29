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

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[rows][cols], const int rows, const int cols);
void Print(double arr[rows][cols], const int rows, const int cols);
void Print(char arr[rows][cols], const int rows, const int cols);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[rows][cols], const int rows, const int cols);
void Sort(double arr[rows][cols], const int rows, const int cols);
void Sort(char arr[rows][cols], const int rows, const int cols);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

int Sum(int arr[rows][cols], const int rows, const int cols);
double Sum(double arr[rows][cols], const int rows, const int cols);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);

double Avg(int arr[rows][cols], const int rows, const int cols);
double Avg(double arr[rows][cols], const int rows, const int cols);

int Min_Value(int arr[], const int n);
double Min_Value(double arr[], const int n);
char Min_Value(char arr[], const int n);

int Min_Value(int arr[rows][cols], const int rows, const int cols);
double Min_Value(double arr[rows][cols], const int rows, const int cols);

int Max_Value(int arr[], const int n);
double Max_Value(double arr[], const int n);
char Max_Value(char arr[], const int n);

int Max_Value(int arr[rows][cols], const int rows, const int cols);
double Max_Value(double arr[rows][cols], const int rows, const int cols);

void Shift_Left(int arr[], const int n, int shift);
void Shift_Left(double arr[], const int n, int shift);
void Shift_Left(char arr[], const int n, int shift);

void Shift_Left(int arr[rows][cols], const int rows, const int cols,int shift);
void Shift_Left(double arr[rows][cols], const int rows, const int cols,int shift);

void Shift_Right(int arr[], const int n, int shift);
void Shift_Right(double arr[], const int n, int shift);
void Shift_Right(char arr[], const int n, int shift);

void Shift_Right(int arr[rows][cols], const int rows, const int cols, int shift);
void Shift_Right(double arr[rows][cols], const int rows, const int cols, int shift);

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
	cout << "Минимальное значение элементов массива = " << Min_Value(arr_2d, rows,cols) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(arr_2d, rows,cols) << endl;

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
	cout <<"Сумма элементов двумерного массива = "<< Sum(drr_2d, rows, cols) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(drr_2d, rows,cols) << endl;
	cout << "Минимальное значение элементов массива = " << Min_Value(drr_2d, rows,cols) << endl;
	cout << "Максимальное значение элементов массива = " << Max_Value(drr_2d, rows,cols) << endl;

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
void Print(int arr[], const int n)
{
	//Вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;
}
void Print(int arr[rows][cols], const int rows, const int cols)
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
void Print(double arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
}
void Print(char arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

//--------------------------------------------------//
void Sort(int arr[], const int n)
{
	//Сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}cout << endl;
}
void Sort(int arr[rows][cols], const int rows, const int cols)
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
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[rows][cols], const int rows, const int cols)
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
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[rows][cols], const int rows, const int cols)
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
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

//--------------------------------------------------//
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = arr[i];
	}
	return sum;
}
int Sum(int arr[rows][cols], const int rows, const int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
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
double Avg(int arr[], const int n)
{
	//return (double)Sum(arr, n) / n;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg = (double)arr[i] / n;
	}
	return avg;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
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
double Avg(int arr[rows][cols], const int rows, const int cols)
{
	return Sum(arr, rows, cols) / (rows * cols);
}
double Avg(double arr[rows][cols], const int rows, const int cols)
{
	return Sum(arr, rows, cols) / (rows * cols);
}

//--------------------------------------------------//
int Min_Value(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double Min_Value(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
char Min_Value(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			arr[i] = min;
	}
	return min;
}
int Min_Value(int arr[rows][cols], const int rows, const int cols)
{
	int min = arr[0][0];
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
double Min_Value(double arr[rows][cols], const int rows, const int cols)
{
	double min = arr[0][0];
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
int Max_Value(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;

}
double Max_Value(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char Max_Value(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int Max_Value(int arr[rows][cols], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j] ;
		}
	}
	return max;
}
double Max_Value(double arr[rows][cols], const int rows, const int cols)
{
	double max = arr[0][0];
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
void Shift_Left(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Shift_Left(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Shift_Left(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Shift_Left(int arr[rows][cols], const int rows, const int cols,int shift)
{
	for (int k = 0; k < shift; k++)
	{
		int buffer = arr[0][0];
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
void Shift_Left(double arr[rows][cols], const int rows, const int cols, int shift)
{
	for (int k = 0; k < shift; k++)
	{
		double buffer = arr[0][0];
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
void Shift_Right(int arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void Shift_Right(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void Shift_Right(char arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void Shift_Right(int arr[rows][cols], const int rows, const int cols, int shift)
{
	for (int k = 0; k < shift; k++)
	{
			int buffer = arr[rows - 1][cols-1];
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
void Shift_Right(double arr[rows][cols], const int rows, const int cols, int shift)
{
	for (int k = 0; k < shift; k++)
	{
		double buffer = arr[rows - 1][cols - 1];
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