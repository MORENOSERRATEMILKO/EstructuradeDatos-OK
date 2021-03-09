#pragma once
#include "BitsToBytes.h"
#include <iostream>
#include "msclr\marshal_cppstd.h"

namespace Examplecreateclass3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtIn;
	private: System::Windows::Forms::Button^  btnByteToBite;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txtOut;
	private: System::Windows::Forms::Button^  btnBiteToByte;


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
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->btnByteToBite = (gcnew System::Windows::Forms::Button());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->btnBiteToByte = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(154, 119);
			this->txtIn->Name = L"txtIn";
			this->txtIn->Size = System::Drawing::Size(213, 22);
			this->txtIn->TabIndex = 0;
			// 
			// btnByteToBite
			// 
			this->btnByteToBite->Location = System::Drawing::Point(39, 174);
			this->btnByteToBite->Name = L"btnByteToBite";
			this->btnByteToBite->Size = System::Drawing::Size(213, 54);
			this->btnByteToBite->TabIndex = 1;
			this->btnByteToBite->Text = L"Byte to Bite";
			this->btnByteToBite->UseVisualStyleBackColor = true;
			this->btnByteToBite->Click += gcnew System::EventHandler(this, &Form1::btnVotar_Click);
			// 
			// txtOut
			// 
			this->txtOut->Location = System::Drawing::Point(154, 265);
			this->txtOut->Name = L"txtOut";
			this->txtOut->Size = System::Drawing::Size(213, 22);
			this->txtOut->TabIndex = 2;
			//this->txtOut->TextChanged += gcnew System::EventHandler(this, &Form1::txtVotos_TextChanged);
			// 
			// btnBiteToByte
			// 
			this->btnBiteToByte->Location = System::Drawing::Point(286, 174);
			this->btnBiteToByte->Name = L"btnBiteToByte";
			this->btnBiteToByte->Size = System::Drawing::Size(213, 54);
			this->btnBiteToByte->TabIndex = 3;
			this->btnBiteToByte->Text = L"Bite to Byte";
			this->btnBiteToByte->UseVisualStyleBackColor = true;
			this->btnBiteToByte->Click += gcnew System::EventHandler(this, &Form1::btnBiteToByte_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 441);
			this->Controls->Add(this->btnBiteToByte);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->btnByteToBite);
			this->Controls->Add(this->txtIn);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void btnVotar_Click(System::Object^  sender, System::EventArgs^  e) {
				 BitsToBytes bytes_to_bites; //Creando el objeto 
		 bytes_to_bites.Set_bytes(System::Convert::ToInt32(txtIn->Text));
		 int total;
		 total=bytes_to_bites.calcular_MB_to_mb();
		 txtOut->Text=System::Convert::ToString(total);


			 }
private: System::Void btnBiteToByte_Click(System::Object^  sender, System::EventArgs^  e) {

			  BitsToBytes bites_to_bytes; //Creando el objeto 
		 bites_to_bytes.Set_bites(System::Convert::ToDouble(txtIn->Text));
		 double total1;
		 total1=bites_to_bytes.calcular_mb_to_MB();
		 txtOut->Text=System::Convert::ToString(total1);

			 }
};
}

