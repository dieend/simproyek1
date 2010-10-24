#pragma once
#include "ubahstok.h"
#include "lihatbarang.h"
namespace pemilik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stoktoko
	/// </summary>
	public ref class stoktoko : public System::Windows::Forms::Form
	{
	public:
		stoktoko(void)
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
		~stoktoko()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  lihatbutton;
	private: System::Windows::Forms::Button^  ubahbutton;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->lihatbutton = (gcnew System::Windows::Forms::Button());
			this->ubahbutton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(337, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selamat datang di program stok toko baju.\r\nDengan program ini, Anda dapat mengaks" 
				L"es database stok toko baju.\r\n";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(489, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// lihatbutton
			// 
			this->lihatbutton->Location = System::Drawing::Point(15, 64);
			this->lihatbutton->Name = L"lihatbutton";
			this->lihatbutton->Size = System::Drawing::Size(98, 35);
			this->lihatbutton->TabIndex = 2;
			this->lihatbutton->Text = L"Melihat Stok";
			this->lihatbutton->UseVisualStyleBackColor = true;
			this->lihatbutton->Click += gcnew System::EventHandler(this, &stoktoko::lihatbutton_Click);
			// 
			// ubahbutton
			// 
			this->ubahbutton->Location = System::Drawing::Point(15, 105);
			this->ubahbutton->Name = L"ubahbutton";
			this->ubahbutton->Size = System::Drawing::Size(98, 35);
			this->ubahbutton->TabIndex = 3;
			this->ubahbutton->Text = L"Ubah Stok";
			this->ubahbutton->UseVisualStyleBackColor = true;
			this->ubahbutton->Click += gcnew System::EventHandler(this, &stoktoko::ubahbutton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Untuk melihat stok barang yang terdapat dalam toko.\r\nProgram akan menampilkan sto" 
				L"k barang yang tersisa.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 39);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Pengguna dapat mengubah isi database toko baju.\r\nPengguna dapat menambah stok, me" 
				L"ngurangi, memindahkan barang\r\ndari toko atau gudang.";
			// 
			// stoktoko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 156);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ubahbutton);
			this->Controls->Add(this->lihatbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"stoktoko";
			this->Text = L"Stok Toko Baju";
			this->Load += gcnew System::EventHandler(this, &stoktoko::stoktoko_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void stoktoko_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void lihatbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				lihatbarang Lihat;
			 	if (Lihat.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
		 }
private: System::Void ubahbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			   ubahstok myForm2;
			 	if (myForm2.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm2.Show();

		 }
};
}
