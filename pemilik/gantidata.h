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
	/// Summary for gantidata
	/// </summary>
	public ref class gantidata : public System::Windows::Forms::Form
	{
	public:
		gantidata(void)
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
		~gantidata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  statuslabel;
	protected: 
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  batalbutton;
	private: System::Windows::Forms::Button^  gantibutton;

	private: System::Windows::Forms::TextBox^  hargatext;
	private: System::Windows::Forms::TextBox^  jumlahtext;
	private: System::Windows::Forms::TextBox^  ukurantext;
	private: System::Windows::Forms::TextBox^  namatext;
	private: System::Windows::Forms::TextBox^  kodetext;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lamalabel;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  namabarutext;
	private: System::Windows::Forms::TextBox^  ukuranbarutext;
	private: System::Windows::Forms::TextBox^  jumlahbarutext;
	private: System::Windows::Forms::TextBox^  hargabarutext;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  masukbutton;

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
			this->statuslabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->batalbutton = (gcnew System::Windows::Forms::Button());
			this->gantibutton = (gcnew System::Windows::Forms::Button());
			this->hargatext = (gcnew System::Windows::Forms::TextBox());
			this->jumlahtext = (gcnew System::Windows::Forms::TextBox());
			this->ukurantext = (gcnew System::Windows::Forms::TextBox());
			this->namatext = (gcnew System::Windows::Forms::TextBox());
			this->kodetext = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lamalabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->namabarutext = (gcnew System::Windows::Forms::TextBox());
			this->ukuranbarutext = (gcnew System::Windows::Forms::TextBox());
			this->jumlahbarutext = (gcnew System::Windows::Forms::TextBox());
			this->hargabarutext = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->masukbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// statuslabel
			// 
			this->statuslabel->Location = System::Drawing::Point(7, 226);
			this->statuslabel->Name = L"statuslabel";
			this->statuslabel->Size = System::Drawing::Size(176, 56);
			this->statuslabel->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Status";
			// 
			// batalbutton
			// 
			this->batalbutton->Location = System::Drawing::Point(395, 261);
			this->batalbutton->Name = L"batalbutton";
			this->batalbutton->Size = System::Drawing::Size(79, 29);
			this->batalbutton->TabIndex = 21;
			this->batalbutton->Text = L"Batal";
			this->batalbutton->UseVisualStyleBackColor = true;
			this->batalbutton->Click += gcnew System::EventHandler(this, &gantidata::batalbutton_Click);
			// 
			// gantibutton
			// 
			this->gantibutton->Location = System::Drawing::Point(395, 226);
			this->gantibutton->Name = L"gantibutton";
			this->gantibutton->Size = System::Drawing::Size(79, 29);
			this->gantibutton->TabIndex = 22;
			this->gantibutton->Text = L"Ganti";
			this->gantibutton->UseVisualStyleBackColor = true;
			this->gantibutton->Click += gcnew System::EventHandler(this, &gantidata::gantibutton_Click);
			// 
			// hargatext
			// 
			this->hargatext->Enabled = false;
			this->hargatext->Location = System::Drawing::Point(92, 176);
			this->hargatext->Name = L"hargatext";
			this->hargatext->Size = System::Drawing::Size(91, 20);
			this->hargatext->TabIndex = 18;
			// 
			// jumlahtext
			// 
			this->jumlahtext->Enabled = false;
			this->jumlahtext->Location = System::Drawing::Point(92, 146);
			this->jumlahtext->Name = L"jumlahtext";
			this->jumlahtext->Size = System::Drawing::Size(91, 20);
			this->jumlahtext->TabIndex = 19;
			// 
			// ukurantext
			// 
			this->ukurantext->Enabled = false;
			this->ukurantext->Location = System::Drawing::Point(92, 118);
			this->ukurantext->Name = L"ukurantext";
			this->ukurantext->Size = System::Drawing::Size(91, 20);
			this->ukurantext->TabIndex = 20;
			// 
			// namatext
			// 
			this->namatext->Enabled = false;
			this->namatext->Location = System::Drawing::Point(92, 92);
			this->namatext->Name = L"namatext";
			this->namatext->Size = System::Drawing::Size(91, 20);
			this->namatext->TabIndex = 17;
			// 
			// kodetext
			// 
			this->kodetext->Location = System::Drawing::Point(92, 43);
			this->kodetext->Name = L"kodetext";
			this->kodetext->Size = System::Drawing::Size(91, 20);
			this->kodetext->TabIndex = 16;
			this->kodetext->TextChanged += gcnew System::EventHandler(this, &gantidata::kodetext_TextChanged);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(6, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Ukuran";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(7, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Harga Satuan";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(6, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Jumlah barang";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(6, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nama Barang";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Kode Barang";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Silahkan masukkan kode barang produk yang ingin diganti.\r\nKemudian ganti field ya" 
				L"ng dikehendaki.";
			this->label1->Click += gcnew System::EventHandler(this, &gantidata::label1_Click);
			// 
			// lamalabel
			// 
			this->lamalabel->Location = System::Drawing::Point(9, 68);
			this->lamalabel->Name = L"lamalabel";
			this->lamalabel->Size = System::Drawing::Size(174, 21);
			this->lamalabel->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(189, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"ubah menjadi >>";
			// 
			// namabarutext
			// 
			this->namabarutext->Enabled = false;
			this->namabarutext->Location = System::Drawing::Point(383, 92);
			this->namabarutext->Name = L"namabarutext";
			this->namabarutext->Size = System::Drawing::Size(91, 20);
			this->namabarutext->TabIndex = 17;
			// 
			// ukuranbarutext
			// 
			this->ukuranbarutext->Enabled = false;
			this->ukuranbarutext->Location = System::Drawing::Point(383, 118);
			this->ukuranbarutext->Name = L"ukuranbarutext";
			this->ukuranbarutext->Size = System::Drawing::Size(91, 20);
			this->ukuranbarutext->TabIndex = 20;
			// 
			// jumlahbarutext
			// 
			this->jumlahbarutext->Enabled = false;
			this->jumlahbarutext->Location = System::Drawing::Point(383, 146);
			this->jumlahbarutext->Name = L"jumlahbarutext";
			this->jumlahbarutext->Size = System::Drawing::Size(91, 20);
			this->jumlahbarutext->TabIndex = 19;
			// 
			// hargabarutext
			// 
			this->hargabarutext->Enabled = false;
			this->hargabarutext->Location = System::Drawing::Point(383, 176);
			this->hargabarutext->Name = L"hargabarutext";
			this->hargabarutext->Size = System::Drawing::Size(91, 20);
			this->hargabarutext->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(283, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 20);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Nama Barang";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(283, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 20);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Jumlah barang";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(284, 176);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 20);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Harga Satuan";
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(283, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Ukuran";
			// 
			// masukbutton
			// 
			this->masukbutton->Location = System::Drawing::Point(197, 38);
			this->masukbutton->Name = L"masukbutton";
			this->masukbutton->Size = System::Drawing::Size(83, 24);
			this->masukbutton->TabIndex = 27;
			this->masukbutton->Text = L"Enter kode";
			this->masukbutton->UseVisualStyleBackColor = true;
			this->masukbutton->Click += gcnew System::EventHandler(this, &gantidata::masukbutton_Click);
			// 
			// gantidata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 298);
			this->Controls->Add(this->masukbutton);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lamalabel);
			this->Controls->Add(this->statuslabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->batalbutton);
			this->Controls->Add(this->gantibutton);
			this->Controls->Add(this->hargabarutext);
			this->Controls->Add(this->jumlahbarutext);
			this->Controls->Add(this->hargatext);
			this->Controls->Add(this->ukuranbarutext);
			this->Controls->Add(this->jumlahtext);
			this->Controls->Add(this->namabarutext);
			this->Controls->Add(this->ukurantext);
			this->Controls->Add(this->namatext);
			this->Controls->Add(this->kodetext);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"gantidata";
			this->Text = L"gantidata";
			this->Load += gcnew System::EventHandler(this, &gantidata::gantidata_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void gantidata_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void masukbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 string tmp;
			 MarshalString(this->kodetext->Text,tmp);
			 if (VAR::Mapping.find(tmp) == VAR::Mapping.end()) {
				 this->statuslabel->Text = "Data tidak ditemukan";
			 } else {
				 int i = VAR::Mapping[tmp];
				 this->namabarutext->Enabled = true;
				 this->ukuranbarutext->Enabled = true;
				 this->jumlahbarutext->Enabled = true;
				 this->hargabarutext->Enabled = true;
				 this->statuslabel->Text = "Data berhasil diganti";
				 this->namatext->Text = gcnew String(VAR::Lemari[i].Image.c_str());
				 this->ukurantext->Text = Convert::ToString(VAR::Lemari[i].Ukuran);
				 this->jumlahtext->Text = Convert::ToString(VAR::Lemari[i].StokGudang);;
				 this->hargatext->Text = Convert::ToString(VAR::Lemari[i].Harga);;
				 
			 }
		 }
private: System::Void kodetext_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void gantibutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 string tmp;
			 MarshalString(this->kodetext->Text,tmp);
			 int i = VAR::Mapping[tmp];
			 MarshalString(this->namatext->Text,tmp);
			 VAR::Lemari[i].Image = tmp;
			 MarshalString(this->ukurantext->Text,tmp);
			 VAR::Lemari[i].Ukuran = tmp[0];
			 VAR::Lemari[i].Harga = Convert::ToDouble(this->hargatext->Text);
			 VAR::Lemari[i].StokGudang = Convert::ToInt32(this->jumlahtext->Text);
			 this->statuslabel->Text = "Data berhasil diganti";
			 this->namabarutext->Text = "";
			 this->ukuranbarutext->Text = "";
			 this->jumlahbarutext->Text = "";
			 this->hargabarutext->Text = "";
		 }
private: System::Void batalbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
