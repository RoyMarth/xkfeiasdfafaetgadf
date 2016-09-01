#pragma once
#include "Student.h"
namespace Debate_Elo_2_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  opfnametbx;
	private: System::Windows::Forms::TextBox^  opschooltbx;


	private: System::Windows::Forms::TextBox^  oplnametbx;

	private: System::Windows::Forms::TextBox^  schooltbx;

	private: System::Windows::Forms::TextBox^  fnametbx;
	private: System::Windows::Forms::TextBox^  lnametbx;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->opfnametbx = (gcnew System::Windows::Forms::TextBox());
			this->opschooltbx = (gcnew System::Windows::Forms::TextBox());
			this->oplnametbx = (gcnew System::Windows::Forms::TextBox());
			this->schooltbx = (gcnew System::Windows::Forms::TextBox());
			this->fnametbx = (gcnew System::Windows::Forms::TextBox());
			this->lnametbx = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// opfnametbx
			// 
			this->opfnametbx->Location = System::Drawing::Point(0, 147);
			this->opfnametbx->Name = L"opfnametbx";
			this->opfnametbx->Size = System::Drawing::Size(100, 20);
			this->opfnametbx->TabIndex = 1;
			// 
			// opschooltbx
			// 
			this->opschooltbx->Location = System::Drawing::Point(82, 173);
			this->opschooltbx->Name = L"opschooltbx";
			this->opschooltbx->Size = System::Drawing::Size(100, 20);
			this->opschooltbx->TabIndex = 2;
			// 
			// oplnametbx
			// 
			this->oplnametbx->Location = System::Drawing::Point(159, 147);
			this->oplnametbx->Name = L"oplnametbx";
			this->oplnametbx->Size = System::Drawing::Size(100, 20);
			this->oplnametbx->TabIndex = 3;
			// 
			// schooltbx
			// 
			this->schooltbx->Location = System::Drawing::Point(82, 92);
			this->schooltbx->Name = L"schooltbx";
			this->schooltbx->Size = System::Drawing::Size(100, 20);
			this->schooltbx->TabIndex = 4;
			// 
			// fnametbx
			// 
			this->fnametbx->Location = System::Drawing::Point(0, 66);
			this->fnametbx->Name = L"fnametbx";
			this->fnametbx->Size = System::Drawing::Size(100, 20);
			this->fnametbx->TabIndex = 5;
			// 
			// lnametbx
			// 
			this->lnametbx->Location = System::Drawing::Point(159, 66);
			this->lnametbx->Name = L"lnametbx";
			this->lnametbx->Size = System::Drawing::Size(100, 20);
			this->lnametbx->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Win", L"Loss" });
			this->comboBox1->Location = System::Drawing::Point(151, 216);
			this->comboBox1->MaxDropDownItems = 2;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Opp First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Opp School";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Opp Last Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"First Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(198, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Last Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"School";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lnametbx);
			this->Controls->Add(this->fnametbx);
			this->Controls->Add(this->schooltbx);
			this->Controls->Add(this->oplnametbx);
			this->Controls->Add(this->opschooltbx);
			this->Controls->Add(this->opfnametbx);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Debate Elo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool win;
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
		if (comboBox1->Text == "Win")
		{
			win = true;
		}
		else if (comboBox1->Text == "Loss")
		{
			win = false;
		}
		else
		{
			MessageBox::Show("Error Please Select either win or loss");
		}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{

}
};
}
