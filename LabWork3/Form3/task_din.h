#pragma once
// Заголовочный файл task_din.h
using namespace System;
using namespace System::Windows::Forms;

int* input(int&, TextBox^);
void output(int*, int, ListBox^);
int* task(int*, int, int&);
