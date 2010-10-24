#pragma once
#include "basis.h"
#include "marshal.h"

namespace pemilik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for lihatbarang
	/// </summary>
	public ref class lihatbarang : public System::Windows::Forms::Form
	{
	public:
		lihatbarang(void)
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
		~lihatbarang()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  kodelabel;
	private: System::Windows::Forms::Label^  namalabel;
	private: System::Windows::Forms::Label^  ukuranlabel;



	private: System::Windows::Forms::Label^  hargalabel;

	private: System::Windows::Forms::Label^  jumlahlabel;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->kodelabel = (gcnew System::Windows::Forms::Label());
			this->namalabel = (gcnew System::Windows::Forms::Label());
			this->ukuranlabel = (gcnew System::Windows::Forms::Label());
			this->hargalabel = (gcnew System::Windows::Forms::Label());
			this->jumlahlabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(184, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Next ->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lihatbarang::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"<- Prev";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lihatbarang::button2_Click);
			// 
			// kodelabel
			// 
			this->kodelabel->AutoSize = true;
			this->kodelabel->Location = System::Drawing::Point(29, 45);
			this->kodelabel->Name = L"kodelabel";
			this->kodelabel->Size = System::Drawing::Size(69, 13);
			this->kodelabel->TabIndex = 2;
			this->kodelabel->Text = L"Kode Barang";
			this->kodelabel->Click += gcnew System::EventHandler(this, &lihatbarang::kodelabel_Click);
			// 
			// namalabel
			// 
			this->namalabel->AutoSize = true;
			this->namalabel->Location = System::Drawing::Point(29, 67);
			this->namalabel->Name = L"namalabel";
			this->namalabel->Size = System::Drawing::Size(72, 13);
			this->namalabel->TabIndex = 3;
			this->namalabel->Text = L"Nama Barang";
			// 
			// ukuranlabel
			// 
			this->ukuranlabel->AutoSize = true;
			this->ukuranlabel->Location = System::Drawing::Point(29, 93);
			this->ukuranlabel->Name = L"ukuranlabel";
			this->ukuranlabel->Size = System::Drawing::Size(42, 13);
			this->ukuranlabel->TabIndex = 4;
			this->ukuranlabel->Text = L"Ukuran";
			// 
			// hargalabel
			// 
			this->hargalabel->AutoSize = true;
			this->hargalabel->Location = System::Drawing::Point(29, 119);
			this->hargalabel->Name = L"hargalabel";
			this->hargalabel->Size = System::Drawing::Size(36, 13);
			this->hargalabel->TabIndex = 5;
			this->hargalabel->Text = L"Harga";
			// 
			// jumlahlabel
			// 
			this->jumlahlabel->AutoSize = true;
			this->jumlahlabel->Location = System::Drawing::Point(29, 145);
			this->jumlahlabel->Name = L"jumlahlabel";
			this->jumlahlabel->Size = System::Drawing::Size(40, 13);
			this->jumlahlabel->TabIndex = 6;
			this->jumlahlabel->Text = L"Jumlah";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &lihatbarang::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(127, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(127, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(106, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(127, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(127, 20);
			this->textBox5->TabIndex = 11;
			// 
			// lihatbarang
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 272);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->jumlahlabel);
			this->Controls->Add(this->hargalabel);
			this->Controls->Add(this->ukuranlabel);
			this->Controls->Add(this->namalabel);
			this->Controls->Add(this->kodelabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"lihatbarang";
			this->Text = L"Data Barang";
			this->ResumeLayout(false);
			this->PerformLayout();

			if (VAR::Lemari.size() >0) {
				this->textBox1->Text = gcnew String(VAR::Lemari[0].Kode.c_str());
				this->textBox2->Text = gcnew String(VAR::Lemari[0].Image.c_str());
				this->textBox3->Text = Convert::ToString(VAR::Lemari[0].Ukuran);
				this->textBox4->Text = Convert::ToString(VAR::Lemari[0].Harga);
				this->textBox5->Text = Convert::ToString(VAR::Lemari[0].StokGudang);
				VAR::n = 0;
			}

		}
#pragma endregion





private: System::Void kodelabel_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 TypeBaju Baju = VAR::Lemari[VAR::n];
			 if (NextBaju(&Baju, VAR::n)) {
				this->textBox1->Text = gcnew String(Baju.Kode.c_str());
				this->textBox2->Text = gcnew String(Baju.Image.c_str());
				this->textBox3->Text = Convert::ToString(Baju.Ukuran);
				this->textBox4->Text = Convert::ToString(Baju.Harga);
				this->textBox5->Text = Convert::ToString(Baju.StokGudang);
			 } else {
				 this->button1->Enabled = false;
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
