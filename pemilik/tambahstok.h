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
	/// Summary for tambahstok
	/// </summary>
	public ref class tambahstok : public System::Windows::Forms::Form
	{
	public:
		tambahstok(void)
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
		~tambahstok()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  kodetext;
	private: System::Windows::Forms::TextBox^  namatext;
	private: System::Windows::Forms::TextBox^  ukurantext;
	private: System::Windows::Forms::TextBox^  jumlahtext;
	private: System::Windows::Forms::TextBox^  hargatext;
	private: System::Windows::Forms::Button^  tambahbutton;
	private: System::Windows::Forms::Button^  batalbutton;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  statuslabel;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->kodetext = (gcnew System::Windows::Forms::TextBox());
			this->namatext = (gcnew System::Windows::Forms::TextBox());
			this->ukurantext = (gcnew System::Windows::Forms::TextBox());
			this->jumlahtext = (gcnew System::Windows::Forms::TextBox());
			this->hargatext = (gcnew System::Windows::Forms::TextBox());
			this->tambahbutton = (gcnew System::Windows::Forms::Button());
			this->batalbutton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->statuslabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(6, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Silahkan menambah produk baru, masukkan semua data yang diperlukan";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(6, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Kode Barang";
			this->label2->Click += gcnew System::EventHandler(this, &tambahstok::label2_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(6, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nama Barang";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(6, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Jumlah barang";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(7, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Harga Satuan";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(6, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ukuran";
			// 
			// kodetext
			// 
			this->kodetext->Location = System::Drawing::Point(92, 41);
			this->kodetext->Name = L"kodetext";
			this->kodetext->Size = System::Drawing::Size(91, 20);
			this->kodetext->TabIndex = 6;
			// 
			// namatext
			// 
			this->namatext->Location = System::Drawing::Point(92, 67);
			this->namatext->Name = L"namatext";
			this->namatext->Size = System::Drawing::Size(91, 20);
			this->namatext->TabIndex = 6;
			// 
			// ukurantext
			// 
			this->ukurantext->Location = System::Drawing::Point(92, 93);
			this->ukurantext->Name = L"ukurantext";
			this->ukurantext->Size = System::Drawing::Size(91, 20);
			this->ukurantext->TabIndex = 6;
			// 
			// jumlahtext
			// 
			this->jumlahtext->Location = System::Drawing::Point(92, 121);
			this->jumlahtext->Name = L"jumlahtext";
			this->jumlahtext->Size = System::Drawing::Size(91, 20);
			this->jumlahtext->TabIndex = 6;
			// 
			// hargatext
			// 
			this->hargatext->Location = System::Drawing::Point(92, 151);
			this->hargatext->Name = L"hargatext";
			this->hargatext->Size = System::Drawing::Size(91, 20);
			this->hargatext->TabIndex = 6;
			// 
			// tambahbutton
			// 
			this->tambahbutton->Location = System::Drawing::Point(201, 36);
			this->tambahbutton->Name = L"tambahbutton";
			this->tambahbutton->Size = System::Drawing::Size(79, 29);
			this->tambahbutton->TabIndex = 7;
			this->tambahbutton->Text = L"Tambah";
			this->tambahbutton->UseVisualStyleBackColor = true;
			this->tambahbutton->Click += gcnew System::EventHandler(this, &tambahstok::tambahbutton_Click);
			// 
			// batalbutton
			// 
			this->batalbutton->Location = System::Drawing::Point(201, 71);
			this->batalbutton->Name = L"batalbutton";
			this->batalbutton->Size = System::Drawing::Size(79, 29);
			this->batalbutton->TabIndex = 7;
			this->batalbutton->Text = L"Batal";
			this->batalbutton->UseVisualStyleBackColor = true;
			this->batalbutton->Click += gcnew System::EventHandler(this, &tambahstok::batalbutton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(204, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Status";
			// 
			// statuslabel
			// 
			this->statuslabel->Location = System::Drawing::Point(204, 132);
			this->statuslabel->Name = L"statuslabel";
			this->statuslabel->Size = System::Drawing::Size(114, 42);
			this->statuslabel->TabIndex = 9;
			// 
			// tambahstok
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 198);
			this->Controls->Add(this->statuslabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->batalbutton);
			this->Controls->Add(this->tambahbutton);
			this->Controls->Add(this->hargatext);
			this->Controls->Add(this->jumlahtext);
			this->Controls->Add(this->ukurantext);
			this->Controls->Add(this->namatext);
			this->Controls->Add(this->kodetext);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"tambahstok";
			this->Text = L"Tambah Stok";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void tambahbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				 TypeBaju BajuBaru;
				 string tmp;
				 MarshalString(this->kodetext->Text,tmp);
				 BajuBaru.Kode = tmp;
				 MarshalString(this->namatext->Text,tmp);
				 BajuBaru.Image = tmp;
				 MarshalString(this->ukurantext->Text,tmp);
				 BajuBaru.Ukuran = tmp[0];
				 BajuBaru.StokGudang = Convert::ToInt32(this->jumlahtext->Text);
				 BajuBaru.Harga = Convert::ToDouble(this->hargatext->Text);
				 if (TambahBaju(BajuBaru)) {
					 this->kodetext->Text="";
					 this->namatext->Text="";
					 this->ukurantext->Text="";
					 this->jumlahtext->Text="";
					 this->hargatext->Text ="";
					 this->statuslabel->Text="Data Berhasil ditambah";
				 }else  {
					 this->statuslabel->Text="Data telah ada";
				 }
				 
			 }
private: System::Void batalbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();			
		 }
};
}
