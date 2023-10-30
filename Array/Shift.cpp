#include"Shift.h"

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
