#pragma once
#include "task_din.h"

namespace Form3 {

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
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtMas1;

	private: System::Windows::Forms::Button^ cmdCalc;
	private: System::Windows::Forms::Button^ cmdExit;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ lstMas2;

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
			this->txtMas1 = (gcnew System::Windows::Forms::TextBox());
			this->cmdCalc = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lstMas2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(503, 82);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(48, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Исходный массив";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Crimson;
			this->label3->Location = System::Drawing::Point(252, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Новый массив";
			// 
			// txtMas1
			// 
			this->txtMas1->Location = System::Drawing::Point(43, 129);
			this->txtMas1->Multiline = true;
			this->txtMas1->Name = L"txtMas1";
			this->txtMas1->Size = System::Drawing::Size(139, 235);
			this->txtMas1->TabIndex = 3;
			// 
			// cmdCalc
			// 
			this->cmdCalc->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmdCalc->Location = System::Drawing::Point(406, 129);
			this->cmdCalc->Name = L"cmdCalc";
			this->cmdCalc->Size = System::Drawing::Size(121, 57);
			this->cmdCalc->TabIndex = 5;
			this->cmdCalc->Text = L"Решение";
			this->cmdCalc->UseVisualStyleBackColor = true;
			this->cmdCalc->Click += gcnew System::EventHandler(this, &MyForm::cmdCalc_Click);
			// 
			// cmdExit
			// 
			this->cmdExit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmdExit->Location = System::Drawing::Point(406, 307);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(121, 57);
			this->cmdExit->TabIndex = 6;
			this->cmdExit->Text = L"Завершить";
			this->cmdExit->UseVisualStyleBackColor = true;
			this->cmdExit->Click += gcnew System::EventHandler(this, &MyForm::cmdExit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(106, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(347, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Не нажимайте Enter после ввода последнего числа!";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lstMas2
			// 
			this->lstMas2->FormattingEnabled = true;
			this->lstMas2->Location = System::Drawing::Point(235, 129);
			this->lstMas2->Name = L"lstMas2";
			this->lstMas2->Size = System::Drawing::Size(139, 238);
			this->lstMas2->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 415);
			this->Controls->Add(this->lstMas2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->cmdCalc);
			this->Controls->Add(this->txtMas1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Одномерные динамические массивы (Любиева, БЭИ2201)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmdCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		lstMas2->Items->Clear();
		int n = 0, m = 0;
		int* mas = input(n, txtMas1);
		if (!mas) return;
		int* newmas = task(mas, n, m);
		output(newmas, m, lstMas2);
		if (mas) delete[] mas;
		if (newmas) delete[] newmas;
	}
private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
