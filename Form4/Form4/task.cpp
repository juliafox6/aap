// Файл task.cpp с функциями решения задачи

#include "Task.h"

// Функция находит минимальный элемент в каждой строке
int* findmin(double** mas, int m, int n)
{
	int* mini = new int [n];
	for (int i = 0; i < m; i++)
	{
		double fmin = *(*(mas + i));
		int x = 0;
		for (int j = 1; j < n; j++)
		{
			if (*(*(mas + i) + j) < fmin) {
				fmin = *(*(mas + i) + j);
				x = j;
			}
		}
		*(mini + i) = x;
	}
	return mini;
}

double findmax(double** mas, int m, int n, int* findmin, int& str, int& stol)
{
	for (int j = 0; j < n; j++)
	{
		int l = *(findmin + j);
		int x = 0;
		int y = 0;
		double fmax = *(*(mas+j)+l);
		for (int i = 0; i < m; i++)
		{
			if (*(*(mas + i) + l) > fmax) {
				fmax = 0;
				break;
			}
		}
		if (fmax != 0) {
			str = j + 1;
			stol = l + 1;
			return fmax;
		}
	}
	return 90000;
}