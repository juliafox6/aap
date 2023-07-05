#pragma once

using namespace System;
using namespace System::Windows::Forms;

double** input(int m, int n, double a, double b);
bool GetInt(int&, TextBox^, String^);
bool GetDouble(double&, TextBox^, String^);
void output(double**, int, int, ListBox^);
void del(double**, int);
int* findmin(double**, int, int);
double findmax(double**, int, int, int*, int&, int&);