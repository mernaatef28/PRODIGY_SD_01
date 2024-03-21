#pragma once

namespace TemperatureConvertor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TempConv
	/// </summary>
	public ref class TempConv : public System::Windows::Forms::Form
	{
	public:
		TempConv(void)
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
		~TempConv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ FROM;
	protected:

	private: System::Windows::Forms::TextBox^ InputTb;
	private: System::Windows::Forms::TextBox^ Tb1;
	private: System::Windows::Forms::TextBox^ Tb2;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ConvertBtn;
	private: System::Windows::Forms::Button^ ResetBtn;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ output1;
	private: System::Windows::Forms::Label^ output2;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->FROM = (gcnew System::Windows::Forms::Label());
			this->InputTb = (gcnew System::Windows::Forms::TextBox());
			this->Tb1 = (gcnew System::Windows::Forms::TextBox());
			this->Tb2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->ConvertBtn = (gcnew System::Windows::Forms::Button());
			this->ResetBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->output1 = (gcnew System::Windows::Forms::Label());
			this->output2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celsius", L"Fahrenheit", L"Kelvin" });
			this->comboBox1->Location = System::Drawing::Point(78, 40);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TempConv::comboBox1_SelectedIndexChanged);
			// 
			// FROM
			// 
			this->FROM->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FROM->AutoSize = true;
			this->FROM->Font = (gcnew System::Drawing::Font(L"Poor Richard", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FROM->Location = System::Drawing::Point(24, 42);
			this->FROM->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->FROM->Name = L"FROM";
			this->FROM->Size = System::Drawing::Size(41, 14);
			this->FROM->TabIndex = 1;
			this->FROM->Text = L"FROM:";
			// 
			// InputTb
			// 
			this->InputTb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InputTb->Location = System::Drawing::Point(26, 112);
			this->InputTb->Margin = System::Windows::Forms::Padding(2);
			this->InputTb->Name = L"InputTb";
			this->InputTb->Size = System::Drawing::Size(76, 20);
			this->InputTb->TabIndex = 2;
			// 
			// Tb1
			// 
			this->Tb1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tb1->Location = System::Drawing::Point(173, 85);
			this->Tb1->Margin = System::Windows::Forms::Padding(2);
			this->Tb1->Name = L"Tb1";
			this->Tb1->Size = System::Drawing::Size(75, 20);
			this->Tb1->TabIndex = 3;
			// 
			// Tb2
			// 
			this->Tb2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tb2->Location = System::Drawing::Point(173, 140);
			this->Tb2->Margin = System::Windows::Forms::Padding(2);
			this->Tb2->Name = L"Tb2";
			this->Tb2->Size = System::Drawing::Size(75, 20);
			this->Tb2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(9, 194);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->ConvertBtn);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->ResetBtn);
			this->splitContainer1->Size = System::Drawing::Size(284, 80);
			this->splitContainer1->SplitterDistance = 139;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 7;
			// 
			// ConvertBtn
			// 
			this->ConvertBtn->Location = System::Drawing::Point(13, 18);
			this->ConvertBtn->Margin = System::Windows::Forms::Padding(2);
			this->ConvertBtn->Name = L"ConvertBtn";
			this->ConvertBtn->Size = System::Drawing::Size(118, 50);
			this->ConvertBtn->TabIndex = 0;
			this->ConvertBtn->Text = L"CONVERT";
			this->ConvertBtn->UseVisualStyleBackColor = true;
			this->ConvertBtn->Click += gcnew System::EventHandler(this, &TempConv::ConvertBtn_Click);
			// 
			// ResetBtn
			// 
			this->ResetBtn->Location = System::Drawing::Point(12, 19);
			this->ResetBtn->Margin = System::Windows::Forms::Padding(2);
			this->ResetBtn->Name = L"ResetBtn";
			this->ResetBtn->Size = System::Drawing::Size(121, 49);
			this->ResetBtn->TabIndex = 0;
			this->ResetBtn->Text = L"RESET";
			this->ResetBtn->UseVisualStyleBackColor = true;
			this->ResetBtn->Click += gcnew System::EventHandler(this, &TempConv::ResetBtn_Click);

			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poor Richard", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(97, 7);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Convertor";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(136, 133);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(136, 86);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"=";
			// 
			// output1
			// 
			this->output1->AutoSize = true;
			this->output1->Location = System::Drawing::Point(173, 67);
			this->output1->Name = L"output1";
			this->output1->Size = System::Drawing::Size(58, 13);
			this->output1->TabIndex = 12;
			this->output1->Text = L"OUTPUT1";
			// 
			// output2
			// 
			this->output2->AutoSize = true;
			this->output2->Location = System::Drawing::Point(173, 122);
			this->output2->Name = L"output2";
			this->output2->Size = System::Drawing::Size(58, 13);
			this->output2->TabIndex = 13;
			this->output2->Text = L"OUTPUT2";
			
			// 
			// TempConv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 289);
			this->Controls->Add(this->output2);
			this->Controls->Add(this->output1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->Tb2);
			this->Controls->Add(this->Tb1);
			this->Controls->Add(this->InputTb);
			this->Controls->Add(this->FROM);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TempConv";
			this->Text = L"TempConv";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem->ToString() == "Celsius") {
			output1->Text = "Fahrenheit";
			output2->Text = "Kelvin";
		}
		else if (comboBox1->SelectedItem->ToString() == "Fahrenheit") {
			output1->Text = "Celsius";
			output2->Text = "Kelvin";
		}
		else if (comboBox1->SelectedItem->ToString() == "Kelvin") {
			output1->Text = "Celsius";
			output2->Text = "Fahrenheit";
		}
	}

	private: System::Void ConvertBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		double input = Double::Parse(InputTb->Text);
		double output1, output2;
		if (comboBox1->SelectedItem != nullptr) {
			if (comboBox1->SelectedItem->ToString() == "Celsius") {
				// Convert Celsius to Fahrenheit and Kelvin
				output1 = input * 9.0 / 5.0 + 32;
				output2 = input + 273.15;
			}
			else if (comboBox1->SelectedItem->ToString() == "Fahrenheit") {
				// Convert Fahrenheit to Celsius and Kelvin
				output1 = (input - 32) * 5.0 / 9.0;
				output2 = (input - 32) * 5.0 / 9.0 + 273.15;
			}
			else if (comboBox1->SelectedItem->ToString() == "Kelvin") {
				// Convert Kelvin to Celsius and Fahrenheit
				output1 = input - 273.15;
				output2 = (input - 273.15) * 9.0 / 5.0 + 32;
			}

			Tb1->Text = output1.ToString();
			Tb2->Text = output2.ToString();
		}
	}


	private: System::Void ResetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Clear the input and output fields
		InputTb->Clear();
		Tb1->Clear();
		Tb2->Clear();

		// Reset the ComboBox
		comboBox1->SelectedIndex = -1;
	}

};
}
