#include"statistics.h"

char Avg(char arr[], const int n)
{
	char avg = 0; char sum = 0;
	for (int i = 0; i < n; i++)
	{
		avg = arr[i] / n;
	}
	return avg;
}