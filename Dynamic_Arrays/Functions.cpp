#include"stdafx.h"
#include"Functions.h"

int** Allocate(const int rows, const int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}

void Clear(int** arr, const int rows)
{

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
//--------------------------------------------------------//
void Fill_Rand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void Fill_Rand(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
//--------------------------------------------------------//
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int** arr, const int rows, const int cols)
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
//--------------------------------------------------------//
int* Push_Back(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}

int** Push_row_Back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1];

	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	buffer[rows] = new int [cols] {};
	rows++;
	return buffer;
}
//--------------------------------------------------------//
int* Push_Front(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1];

	for (int i = 0; i <= n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int** Push_row_Front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1];

	for (int i = 0; i < rows; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[]arr;
	buffer[0] = new int[cols] {};
	rows++;
	return buffer;
}
//--------------------------------------------------------//
int* Pop_Back(int* arr, int& n)
{
	int* buffer = new int[n - 1];

	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int** Pop_row_Back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows - 1];

	for (int i = 0; i < rows - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	rows--;
	return buffer;
}
//--------------------------------------------------------//
int* Pop_Front(int* arr, int& n)
{
	int* buffer = new int[n - 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int** Pop_row_Front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows - 1];

	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	rows--;
	return buffer;
}
//--------------------------------------------------------//
int* Insert(int* arr, int& n, int index, int value)
{
	int* buffer = new int[n + 1];

	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];

	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}
int** Insert_Row(int** arr, int& rows, int cols, int index)
{
	int** buffer = new int* [rows + 1];

	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < rows; i++)buffer[i + 1] = arr[i];

	delete[]arr;
	buffer[index] = new int[cols] {};
	rows++;
	return buffer;
}
//--------------------------------------------------------//
int* Erase(int* arr, int& n, int index)
{
	int* buffer = new int[--n];

	/*for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i <= n; i++)buffer[i] = arr[i+1];*/

	for (int i = 0; i < n; i++)
	{
		buffer[i] = i < index ? arr[i] : arr[i + 1];
	}

	delete[] arr;
	//arr = buffer;

	return buffer;
}
int** Erase_Row(int** arr, int& rows, int cols, int index)
{
	int** buffer = new int* [rows - 1];

	for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < rows; i++)buffer[i] = arr[i + 1];

	delete[]arr;
	rows--;
	return buffer;
}
//--------------------------------------------------------//