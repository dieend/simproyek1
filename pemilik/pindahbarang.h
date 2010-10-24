#pragma once

namespace pemilik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for pindahbarang
	/// </summary>
	public ref class pindahbarang : public System::Windows::Forms::Form
	{
	public:
		pindahbarang(void)
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
		~pindahbarang()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  kodetext;
	private: System::Windows::Forms::Button^  cekbutton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  statuslabel;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  namalabel;
	private: System::Windows::Forms::Label^  jumlahlabel;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  pindahtext;
	private: System::Windows::Forms::Button^  button1;
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
			this->cekbutton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->statuslabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->namalabel = (gcnew System::Windows::Forms::Label());
			this->jumlahlabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pindahtext = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Untuk memindahkan barang dari toko ke gudang, masukkan kode barang yang ingin dip" 
				L"indahkan\r\nbeserta jumlah barang yang ingin dipindah.";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(22, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Kode Barang yang akan dipindah";
			// 
			// kodetext
			// 
			this->kodetext->Location = System::Drawing::Point(124, 93);
			this->kodetext->Name = L"kodetext";
			this->kodetext->Size = System::Drawing::Size(86, 20);
			this->kodetext->TabIndex = 2;
			// 
			// cekbutton
			// 
			this->cekbutton->Location = System::Drawing::Point(226, 80);
			this->cekbutton->Name = L"cekbutton";
			this->cekbutton->Size = System::Drawing::Size(85, 39);
			this->cekbutton->TabIndex = 3;
			this->cekbutton->Text = L"Cek barang";
			this->cekbutton->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Status";
			// 
			// statuslabel
			// 
			this->statuslabel->Location = System::Drawing::Point(23, 239);
			this->statuslabel->Name = L"statuslabel";
			this->statuslabel->Size = System::Drawing::Size(184, 54);
			this->statuslabel->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(22, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Nama barang";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(22, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Jumlah barang";
			// 
			// namalabel
			// 
			this->namalabel->Location = System::Drawing::Point(120, 122);
			this->namalabel->Name = L"namalabel";
			this->namalabel->Size = System::Drawing::Size(79, 16);
			this->namalabel->TabIndex = 7;
			// 
			// jumlahlabel
			// 
			this->jumlahlabel->Location = System::Drawing::Point(120, 148);
			this->jumlahlabel->Name = L"jumlahlabel";
			this->jumlahlabel->Size = System::Drawing::Size(79, 16);
			this->jumlahlabel->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(22, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 42);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Masukkan jumlah yang ingin dipindahkan";
			// 
			// pindahtext
			// 
			this->pindahtext->Location = System::Drawing::Point(123, 180);
			this->pindahtext->Name = L"pindahtext";
			this->pindahtext->Size = System::Drawing::Size(87, 20);
			this->pindahtext->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(226, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Pindah ke gudang";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pindahbarang
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 305);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pindahtext);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->jumlahlabel);
			this->Controls->Add(this->namalabel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->statuslabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cekbutton);
			this->Controls->Add(this->kodetext);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"pindahbarang";
			this->Text = L"pindahbarang";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
