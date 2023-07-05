// Файл GetPut.cpp с функциями ввода, вывода и освобождения
// выделенной динамической памяти

#include "Task.h"

double** input(int m, int n, double a, double b)
{
	double** matr = new double* [m];
	if (a > b) { int t = a; a = b; b = t; }
	Random^ rnd = gcnew Random;
	for (int i = 0; i < m; i++)
	{
		*(matr + i) = new double[n];
		for (int j = 0; j < n; j++) {
			*(*(matr + i) + j) = rnd->Next(a, b)+rnd->Next(0, 1000)*0.01;
		}
	}
	return matr;
}

bool GetInt(int& x, TextBox^ Tx, String^ s)
{
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(s, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToInt16(Tx->Text);
	return true;
}

bool GetDouble(double& x, TextBox^ Tx, String^ s)
{
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(s, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToDouble(Tx->Text);
	return true;
}

void output(double** mas, int m, int n, ListBox^ Lb)
{
	Lb->Items->Clear();
	for (int i = 0; i < m; i++)
	{
		String^ s = "";
		for (int j = 0; j < n; j++)
			s = s + String::Format("{0,-10:N}", *(*(mas + i) + j));
		Lb->Items->Add(s);
	}
}

void del(double** a, int m)
{
	for (int i = 0; i < m; i++)
		delete[] * (a + i);
	delete[] a;
}