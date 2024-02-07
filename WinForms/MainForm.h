#pragma once

#include <iostream>
#include <string>
#include "Complete.h"
#include "Script.h"
#include "Sec.h"
#include <msclr\marshal_cppstd.h>

namespace GURU2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class MainForm : public System::Windows::Forms::Form {
	public:
		MainForm() {
			InitializeComponent();
		}

	protected:
		~MainForm() {
			if (components) {
				delete components;
			}
		}

	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ B_Cancel;
	private: System::Windows::Forms::Button^ B_Open;
	private: System::Windows::Forms::Button^ B_Start;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ B_Save;
	private: System::Windows::Forms::TextBox^ SaveTextBox;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ ScriptTextBox;
	private: System::Windows::Forms::Button^ B_script;
	private: System::Windows::Forms::Label^ label6;
	private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated 
		   void InitializeComponent() {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->B_Cancel = (gcnew System::Windows::Forms::Button());
			   this->B_Open = (gcnew System::Windows::Forms::Button());
			   this->B_Start = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->B_Save = (gcnew System::Windows::Forms::Button());
			   this->SaveTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->ScriptTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->B_script = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(181, 58);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(463, 20);
			   this->textBox1->TabIndex = 3;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(554, 18);
			   this->label1->TabIndex = 5;
			   this->label1->Text = L"Программа для анализа бухгалтерской отчетности юридических лиц";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(178, 42);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(413, 13);
			   this->label3->TabIndex = 7;
			   this->label3->Text = L"Укажите полный путь к файлу (путь + название файла) или нажмите \"Открыть\"";
			   // 
			   // B_Cancel
			   // 
			   this->B_Cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->B_Cancel->Location = System::Drawing::Point(663, 211);
			   this->B_Cancel->Name = L"B_Cancel";
			   this->B_Cancel->Size = System::Drawing::Size(92, 26);
			   this->B_Cancel->TabIndex = 8;
			   this->B_Cancel->Text = L"Отмена";
			   this->B_Cancel->UseVisualStyleBackColor = true;
			   this->B_Cancel->Click += gcnew System::EventHandler(this, &MainForm::Cancel_Click);
			   // 
			   // B_Open
			   // 
			   this->B_Open->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->B_Open->Location = System::Drawing::Point(663, 54);
			   this->B_Open->Name = L"B_Open";
			   this->B_Open->Size = System::Drawing::Size(92, 26);
			   this->B_Open->TabIndex = 9;
			   this->B_Open->Text = L"Открыть";
			   this->B_Open->UseVisualStyleBackColor = true;
			   this->B_Open->Click += gcnew System::EventHandler(this, &MainForm::B_OpenFileDialog_Click);
			   // 
			   // B_Start
			   // 
			   this->B_Start->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->B_Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->B_Start->Location = System::Drawing::Point(552, 211);
			   this->B_Start->Name = L"B_Start";
			   this->B_Start->Size = System::Drawing::Size(92, 26);
			   this->B_Start->TabIndex = 10;
			   this->B_Start->Text = L"Начать";
			   this->B_Start->UseVisualStyleBackColor = true;
			   this->B_Start->Click += gcnew System::EventHandler(this, &MainForm::B_Start_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(12, 211);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(131, 26);
			   this->label4->TabIndex = 12;
			   this->label4->Text = L"Gilmutdinov Ruslan - 2023\r\nGitHub: RussellMorryson\r\n";
			   this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->pictureBox1->Location = System::Drawing::Point(12, 30);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(160, 167);
			   this->pictureBox1->TabIndex = 13;
			   this->pictureBox1->TabStop = false;
			   // 
			   // B_Save
			   // 
			   this->B_Save->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->B_Save->Location = System::Drawing::Point(663, 108);
			   this->B_Save->Name = L"B_Save";
			   this->B_Save->Size = System::Drawing::Size(92, 25);
			   this->B_Save->TabIndex = 14;
			   this->B_Save->Text = L"Сохранить в";
			   this->B_Save->UseVisualStyleBackColor = true;
			   this->B_Save->Click += gcnew System::EventHandler(this, &MainForm::B_Save_Click);
			   // 
			   // SaveTextBox
			   // 
			   this->SaveTextBox->Location = System::Drawing::Point(181, 111);
			   this->SaveTextBox->Name = L"SaveTextBox";
			   this->SaveTextBox->Size = System::Drawing::Size(463, 20);
			   this->SaveTextBox->TabIndex = 15;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(178, 95);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(411, 13);
			   this->label5->TabIndex = 16;
			   this->label5->Text = L"Укажите полный путь для сохранения результатов или нажмите \"Сохранить в\"";
			   // 
			   // ScriptTextBox
			   // 
			   this->ScriptTextBox->Location = System::Drawing::Point(181, 163);
			   this->ScriptTextBox->Name = L"ScriptTextBox";
			   this->ScriptTextBox->Size = System::Drawing::Size(463, 20);
			   this->ScriptTextBox->TabIndex = 18;
			   // 
			   // B_script
			   // 
			   this->B_script->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->B_script->Location = System::Drawing::Point(663, 159);
			   this->B_script->Name = L"B_script";
			   this->B_script->Size = System::Drawing::Size(92, 26);
			   this->B_script->TabIndex = 19;
			   this->B_script->Text = L"Открыть";
			   this->B_script->UseVisualStyleBackColor = true;
			   this->B_script->Click += gcnew System::EventHandler(this, &MainForm::B_SelectScript_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(178, 149);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(456, 13);
			   this->label6->TabIndex = 20;
			   this->label6->Text = L"Укажите полный путь к файлу скрипту (путь + название файла) или нажмите \"Открыть\""
				   L"";
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(767, 249);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->B_script);
			   this->Controls->Add(this->ScriptTextBox);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->SaveTextBox);
			   this->Controls->Add(this->B_Save);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->B_Start);
			   this->Controls->Add(this->B_Open);
			   this->Controls->Add(this->B_Cancel);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox1);
			   this->Cursor = System::Windows::Forms::Cursors::Arrow;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"MainForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"GURU v2.0";
			   this->Click += gcnew System::EventHandler(this, &MainForm::B_OpenFileDialog_Click);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void B_Save_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "UTF-8");
		String^ SelectedLast;
		FolderBrowserDialog^ dialog = gcnew FolderBrowserDialog();
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			SelectedLast = dialog->SelectedPath;
		SaveTextBox->Text = SelectedLast;
	}

	private: System::Void B_OpenFileDialog_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "UTF-8");
		Stream^ mystream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "Escell files (*.xlsx) | *.xlsx | All files (*.*) | *.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((mystream = openFileDialog1->OpenFile()) != nullptr) {

				textBox1->Text = openFileDialog1->FileName;
				mystream->Close();
			}
		}
	}

	private: System::Void B_SelectScript_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "UTF-8");
		Stream^ mystream;
		OpenFileDialog^ script_open_file_dialog = gcnew OpenFileDialog;

		script_open_file_dialog->InitialDirectory = "C:\\";
		script_open_file_dialog->Filter = "Python files (*.py) | *.py | All files (*.*) | *.*";
		script_open_file_dialog->FilterIndex = 2;
		script_open_file_dialog->RestoreDirectory = true;

		if (script_open_file_dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((mystream = script_open_file_dialog->OpenFile()) != nullptr) {

				ScriptTextBox->Text = script_open_file_dialog->FileName;
				mystream->Close();
			}
		}
	}

	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void B_Start_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "RU");

		System::String^ managedString = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string text_folder = context.marshal_as<std::string>(managedString);

		std::string file_folder = "";
		for (char a : text_folder) {
			if (a == '//') {
				a = '\\';
				file_folder += a;
			}
			else {
				file_folder += a;
			}
		}

		System::String^ SaveString = SaveTextBox->Text;
		msclr::interop::marshal_context save_context;
		std::string save_text_folder = save_context.marshal_as<std::string>(SaveString);

		std::string save_folder = "";
		for (char a : save_text_folder) {
			if (a == '//') {
				a = '\\';
				save_folder += a;
			}
			else {
				save_folder += a;
			}
		}
		
		System::String^ ScriptString = ScriptTextBox->Text;
		msclr::interop::marshal_context script_context;
		std::string script_text_folder = script_context.marshal_as<std::string>(ScriptString);

		std::string script_folder = "";
		for (char a : script_text_folder) {
			if (a == '//') {
				a = '\\';
				script_folder += a;
			}
			else {
				script_folder += a;
			}
		}
		int sec_index = Script_work(file_folder, save_folder, script_folder);
		if (sec_index == 0) {
			Complete().ShowDialog();
			this->Close();
		}
		else {
			Sec().ShowDialog();
			this->Close();
		}		
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}