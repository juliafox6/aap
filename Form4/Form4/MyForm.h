#pragma once

#include "Task.h"

namespace Form4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtm;
	private: System::Windows::Forms::TextBox^ txtn;
	private: System::Windows::Forms::TextBox^ txta;
	private: System::Windows::Forms::TextBox^ txtb;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ lstMatr1;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ cmdCalc;
	private: System::Windows::Forms::Button^ cmdExit;
	private: System::Windows::Forms::TextBox^ txtEl;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtStr;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtStol;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtm = (gcnew System::Windows::Forms::TextBox());
			this->txtn = (gcnew System::Windows::Forms::TextBox());
			this->txta = (gcnew System::Windows::Forms::TextBox());
			this->txtb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lstMatr1 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cmdCalc = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->txtEl = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtStr = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtStol = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(23, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label2->Location = System::Drawing::Point(231, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Размер исходной матрицы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(139, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"число строк m";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(350, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"число столбцов n";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label5->Location = System::Drawing::Point(228, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Диапазон случайных чисел";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(130, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"левая граница a";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(328, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"правая граница b";
			// 
			// txtm
			// 
			this->txtm->Location = System::Drawing::Point(249, 136);
			this->txtm->Name = L"txtm";
			this->txtm->Size = System::Drawing::Size(70, 20);
			this->txtm->TabIndex = 7;
			// 
			// txtn
			// 
			this->txtn->Location = System::Drawing::Point(479, 136);
			this->txtn->Name = L"txtn";
			this->txtn->Size = System::Drawing::Size(70, 20);
			this->txtn->TabIndex = 8;
			// 
			// txta
			// 
			this->txta->Location = System::Drawing::Point(249, 218);
			this->txta->Name = L"txta";
			this->txta->Size = System::Drawing::Size(70, 20);
			this->txta->TabIndex = 9;
			// 
			// txtb
			// 
			this->txtb->Location = System::Drawing::Point(456, 218);
			this->txtb->Name = L"txtb";
			this->txtb->Size = System::Drawing::Size(70, 20);
			this->txtb->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label8->Location = System::Drawing::Point(77, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Исходная матрица";
			// 
			// lstMatr1
			// 
			this->lstMatr1->FormattingEnabled = true;
			this->lstMatr1->Location = System::Drawing::Point(27, 282);
			this->lstMatr1->Name = L"lstMatr1";
			this->lstMatr1->Size = System::Drawing::Size(231, 186);
			this->lstMatr1->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(29, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(598, 60);
			this->label9->TabIndex = 13;
			this->label9->Text = resources->GetString(L"label9.Text");
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label10->Location = System::Drawing::Point(291, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(161, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Результат выполнения";
			// 
			// cmdCalc
			// 
			this->cmdCalc->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmdCalc->ForeColor = System::Drawing::Color::Black;
			this->cmdCalc->Location = System::Drawing::Point(478, 282);
			this->cmdCalc->Name = L"cmdCalc";
			this->cmdCalc->Size = System::Drawing::Size(149, 42);
			this->cmdCalc->TabIndex = 16;
			this->cmdCalc->Text = L"Решение";
			this->cmdCalc->UseVisualStyleBackColor = true;
			this->cmdCalc->Click += gcnew System::EventHandler(this, &MyForm::cmdCalc_Click);
			// 
			// cmdExit
			// 
			this->cmdExit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmdExit->ForeColor = System::Drawing::Color::Black;
			this->cmdExit->Location = System::Drawing::Point(478, 426);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(149, 42);
			this->cmdExit->TabIndex = 17;
			this->cmdExit->Text = L"Завершить";
			this->cmdExit->UseVisualStyleBackColor = true;
			this->cmdExit->Click += gcnew System::EventHandler(this, &MyForm::cmdExit_Click);
			// 
			// txtEl
			// 
			this->txtEl->Location = System::Drawing::Point(295, 315);
			this->txtEl->Name = L"txtEl";
			this->txtEl->Size = System::Drawing::Size(100, 20);
			this->txtEl->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(291, 292);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Элемент";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(291, 347);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 20);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Строка";
			// 
			// txtStr
			// 
			this->txtStr->Location = System::Drawing::Point(295, 370);
			this->txtStr->Name = L"txtStr";
			this->txtStr->Size = System::Drawing::Size(100, 20);
			this->txtStr->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(291, 402);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(63, 20);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Столбец";
			// 
			// txtStol
			// 
			this->txtStol->Location = System::Drawing::Point(295, 425);
			this->txtStol->Name = L"txtStol";
			this->txtStol->Size = System::Drawing::Size(100, 20);
			this->txtStol->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 483);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtStol);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtStr);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtEl);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->cmdCalc);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lstMatr1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtb);
			this->Controls->Add(this->txta);
			this->Controls->Add(this->txtn);
			this->Controls->Add(this->txtm);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::DarkCyan;
			this->Name = L"MyForm";
			this->Text = L"Динамические двумерные массивы (Любиева, БЭИ2201)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmdCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		lstMatr1->Items->Clear();
		int m, n;
		double a, b;
		if (!GetInt(m, txtm, "Введите число строк матрицы")) return;
		if (!GetInt(n, txtn, "Введите число столбцов матрицы")) return;
		if (!GetDouble(a, txta, "Введите левую границу диапазона")) return;
		if (!GetDouble(b, txtb, "Введите правую границу диапазона")) return;
		double** mas = input(m, n, a, b);
		output(mas, m, n, lstMatr1);
		int* fmin = findmin(mas, m, n);
		int str, stol;
		double boob = findmax(mas, m, n, fmin, str, stol);
		if (boob != 90000)
		{
			txtEl->Text = boob.ToString();
			txtStr->Text = str.ToString();
			txtStol->Text = stol.ToString();
		}
		else
		{
			txtEl->Text = "Результат";
			txtStr->Text = "не";
			txtStol->Text = "получен";
		}
		del(mas, m);
	}
private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
