#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btnSpace;
	private: System::Windows::Forms::Button^ btnC;

	private: System::Windows::Forms::Button^ btnSwap;
	protected:




	private: System::Windows::Forms::Button^ bntDigit7;
	private: System::Windows::Forms::Button^ bntDigit8;
	private: System::Windows::Forms::Button^ bntDigit9;
	private: System::Windows::Forms::Button^ btnPlus;




	private: System::Windows::Forms::Button^ bntDigit4;
	private: System::Windows::Forms::Button^ bntDigit5;
	private: System::Windows::Forms::Button^ bntDigit6;
	private: System::Windows::Forms::Button^ btnSub;




	private: System::Windows::Forms::Button^ bntDigit1;
	private: System::Windows::Forms::Button^ bntDigit2;
	private: System::Windows::Forms::Button^ bntDigit3;
	private: System::Windows::Forms::Button^ btnMult;




	private: System::Windows::Forms::Button^ bntDigit0;




	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnAns;
	private: System::Windows::Forms::Button^ btnMOD;



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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnSwap = (gcnew System::Windows::Forms::Button());
			this->bntDigit7 = (gcnew System::Windows::Forms::Button());
			this->bntDigit8 = (gcnew System::Windows::Forms::Button());
			this->bntDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->bntDigit4 = (gcnew System::Windows::Forms::Button());
			this->bntDigit5 = (gcnew System::Windows::Forms::Button());
			this->bntDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->bntDigit1 = (gcnew System::Windows::Forms::Button());
			this->bntDigit2 = (gcnew System::Windows::Forms::Button());
			this->bntDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->bntDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnAns = (gcnew System::Windows::Forms::Button());
			this->btnMOD = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(338, 61);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->Location = System::Drawing::Point(12, 93);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(80, 80);
			this->btnSpace->TabIndex = 1;
			this->btnSpace->Text = L"DEL";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::btnSpace_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(98, 93);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(80, 80);
			this->btnC->TabIndex = 1;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnSwap
			// 
			this->btnSwap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwap->Location = System::Drawing::Point(184, 93);
			this->btnSwap->Name = L"btnSwap";
			this->btnSwap->Size = System::Drawing::Size(80, 80);
			this->btnSwap->TabIndex = 1;
			this->btnSwap->Text = L"±";
			this->btnSwap->UseVisualStyleBackColor = true;
			this->btnSwap->Click += gcnew System::EventHandler(this, &MyForm::btnSwap_Click);
			// 
			// bntDigit7
			// 
			this->bntDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit7->Location = System::Drawing::Point(12, 179);
			this->bntDigit7->Name = L"bntDigit7";
			this->bntDigit7->Size = System::Drawing::Size(80, 80);
			this->bntDigit7->TabIndex = 1;
			this->bntDigit7->Text = L"7";
			this->bntDigit7->UseVisualStyleBackColor = true;
			this->bntDigit7->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit8
			// 
			this->bntDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit8->Location = System::Drawing::Point(98, 179);
			this->bntDigit8->Name = L"bntDigit8";
			this->bntDigit8->Size = System::Drawing::Size(80, 80);
			this->bntDigit8->TabIndex = 1;
			this->bntDigit8->Text = L"8";
			this->bntDigit8->UseVisualStyleBackColor = true;
			this->bntDigit8->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit9
			// 
			this->bntDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit9->Location = System::Drawing::Point(184, 179);
			this->bntDigit9->Name = L"bntDigit9";
			this->bntDigit9->Size = System::Drawing::Size(80, 80);
			this->bntDigit9->TabIndex = 1;
			this->bntDigit9->Text = L"9";
			this->bntDigit9->UseVisualStyleBackColor = true;
			this->bntDigit9->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(270, 179);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(80, 80);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// bntDigit4
			// 
			this->bntDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit4->Location = System::Drawing::Point(12, 265);
			this->bntDigit4->Name = L"bntDigit4";
			this->bntDigit4->Size = System::Drawing::Size(80, 80);
			this->bntDigit4->TabIndex = 1;
			this->bntDigit4->Text = L"4";
			this->bntDigit4->UseVisualStyleBackColor = true;
			this->bntDigit4->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit5
			// 
			this->bntDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit5->Location = System::Drawing::Point(98, 265);
			this->bntDigit5->Name = L"bntDigit5";
			this->bntDigit5->Size = System::Drawing::Size(80, 80);
			this->bntDigit5->TabIndex = 1;
			this->bntDigit5->Text = L"5";
			this->bntDigit5->UseVisualStyleBackColor = true;
			this->bntDigit5->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit6
			// 
			this->bntDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit6->Location = System::Drawing::Point(184, 265);
			this->bntDigit6->Name = L"bntDigit6";
			this->bntDigit6->Size = System::Drawing::Size(80, 80);
			this->bntDigit6->TabIndex = 1;
			this->bntDigit6->Text = L"6";
			this->bntDigit6->UseVisualStyleBackColor = true;
			this->bntDigit6->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(270, 265);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(80, 80);
			this->btnSub->TabIndex = 1;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// bntDigit1
			// 
			this->bntDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit1->Location = System::Drawing::Point(12, 351);
			this->bntDigit1->Name = L"bntDigit1";
			this->bntDigit1->Size = System::Drawing::Size(80, 80);
			this->bntDigit1->TabIndex = 1;
			this->bntDigit1->Text = L"1";
			this->bntDigit1->UseVisualStyleBackColor = true;
			this->bntDigit1->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit2
			// 
			this->bntDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit2->Location = System::Drawing::Point(98, 351);
			this->bntDigit2->Name = L"bntDigit2";
			this->bntDigit2->Size = System::Drawing::Size(80, 80);
			this->bntDigit2->TabIndex = 1;
			this->bntDigit2->Text = L"2";
			this->bntDigit2->UseVisualStyleBackColor = true;
			this->bntDigit2->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// bntDigit3
			// 
			this->bntDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit3->Location = System::Drawing::Point(184, 351);
			this->bntDigit3->Name = L"bntDigit3";
			this->bntDigit3->Size = System::Drawing::Size(80, 80);
			this->bntDigit3->TabIndex = 1;
			this->bntDigit3->Text = L"3";
			this->bntDigit3->UseVisualStyleBackColor = true;
			this->bntDigit3->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(270, 351);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(80, 80);
			this->btnMult->TabIndex = 1;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// bntDigit0
			// 
			this->bntDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntDigit0->Location = System::Drawing::Point(12, 437);
			this->bntDigit0->Name = L"bntDigit0";
			this->bntDigit0->Size = System::Drawing::Size(80, 80);
			this->bntDigit0->TabIndex = 1;
			this->bntDigit0->Text = L"0";
			this->bntDigit0->UseVisualStyleBackColor = true;
			this->bntDigit0->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnEqual
			// 
			this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual->Location = System::Drawing::Point(184, 437);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(80, 80);
			this->btnEqual->TabIndex = 1;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(270, 437);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(80, 80);
			this->btnDiv->TabIndex = 1;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// btnAns
			// 
			this->btnAns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAns->Location = System::Drawing::Point(98, 437);
			this->btnAns->Name = L"btnAns";
			this->btnAns->Size = System::Drawing::Size(80, 80);
			this->btnAns->TabIndex = 2;
			this->btnAns->Text = L"Ans";
			this->btnAns->UseVisualStyleBackColor = true;
			this->btnAns->Click += gcnew System::EventHandler(this, &MyForm::callAnswer);
			// 
			// btnMOD
			// 
			this->btnMOD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMOD->Location = System::Drawing::Point(270, 93);
			this->btnMOD->Name = L"btnMOD";
			this->btnMOD->Size = System::Drawing::Size(80, 80);
			this->btnMOD->TabIndex = 3;
			this->btnMOD->Text = L"MOD";
			this->btnMOD->UseVisualStyleBackColor = true;
			this->btnMOD->Click += gcnew System::EventHandler(this, &MyForm::enterOperators);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(365, 529);
			this->Controls->Add(this->btnMOD);
			this->Controls->Add(this->btnAns);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnSwap);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->bntDigit3);
			this->Controls->Add(this->bntDigit6);
			this->Controls->Add(this->bntDigit9);
			this->Controls->Add(this->bntDigit2);
			this->Controls->Add(this->bntDigit5);
			this->Controls->Add(this->bntDigit8);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->bntDigit0);
			this->Controls->Add(this->bntDigit1);
			this->Controls->Add(this->bntDigit4);
			this->Controls->Add(this->bntDigit7);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->txtDisplay);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		long long firstDigit, secondDigit, result, answer, preDigit;
		String^ operators;
		String^ preOP = "";
		bool clickEqual = false;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (clickEqual)
	{
		txtDisplay->Text = "0";
		clickEqual = false;
	}
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		answer = result;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		answer = result;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		answer = result;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		if (secondDigit == 0) MessageBox::Show("Divide or mod by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else
		{
			result = firstDigit / secondDigit;
			answer = result;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}
	else if (operators == "MOD")
	{
		if (secondDigit == 0) MessageBox::Show("Divide or mod by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else
		{
			result = firstDigit % secondDigit;
			answer = result;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	}
	operators = "";
	preDigit = 0;
	preOP = "";
	clickEqual = true;
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text != "") txtDisplay->Text = "";
	else
	{
		txtDisplay->Text = "0";
		preDigit = 0;
		preOP = "";
		answer = 0;
		clickEqual = false;
	}
	
}
private: System::Void btnSwap_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
	clickEqual = false;
}
private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clickEqual)
	{
		txtDisplay->Text = "0";
		clickEqual = false;
	}
	else if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void callAnswer(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "";
	txtDisplay->Text = System::Convert::ToString(answer);
}

private: System::Void enterOperators(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOP = safe_cast<Button^>(sender);
	operators = NumbersOP->Text;
	if (txtDisplay->Text != "")
	{
		firstDigit = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = "";
		if (preOP == "")
		{
			preDigit = firstDigit;
		}
		else if (preOP == "+")
		{
			answer = firstDigit + preDigit;
			firstDigit = answer;
			preDigit = answer;
		}
		else if (preOP == "-")
		{
			answer = preDigit - firstDigit;
			firstDigit = answer;
			preDigit = answer;
		}
		else if (preOP == "*")
		{
			answer = preDigit * answer;
			firstDigit = answer;
			preDigit = answer;
		}
		else if (preOP == "/")
		{
			if (firstDigit == 0) MessageBox::Show("Divide or mod by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else
			{
				answer = preDigit / firstDigit;
				firstDigit = answer;
				preDigit = answer;
			}
		}
		else if (preOP == "MOD")
		{
			if (firstDigit == 0) MessageBox::Show("Divide or mod by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else
			{
				answer = preDigit % firstDigit;
				firstDigit = answer;
				preDigit = answer;
			}
		}
		preOP = operators;
	}
}
};
}
