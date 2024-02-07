#pragma once

namespace GURU2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Complete : public System::Windows::Forms::Form
	{
	public:
		Complete(void)
		{
			InitializeComponent();
		}

	protected:
		~Complete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ B_Exit;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Complete::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->B_Exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Анализ завершен!\r\nРезультат сохранен!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Complete::label1_Click);
			// 
			// B_Exit
			// 
			this->B_Exit->Location = System::Drawing::Point(117, 55);
			this->B_Exit->Name = L"B_Exit";
			this->B_Exit->Size = System::Drawing::Size(75, 23);
			this->B_Exit->TabIndex = 1;
			this->B_Exit->Text = L"Закрыть";
			this->B_Exit->UseVisualStyleBackColor = true;
			this->B_Exit->Click += gcnew System::EventHandler(this, &Complete::B_Exit_Click);
			// 
			// Complete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(204, 90);
			this->Controls->Add(this->B_Exit);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Complete";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка завершена";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void B_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
