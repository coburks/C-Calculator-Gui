#pragma once

namespace Calculatorgui {

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
	private: System::Windows::Forms::Button^ btnSpace;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnClearAll;
	private: System::Windows::Forms::Button^ btnClearEntry;
	private: System::Windows::Forms::Button^ btnSign;
	private: System::Windows::Forms::Button^ btnPlus;


	protected:





	private: System::Windows::Forms::Button^ btnInt9;

	private: System::Windows::Forms::Button^ btnInt8;

	private: System::Windows::Forms::Button^ btnInt7;
	private: System::Windows::Forms::Button^ btnMinus;


	private: System::Windows::Forms::Button^ btnInt6;

	private: System::Windows::Forms::Button^ btnInt5;

	private: System::Windows::Forms::Button^ btnInt4;
	private: System::Windows::Forms::Button^ btnMultiply;


	private: System::Windows::Forms::Button^ btnInt3;

	private: System::Windows::Forms::Button^ btnInt2;

	private: System::Windows::Forms::Button^ btnInt1;
	private: System::Windows::Forms::Button^ btnDivide;


	private: System::Windows::Forms::Button^ btnEquals;

	private: System::Windows::Forms::Button^ btnInt0;

	private: System::Windows::Forms::Button^ btnDecimal;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnSign = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnInt9 = (gcnew System::Windows::Forms::Button());
			this->btnInt8 = (gcnew System::Windows::Forms::Button());
			this->btnInt7 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnInt6 = (gcnew System::Windows::Forms::Button());
			this->btnInt5 = (gcnew System::Windows::Forms::Button());
			this->btnInt4 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnInt3 = (gcnew System::Windows::Forms::Button());
			this->btnInt2 = (gcnew System::Windows::Forms::Button());
			this->btnInt1 = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnInt0 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnSpace->Location = System::Drawing::Point(16, 156);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(129, 113);
			this->btnSpace->TabIndex = 0;
			this->btnSpace->Text = L"<-";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::btnSpace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(538, 138);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClearAll
			// 
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnClearAll->Location = System::Drawing::Point(151, 156);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(129, 113);
			this->btnClearAll->TabIndex = 2;
			this->btnClearAll->Text = L"C";
			this->btnClearAll->UseVisualStyleBackColor = true;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &MyForm::btnClearAll_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnClearEntry->Location = System::Drawing::Point(286, 156);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(129, 113);
			this->btnClearEntry->TabIndex = 3;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = true;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MyForm::btnClearEntry_Click);
			// 
			// btnSign
			// 
			this->btnSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnSign->Location = System::Drawing::Point(421, 156);
			this->btnSign->Name = L"btnSign";
			this->btnSign->Size = System::Drawing::Size(129, 113);
			this->btnSign->TabIndex = 4;
			this->btnSign->Text = L"+-";
			this->btnSign->UseVisualStyleBackColor = true;
			this->btnSign->Click += gcnew System::EventHandler(this, &MyForm::btnSign_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnPlus->Location = System::Drawing::Point(421, 275);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(129, 113);
			this->btnPlus->TabIndex = 8;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnInt9
			// 
			this->btnInt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt9->Location = System::Drawing::Point(286, 275);
			this->btnInt9->Name = L"btnInt9";
			this->btnInt9->Size = System::Drawing::Size(129, 113);
			this->btnInt9->TabIndex = 7;
			this->btnInt9->Text = L"9";
			this->btnInt9->UseVisualStyleBackColor = true;
			this->btnInt9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt8
			// 
			this->btnInt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt8->Location = System::Drawing::Point(151, 275);
			this->btnInt8->Name = L"btnInt8";
			this->btnInt8->Size = System::Drawing::Size(129, 113);
			this->btnInt8->TabIndex = 6;
			this->btnInt8->Text = L"8";
			this->btnInt8->UseVisualStyleBackColor = true;
			this->btnInt8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt7
			// 
			this->btnInt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt7->Location = System::Drawing::Point(16, 275);
			this->btnInt7->Name = L"btnInt7";
			this->btnInt7->Size = System::Drawing::Size(129, 113);
			this->btnInt7->TabIndex = 5;
			this->btnInt7->Text = L"7";
			this->btnInt7->UseVisualStyleBackColor = true;
			this->btnInt7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnMinus->Location = System::Drawing::Point(421, 394);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(129, 113);
			this->btnMinus->TabIndex = 12;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnInt6
			// 
			this->btnInt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt6->Location = System::Drawing::Point(286, 394);
			this->btnInt6->Name = L"btnInt6";
			this->btnInt6->Size = System::Drawing::Size(129, 113);
			this->btnInt6->TabIndex = 11;
			this->btnInt6->Text = L"6";
			this->btnInt6->UseVisualStyleBackColor = true;
			this->btnInt6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt5
			// 
			this->btnInt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt5->Location = System::Drawing::Point(151, 394);
			this->btnInt5->Name = L"btnInt5";
			this->btnInt5->Size = System::Drawing::Size(129, 113);
			this->btnInt5->TabIndex = 10;
			this->btnInt5->Text = L"5";
			this->btnInt5->UseVisualStyleBackColor = true;
			this->btnInt5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt4
			// 
			this->btnInt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt4->Location = System::Drawing::Point(16, 394);
			this->btnInt4->Name = L"btnInt4";
			this->btnInt4->Size = System::Drawing::Size(129, 113);
			this->btnInt4->TabIndex = 9;
			this->btnInt4->Text = L"4";
			this->btnInt4->UseVisualStyleBackColor = true;
			this->btnInt4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnMultiply->Location = System::Drawing::Point(421, 513);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(129, 113);
			this->btnMultiply->TabIndex = 16;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnInt3
			// 
			this->btnInt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt3->Location = System::Drawing::Point(286, 513);
			this->btnInt3->Name = L"btnInt3";
			this->btnInt3->Size = System::Drawing::Size(129, 113);
			this->btnInt3->TabIndex = 15;
			this->btnInt3->Text = L"3";
			this->btnInt3->UseVisualStyleBackColor = true;
			this->btnInt3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt2
			// 
			this->btnInt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt2->Location = System::Drawing::Point(151, 513);
			this->btnInt2->Name = L"btnInt2";
			this->btnInt2->Size = System::Drawing::Size(129, 113);
			this->btnInt2->TabIndex = 14;
			this->btnInt2->Text = L"2";
			this->btnInt2->UseVisualStyleBackColor = true;
			this->btnInt2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnInt1
			// 
			this->btnInt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt1->Location = System::Drawing::Point(16, 513);
			this->btnInt1->Name = L"btnInt1";
			this->btnInt1->Size = System::Drawing::Size(129, 113);
			this->btnInt1->TabIndex = 13;
			this->btnInt1->Text = L"1";
			this->btnInt1->UseVisualStyleBackColor = true;
			this->btnInt1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnDivide->Location = System::Drawing::Point(421, 632);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(129, 113);
			this->btnDivide->TabIndex = 20;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnEquals->Location = System::Drawing::Point(286, 632);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(129, 113);
			this->btnEquals->TabIndex = 19;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnInt0
			// 
			this->btnInt0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnInt0->Location = System::Drawing::Point(151, 632);
			this->btnInt0->Name = L"btnInt0";
			this->btnInt0->Size = System::Drawing::Size(129, 113);
			this->btnInt0->TabIndex = 18;
			this->btnInt0->Text = L"0";
			this->btnInt0->UseVisualStyleBackColor = true;
			this->btnInt0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->btnDecimal->Location = System::Drawing::Point(16, 632);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(129, 113);
			this->btnDecimal->TabIndex = 17;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 766);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnInt0);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnInt3);
			this->Controls->Add(this->btnInt2);
			this->Controls->Add(this->btnInt1);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnInt6);
			this->Controls->Add(this->btnInt5);
			this->Controls->Add(this->btnInt4);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnInt9);
			this->Controls->Add(this->btnInt8);
			this->Controls->Add(this->btnInt7);
			this->Controls->Add(this->btnSign);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnSpace);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

		// Interger Button Functions
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

		Button^ Numbers = safe_cast<Button^>(sender);

		if (txtDisplay->Text == "0")
		{
			txtDisplay->Text = Numbers->Text;
		}

		else
		{
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;

		}







	}
		   // Operator Button Functions
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);

		firstDigit = Double::Parse(txtDisplay->Text);
		txtDisplay->Text = "";
		operators = NumbersOp->Text;

	}
	private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtDisplay->Text->Contains(".")) {


			txtDisplay->Text = txtDisplay->Text + ".";

		}



	}
		   // Equals Button Functions
	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		secondDigit = Double::Parse(txtDisplay->Text);

		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

		if (operators == "-")
		{
			result = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}

		if (operators == "/")
		{
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);

		}
		if (operators == "*")
		{
			result = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);

		}

		if (txtDisplay->Text == "")
		{
			(txtDisplay->Text == "0");
		}
	}
		   // Clear and Clear Entry Button Functions
	private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e)
	{

		txtDisplay->Text = "0";

	}
	private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e)
	{

		txtDisplay->Text = "0";
	}
		   // Plus or Minus Sign Button Functions
	private: System::Void btnSign_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Contains("-"))
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		else
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}

	}
		   // Space Button Function (clear last digit input "<-")
	private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDisplay->Text->Length > 0)
		{
			txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
		if (txtDisplay->Text == "")
		{
			(txtDisplay->Text == "0");
		}
	}
};
}


