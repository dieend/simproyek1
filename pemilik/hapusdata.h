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
	/// Summary for hapusdata
	/// </summary>
	public ref class hapusdata : public System::Windows::Forms::Form
	{
	public:
		hapusdata(void)
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
		~hapusdata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  kodetext;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  statuslabel;
	private: System::Windows::Forms::Button^  hapusbutton;
	private: System::Windows::Forms::Button^  batalbutton;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->kodetext = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->statuslabel = (gcnew System::Windows::Forms::Label());
			this->hapusbutton = (gcnew System::Windows::Forms::Button());
			this->batalbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Silahkan masukkan kode barang untuk menghapus data tentang barang tersebut.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Kode Barang";
			// 
			// kodetext
			// 
			this->kodetext->Location = System::Drawing::Point(88, 43);
			this->kodetext->Name = L"kodetext";
			this->kodetext->Size = System::Drawing::Size(97, 20);
			this->kodetext->TabIndex = 2;
			this->kodetext->TextChanged += gcnew System::EventHandler(this, &hapusdata::kodetext_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Status";
			// 
			// statuslabel
			// 
			this->statuslabel->Location = System::Drawing::Point(14, 123);
			this->statuslabel->Name = L"statuslabel";
			this->statuslabel->Size = System::Drawing::Size(255, 59);
			this->statuslabel->TabIndex = 4;
			// 
			// hapusbutton
			// 
			this->hapusbutton->Location = System::Drawing::Point(15, 69);
			this->hapusbutton->Name = L"hapusbutton";
			this->hapusbutton->Size = System::Drawing::Size(75, 23);
			this->hapusbutton->TabIndex = 5;
			this->hapusbutton->Text = L"Hapus Barang";
			this->hapusbutton->UseVisualStyleBackColor = true;
			this->hapusbutton->Click += gcnew System::EventHandler(this, &hapusdata::hapusbutton_Click);
			// 
			// batalbutton
			// 
			this->batalbutton->Location = System::Drawing::Point(96, 69);
			this->batalbutton->Name = L"batalbutton";
			this->batalbutton->Size = System::Drawing::Size(75, 23);
			this->batalbutton->TabIndex = 5;
			this->batalbutton->Text = L"Batal";
			this->batalbutton->UseVisualStyleBackColor = true;
			// 
			// hapusdata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 190);
			this->Controls->Add(this->batalbutton);
			this->Controls->Add(this->hapusbutton);
			this->Controls->Add(this->statuslabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->kodetext);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"hapusdata";
			this->Text = L"hapusdata";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void kodetext_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void hapusbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 string tmp;
			 MarshalString(this->kodetext->Text,tmp);
			 if (VAR::Mapping.find(tmp) == VAR::Mapping.end()) {
				this->statuslabel->Text = "Data tidak ditemukan";
			 } else {
				int i = VAR::Mapping[tmp];
				VAR::Lemari.erase(VAR::Lemari.begin()+i);
				this->statuslabel->Text = "Data telah dihapus";
			 }
		 }
};
}
