// Файл task_din.cpp с функциями решения задачи
#include "task_din.h"

int findmin(int* mas, int n)
{
	int mmin = mas[0];
	for (int i = 1; i < n; i++)
		if (mas[i] < mmin)
		{
			mmin = mas[i];
		}
	return mmin;
}

int findk(int* mas, int n, int mmin)
{
	int k = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] == mmin)
		{
			k++;
		}
	return k;
}

int findm(int* mas, int n, int k, int mmin)
{
	int m = 0;
	for (int i = k; i < n; i++)
		if (mas[i] < 0 && mas[i] != mmin)
		{
			m++;
		}
	if (mmin >= 0)
	{
		m = 0;
	}
	return m;
}

int* task(int* mas, int n, int& m)
{

	int mmin = findmin(mas, n);
	int k = findk(mas, n, mmin);
	m = findm(mas, n, k, mmin);
	if (m == 0) return 0;
	int* newmas = new int[m];
	int c = 0;
	for (int i = k; i < n; i++)
		if (mas[i] < 0 && mas[i] != mmin)
		{
			newmas[c] = mas[i];
			c++;
		}
	return newmas;
}
