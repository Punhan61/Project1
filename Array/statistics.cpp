#include"constants.h"

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

template<typename T> double Avg(T arr[rows][cols], const int rows, const int cols)
{
	return (double)Sum(arr, rows, cols) / (rows * cols);
}
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
