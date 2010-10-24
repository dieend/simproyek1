#pragma once
#include "Form1.h"
#include "stoktoko.h"
#include "basis.h"
namespace pemilik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  stokBarangToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tokoBajuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gudangToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bantuanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;

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
			//LoadData();
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stokBarangToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tokoBajuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gudangToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bantuanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(513, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->stokBarangToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// stokBarangToolStripMenuItem
			// 
			this->stokBarangToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->tokoBajuToolStripMenuItem, 
				this->gudangToolStripMenuItem});
			this->stokBarangToolStripMenuItem->Name = L"stokBarangToolStripMenuItem";
			this->stokBarangToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->stokBarangToolStripMenuItem->Text = L"Stok Barang";
			// 
			// tokoBajuToolStripMenuItem
			// 
			this->tokoBajuToolStripMenuItem->Name = L"tokoBajuToolStripMenuItem";
			this->tokoBajuToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->tokoBajuToolStripMenuItem->Text = L"Toko Baju";
			this->tokoBajuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tokoBajuToolStripMenuItem_Click);
			// 
			// gudangToolStripMenuItem
			// 
			this->gudangToolStripMenuItem->Name = L"gudangToolStripMenuItem";
			this->gudangToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->gudangToolStripMenuItem->Text = L"Gudang";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->bantuanToolStripMenuItem, 
				this->toolStripMenuItem2});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// bantuanToolStripMenuItem
			// 
			this->bantuanToolStripMenuItem->Name = L"bantuanToolStripMenuItem";
			this->bantuanToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->bantuanToolStripMenuItem->Text = L"Bantuan";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(118, 22);
			this->toolStripMenuItem2->Text = L"About";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 282);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Toko Baju Bandung";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tokoBajuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				stoktoko myForm;
				if (myForm.ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					
				}
				myForm.Show();
			 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			SimpanData();
			this->Close();
		 }
};
}

