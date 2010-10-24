#pragma once
#include "tambahstok.h"
#include "hapusdata.h"
#include "pindahbarang.h"
#include "gantidata.h"

namespace pemilik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ubahstok
	/// </summary>
	public ref class ubahstok : public System::Windows::Forms::Form
	{
	public:
		ubahstok(void)
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
		~ubahstok()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  tambahbutton;
	private: System::Windows::Forms::Button^  hapusbutton;
	private: System::Windows::Forms::Button^  gantibutton;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  pindahbutton;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tambahbutton = (gcnew System::Windows::Forms::Button());
			this->hapusbutton = (gcnew System::Windows::Forms::Button());
			this->gantibutton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pindahbutton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(298, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pengguna dapat mengubah isi database stok toko baju.\r\n";
			// 
			// tambahbutton
			// 
			this->tambahbutton->Location = System::Drawing::Point(5, 45);
			this->tambahbutton->Name = L"tambahbutton";
			this->tambahbutton->Size = System::Drawing::Size(90, 38);
			this->tambahbutton->TabIndex = 2;
			this->tambahbutton->Text = L"Tambah data";
			this->tambahbutton->UseVisualStyleBackColor = true;
			this->tambahbutton->Click += gcnew System::EventHandler(this, &ubahstok::tambahbutton_Click);
			// 
			// hapusbutton
			// 
			this->hapusbutton->Location = System::Drawing::Point(5, 89);
			this->hapusbutton->Name = L"hapusbutton";
			this->hapusbutton->Size = System::Drawing::Size(90, 38);
			this->hapusbutton->TabIndex = 3;
			this->hapusbutton->Text = L"Hapus Data";
			this->hapusbutton->UseVisualStyleBackColor = true;
			this->hapusbutton->Click += gcnew System::EventHandler(this, &ubahstok::hapusbutton_Click);
			// 
			// gantibutton
			// 
			this->gantibutton->Location = System::Drawing::Point(5, 133);
			this->gantibutton->Name = L"gantibutton";
			this->gantibutton->Size = System::Drawing::Size(90, 38);
			this->gantibutton->TabIndex = 4;
			this->gantibutton->Text = L"Ganti Data";
			this->gantibutton->UseVisualStyleBackColor = true;
			this->gantibutton->Click += gcnew System::EventHandler(this, &ubahstok::gantibutton_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(106, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Menambah stok baru, misal menambahkan produk baru ";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(106, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 34);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Menghapus stok lama, misal menghapus produk lama";
			this->label3->Click += gcnew System::EventHandler(this, &ubahstok::label3_Click);
			// 
			// pindahbutton
			// 
			this->pindahbutton->Location = System::Drawing::Point(5, 177);
			this->pindahbutton->Name = L"pindahbutton";
			this->pindahbutton->Size = System::Drawing::Size(90, 38);
			this->pindahbutton->TabIndex = 7;
			this->pindahbutton->Text = L"Pindah Barang";
			this->pindahbutton->UseVisualStyleBackColor = true;
			this->pindahbutton->Click += gcnew System::EventHandler(this, &ubahstok::pindahbutton_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(106, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 34);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Mengganti stok, misal menggantikan produk lama dengan produk baru";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(106, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 34);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Memindahkan stok yang berada di toko ke gudang.";
			// 
			// ubahstok
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 227);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pindahbutton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->gantibutton);
			this->Controls->Add(this->hapusbutton);
			this->Controls->Add(this->tambahbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ubahstok";
			this->Text = L"Ubah Stok";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tambahbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 tambahstok myForm;
				if (myForm.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm.Show();

		 }
private: System::Void hapusbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 	hapusdata myForm;
				if (myForm.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm.Show();
		 }
private: System::Void gantibutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 	gantidata myForm;
				if (myForm.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm.Show();
		 }
private: System::Void pindahbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 	pindahbarang myForm;
				if (myForm.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm.Show();
		 }
};
}
