#pragma once
#include "CRUD.h"
#include "Mail.h"
#include <string>
//using System.Diagnostics;

namespace emailReaderSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace std;
	//using System.Diagnostics


	/// <summary>
	/// Resumen de MailMenu
	/// </summary>
	public ref class MailMenu : public System::Windows::Forms::Form
	{
	public:
		MailMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			hideGroupBox();

		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MailMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ readGroupBox;
	private: System::Windows::Forms::Panel^ readPanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ id;
	private: System::Windows::Forms::TextBox^ readTextBox1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ writeTextBox6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ writeTextBox5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ writeTextBox4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ writeTextBox3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ writeTextBox2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ writeTextBox7;

	private: System::Windows::Forms::GroupBox^ updateGroupBox;
	private: System::Windows::Forms::Panel^ updatePanel;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ updateTextBox7;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ updateTextBox6;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ updateTextBox5;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ updateTextBox4;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ updateTextBox3;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ updateTextBox2;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ updateTextBox1;

	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::Button^ WriteButton;
	private: System::Windows::Forms::Button^ readButton;
	private: System::Windows::Forms::Label^ testLabel;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ searchButton;
private: System::Windows::Forms::Button^ openFile;





	private: System::Windows::Forms::Label^ tittle;

	private: void hideGroupBox() {
		writeGroupBox->Hide();
		readGroupBox->Hide();
		updateGroupBox->Hide();
		//readPanel->Hide();
		//writePanel->Hide();
		//updatePanel->Hide();
	};

	private: System::Windows::Forms::Button^ writeMail;
	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ updateMail;

	private: System::Windows::Forms::GroupBox^ writeGroupBox;

	private: System::Windows::Forms::Panel^ writePanel;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ writeTextBox1;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MailMenu::typeid));
			this->tittle = (gcnew System::Windows::Forms::Label());
			this->writeMail = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->updateMail = (gcnew System::Windows::Forms::Button());
			this->writeGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->writePanel = (gcnew System::Windows::Forms::Panel());
			this->WriteButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->writeTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->readGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->readPanel = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->readButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->readTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->updateGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->updatePanel = (gcnew System::Windows::Forms::Panel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->updateTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->testLabel = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->openFile = (gcnew System::Windows::Forms::Button());
			this->writeGroupBox->SuspendLayout();
			this->writePanel->SuspendLayout();
			this->readGroupBox->SuspendLayout();
			this->readPanel->SuspendLayout();
			this->updateGroupBox->SuspendLayout();
			this->updatePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// tittle
			// 
			this->tittle->AutoSize = true;
			this->tittle->BackColor = System::Drawing::SystemColors::HighlightText;
			this->tittle->Font = (gcnew System::Drawing::Font(L"Cooper Black", 39.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tittle->Location = System::Drawing::Point(384, 36);
			this->tittle->Name = L"tittle";
			this->tittle->Size = System::Drawing::Size(501, 61);
			this->tittle->TabIndex = 0;
			this->tittle->Text = L"Lector de Correos";
			// 
			// writeMail
			// 
			this->writeMail->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->writeMail->Cursor = System::Windows::Forms::Cursors::Hand;
			this->writeMail->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->writeMail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->writeMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->writeMail->Location = System::Drawing::Point(508, 208);
			this->writeMail->Name = L"writeMail";
			this->writeMail->Size = System::Drawing::Size(363, 42);
			this->writeMail->TabIndex = 1;
			this->writeMail->Text = L"Escribir correo";
			this->writeMail->UseVisualStyleBackColor = false;
			this->writeMail->Click += gcnew System::EventHandler(this, &MailMenu::writeMail_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(508, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(363, 42);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"";
			this->button3->Text = L"Leer correo";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MailMenu::readMail_Click);
			// 
			// updateMail
			// 
			this->updateMail->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->updateMail->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updateMail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateMail->Location = System::Drawing::Point(508, 410);
			this->updateMail->Name = L"updateMail";
			this->updateMail->Size = System::Drawing::Size(363, 42);
			this->updateMail->TabIndex = 4;
			this->updateMail->Text = L"Editar correo";
			this->updateMail->UseVisualStyleBackColor = false;
			this->updateMail->Click += gcnew System::EventHandler(this, &MailMenu::updateMail_Click);
			// 
			// writeGroupBox
			// 
			this->writeGroupBox->BackColor = System::Drawing::Color::Black;
			this->writeGroupBox->Controls->Add(this->writePanel);
			this->writeGroupBox->Location = System::Drawing::Point(27, 151);
			this->writeGroupBox->Margin = System::Windows::Forms::Padding(0);
			this->writeGroupBox->Name = L"writeGroupBox";
			this->writeGroupBox->Padding = System::Windows::Forms::Padding(0, 0, 14, 14);
			this->writeGroupBox->Size = System::Drawing::Size(439, 428);
			this->writeGroupBox->TabIndex = 6;
			this->writeGroupBox->TabStop = false;
			this->writeGroupBox->Tag = L"";
			this->writeGroupBox->Text = L"                                                                                 "
				L"                                                                      ";
			// 
			// writePanel
			// 
			this->writePanel->AllowDrop = true;
			this->writePanel->AutoScroll = true;
			this->writePanel->AutoScrollMargin = System::Drawing::Size(0, 10);
			this->writePanel->BackColor = System::Drawing::Color::White;
			this->writePanel->Controls->Add(this->WriteButton);
			this->writePanel->Controls->Add(this->label9);
			this->writePanel->Controls->Add(this->writeTextBox7);
			this->writePanel->Controls->Add(this->label8);
			this->writePanel->Controls->Add(this->writeTextBox6);
			this->writePanel->Controls->Add(this->label7);
			this->writePanel->Controls->Add(this->writeTextBox5);
			this->writePanel->Controls->Add(this->label6);
			this->writePanel->Controls->Add(this->writeTextBox4);
			this->writePanel->Controls->Add(this->label5);
			this->writePanel->Controls->Add(this->writeTextBox3);
			this->writePanel->Controls->Add(this->label4);
			this->writePanel->Controls->Add(this->writeTextBox2);
			this->writePanel->Controls->Add(this->label2);
			this->writePanel->Controls->Add(this->label3);
			this->writePanel->Controls->Add(this->writeTextBox1);
			this->writePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->writePanel->Location = System::Drawing::Point(0, 13);
			this->writePanel->Name = L"writePanel";
			this->writePanel->Size = System::Drawing::Size(425, 401);
			this->writePanel->TabIndex = 7;
			// 
			// WriteButton
			// 
			this->WriteButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->WriteButton->Location = System::Drawing::Point(147, 681);
			this->WriteButton->Name = L"WriteButton";
			this->WriteButton->Size = System::Drawing::Size(115, 32);
			this->WriteButton->TabIndex = 19;
			this->WriteButton->Text = L"Guardar";
			this->WriteButton->UseVisualStyleBackColor = false;
			this->WriteButton->Click += gcnew System::EventHandler(this, &MailMenu::WriteButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->Location = System::Drawing::Point(49, 443);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Contenido";
			// 
			// writeTextBox7
			// 
			this->writeTextBox7->Location = System::Drawing::Point(53, 470);
			this->writeTextBox7->Multiline = true;
			this->writeTextBox7->Name = L"writeTextBox7";
			this->writeTextBox7->Size = System::Drawing::Size(329, 205);
			this->writeTextBox7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label8->Location = System::Drawing::Point(49, 357);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Asunto";
			// 
			// writeTextBox6
			// 
			this->writeTextBox6->Location = System::Drawing::Point(53, 384);
			this->writeTextBox6->Multiline = true;
			this->writeTextBox6->Name = L"writeTextBox6";
			this->writeTextBox6->Size = System::Drawing::Size(329, 56);
			this->writeTextBox6->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label7->Location = System::Drawing::Point(49, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"BCC";
			// 
			// writeTextBox5
			// 
			this->writeTextBox5->Location = System::Drawing::Point(53, 322);
			this->writeTextBox5->Multiline = true;
			this->writeTextBox5->Name = L"writeTextBox5";
			this->writeTextBox5->Size = System::Drawing::Size(329, 32);
			this->writeTextBox5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(49, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"CC";
			// 
			// writeTextBox4
			// 
			this->writeTextBox4->Location = System::Drawing::Point(53, 260);
			this->writeTextBox4->Multiline = true;
			this->writeTextBox4->Name = L"writeTextBox4";
			this->writeTextBox4->Size = System::Drawing::Size(329, 32);
			this->writeTextBox4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(49, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Destinatario";
			// 
			// writeTextBox3
			// 
			this->writeTextBox3->Location = System::Drawing::Point(53, 210);
			this->writeTextBox3->Name = L"writeTextBox3";
			this->writeTextBox3->Size = System::Drawing::Size(329, 20);
			this->writeTextBox3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(49, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Remitente";
			// 
			// writeTextBox2
			// 
			this->writeTextBox2->Location = System::Drawing::Point(53, 160);
			this->writeTextBox2->Name = L"writeTextBox2";
			this->writeTextBox2->Size = System::Drawing::Size(329, 20);
			this->writeTextBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label2->Location = System::Drawing::Point(82, 16);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Escribir correo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(49, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Identificador";
			// 
			// writeTextBox1
			// 
			this->writeTextBox1->Location = System::Drawing::Point(53, 110);
			this->writeTextBox1->Name = L"writeTextBox1";
			this->writeTextBox1->Size = System::Drawing::Size(329, 20);
			this->writeTextBox1->TabIndex = 1;
			// 
			// readGroupBox
			// 
			this->readGroupBox->BackColor = System::Drawing::Color::Black;
			this->readGroupBox->Controls->Add(this->readPanel);
			this->readGroupBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readGroupBox->Location = System::Drawing::Point(27, 154);
			this->readGroupBox->Name = L"readGroupBox";
			this->readGroupBox->Padding = System::Windows::Forms::Padding(0, 0, 14, 14);
			this->readGroupBox->Size = System::Drawing::Size(439, 425);
			this->readGroupBox->TabIndex = 7;
			this->readGroupBox->TabStop = false;
			this->readGroupBox->Text = L"                                                                                 "
				L"                                                                      ";
			// 
			// readPanel
			// 
			this->readPanel->AutoScroll = true;
			this->readPanel->AutoScrollMargin = System::Drawing::Size(0, 100);
			this->readPanel->BackColor = System::Drawing::Color::White;
			this->readPanel->Controls->Add(this->label35);
			this->readPanel->Controls->Add(this->label34);
			this->readPanel->Controls->Add(this->label33);
			this->readPanel->Controls->Add(this->label32);
			this->readPanel->Controls->Add(this->label31);
			this->readPanel->Controls->Add(this->label30);
			this->readPanel->Controls->Add(this->label29);
			this->readPanel->Controls->Add(this->label28);
			this->readPanel->Controls->Add(this->label27);
			this->readPanel->Controls->Add(this->label25);
			this->readPanel->Controls->Add(this->label26);
			this->readPanel->Controls->Add(this->label24);
			this->readPanel->Controls->Add(this->label23);
			this->readPanel->Controls->Add(this->label22);
			this->readPanel->Controls->Add(this->label21);
			this->readPanel->Controls->Add(this->label20);
			this->readPanel->Controls->Add(this->readButton);
			this->readPanel->Controls->Add(this->label1);
			this->readPanel->Controls->Add(this->id);
			this->readPanel->Controls->Add(this->readTextBox1);
			this->readPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->readPanel->Location = System::Drawing::Point(0, 13);
			this->readPanel->Name = L"readPanel";
			this->readPanel->Size = System::Drawing::Size(425, 398);
			this->readPanel->TabIndex = 7;
			// 
			// label35
			// 
			this->label35->AllowDrop = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(67, 580);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(295, 208);
			this->label35->TabIndex = 35;
			this->label35->Text = L"          ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(67, 528);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(38, 16);
			this->label34->TabIndex = 34;
			this->label34->Text = L"          ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(67, 476);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(38, 16);
			this->label33->TabIndex = 33;
			this->label33->Text = L"          ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(67, 417);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(38, 16);
			this->label32->TabIndex = 32;
			this->label32->Text = L"          ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(67, 365);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(38, 16);
			this->label31->TabIndex = 31;
			this->label31->Text = L"          ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(67, 302);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(38, 16);
			this->label30->TabIndex = 30;
			this->label30->Text = L"          ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(250, 238);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(38, 16);
			this->label29->TabIndex = 29;
			this->label29->Text = L"          ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(112, 238);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(38, 16);
			this->label28->TabIndex = 28;
			this->label28->Text = L"          ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(50, 498);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 16);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Asunto:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(50, 451);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 16);
			this->label25->TabIndex = 25;
			this->label25->Text = L"BCC:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(50, 392);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(32, 16);
			this->label26->TabIndex = 26;
			this->label26->Text = L"CC:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(50, 276);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(82, 16);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Remitente:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(50, 332);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(96, 16);
			this->label23->TabIndex = 23;
			this->label23->Text = L"Destinatario:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(50, 552);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(82, 16);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Contenido:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(198, 238);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 16);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Hora:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(50, 238);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 16);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Fecha:";
			// 
			// readButton
			// 
			this->readButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->readButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readButton->Location = System::Drawing::Point(53, 189);
			this->readButton->Name = L"readButton";
			this->readButton->Size = System::Drawing::Size(103, 30);
			this->readButton->TabIndex = 19;
			this->readButton->Text = L"Buscar";
			this->readButton->UseVisualStyleBackColor = false;
			this->readButton->Click += gcnew System::EventHandler(this, &MailMenu::readButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(109, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 46);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Leer correo";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->id->Location = System::Drawing::Point(49, 100);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(111, 24);
			this->id->TabIndex = 3;
			this->id->Text = L"Identificador";
			// 
			// readTextBox1
			// 
			this->readTextBox1->Location = System::Drawing::Point(53, 141);
			this->readTextBox1->Multiline = true;
			this->readTextBox1->Name = L"readTextBox1";
			this->readTextBox1->Size = System::Drawing::Size(329, 32);
			this->readTextBox1->TabIndex = 1;
			// 
			// updateGroupBox
			// 
			this->updateGroupBox->BackColor = System::Drawing::Color::Black;
			this->updateGroupBox->Controls->Add(this->updatePanel);
			this->updateGroupBox->Location = System::Drawing::Point(27, 154);
			this->updateGroupBox->Name = L"updateGroupBox";
			this->updateGroupBox->Padding = System::Windows::Forms::Padding(0, 0, 14, 14);
			this->updateGroupBox->Size = System::Drawing::Size(439, 428);
			this->updateGroupBox->TabIndex = 8;
			this->updateGroupBox->TabStop = false;
			this->updateGroupBox->Text = L"                                                                                 "
				L"                                                                      ";
			// 
			// updatePanel
			// 
			this->updatePanel->AllowDrop = true;
			this->updatePanel->AutoScroll = true;
			this->updatePanel->AutoScrollMargin = System::Drawing::Size(0, 10);
			this->updatePanel->BackColor = System::Drawing::Color::White;
			this->updatePanel->Controls->Add(this->searchButton);
			this->updatePanel->Controls->Add(this->UpdateButton);
			this->updatePanel->Controls->Add(this->label10);
			this->updatePanel->Controls->Add(this->updateTextBox7);
			this->updatePanel->Controls->Add(this->label11);
			this->updatePanel->Controls->Add(this->updateTextBox6);
			this->updatePanel->Controls->Add(this->label12);
			this->updatePanel->Controls->Add(this->updateTextBox5);
			this->updatePanel->Controls->Add(this->label13);
			this->updatePanel->Controls->Add(this->updateTextBox4);
			this->updatePanel->Controls->Add(this->label14);
			this->updatePanel->Controls->Add(this->updateTextBox3);
			this->updatePanel->Controls->Add(this->label15);
			this->updatePanel->Controls->Add(this->updateTextBox2);
			this->updatePanel->Controls->Add(this->label16);
			this->updatePanel->Controls->Add(this->label17);
			this->updatePanel->Controls->Add(this->updateTextBox1);
			this->updatePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->updatePanel->Location = System::Drawing::Point(0, 13);
			this->updatePanel->Name = L"updatePanel";
			this->updatePanel->Size = System::Drawing::Size(425, 401);
			this->updatePanel->TabIndex = 7;
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Location = System::Drawing::Point(162, 157);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(106, 32);
			this->searchButton->TabIndex = 19;
			this->searchButton->Text = L"Buscar";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &MailMenu::searchButton_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->UpdateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateButton->Location = System::Drawing::Point(161, 752);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(103, 30);
			this->UpdateButton->TabIndex = 18;
			this->UpdateButton->Text = L"Guardar";
			this->UpdateButton->UseVisualStyleBackColor = false;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &MailMenu::UpdateButton_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label10->Location = System::Drawing::Point(49, 512);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 24);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Contenido";
			// 
			// updateTextBox7
			// 
			this->updateTextBox7->Location = System::Drawing::Point(53, 539);
			this->updateTextBox7->Multiline = true;
			this->updateTextBox7->Name = L"updateTextBox7";
			this->updateTextBox7->Size = System::Drawing::Size(329, 205);
			this->updateTextBox7->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label11->Location = System::Drawing::Point(49, 426);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Asunto";
			// 
			// updateTextBox6
			// 
			this->updateTextBox6->Location = System::Drawing::Point(53, 453);
			this->updateTextBox6->Multiline = true;
			this->updateTextBox6->Name = L"updateTextBox6";
			this->updateTextBox6->Size = System::Drawing::Size(329, 56);
			this->updateTextBox6->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label12->Location = System::Drawing::Point(49, 364);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 24);
			this->label12->TabIndex = 13;
			this->label12->Text = L"BCC";
			// 
			// updateTextBox5
			// 
			this->updateTextBox5->Location = System::Drawing::Point(53, 391);
			this->updateTextBox5->Multiline = true;
			this->updateTextBox5->Name = L"updateTextBox5";
			this->updateTextBox5->Size = System::Drawing::Size(329, 32);
			this->updateTextBox5->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label13->Location = System::Drawing::Point(49, 302);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 24);
			this->label13->TabIndex = 11;
			this->label13->Text = L"CC";
			// 
			// updateTextBox4
			// 
			this->updateTextBox4->Location = System::Drawing::Point(53, 329);
			this->updateTextBox4->Multiline = true;
			this->updateTextBox4->Name = L"updateTextBox4";
			this->updateTextBox4->Size = System::Drawing::Size(329, 32);
			this->updateTextBox4->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label14->Location = System::Drawing::Point(49, 252);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 24);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Destinatario";
			// 
			// updateTextBox3
			// 
			this->updateTextBox3->Location = System::Drawing::Point(53, 279);
			this->updateTextBox3->Name = L"updateTextBox3";
			this->updateTextBox3->Size = System::Drawing::Size(329, 20);
			this->updateTextBox3->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label15->Location = System::Drawing::Point(49, 202);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 24);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Remitente";
			// 
			// updateTextBox2
			// 
			this->updateTextBox2->Location = System::Drawing::Point(53, 229);
			this->updateTextBox2->Name = L"updateTextBox2";
			this->updateTextBox2->Size = System::Drawing::Size(329, 20);
			this->updateTextBox2->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label16->Location = System::Drawing::Point(98, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(250, 46);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Editar correo";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label17->Location = System::Drawing::Point(49, 83);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(111, 24);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Identificador";
			// 
			// updateTextBox1
			// 
			this->updateTextBox1->Location = System::Drawing::Point(53, 110);
			this->updateTextBox1->Name = L"updateTextBox1";
			this->updateTextBox1->Size = System::Drawing::Size(329, 20);
			this->updateTextBox1->TabIndex = 1;
			// 
			// testLabel
			// 
			this->testLabel->AutoSize = true;
			this->testLabel->Location = System::Drawing::Point(948, 9);
			this->testLabel->Name = L"testLabel";
			this->testLabel->Size = System::Drawing::Size(58, 13);
			this->testLabel->TabIndex = 9;
			this->testLabel->Text = L"                 ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(900, 587);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(106, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"                                 ";
			// 
			// openFile
			// 
			this->openFile->BackColor = System::Drawing::Color::Teal;
			this->openFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openFile->ForeColor = System::Drawing::Color::White;
			this->openFile->Location = System::Drawing::Point(618, 496);
			this->openFile->Name = L"openFile";
			this->openFile->Size = System::Drawing::Size(136, 46);
			this->openFile->TabIndex = 20;
			this->openFile->Text = L"Abrir archivo";
			this->openFile->UseVisualStyleBackColor = false;
			this->openFile->Click += gcnew System::EventHandler(this, &MailMenu::openFile_Click);
			// 
			// MailMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1001, 609);
			this->Controls->Add(this->openFile);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->testLabel);
			this->Controls->Add(this->updateMail);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->writeMail);
			this->Controls->Add(this->tittle);
			this->Controls->Add(this->updateGroupBox);
			this->Controls->Add(this->writeGroupBox);
			this->Controls->Add(this->readGroupBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MailMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lector de correos";
			this->Load += gcnew System::EventHandler(this, &MailMenu::MailMenu_Load);
			this->Click += gcnew System::EventHandler(this, &MailMenu::HideCrudGroupBox);
			this->writeGroupBox->ResumeLayout(false);
			this->writePanel->ResumeLayout(false);
			this->writePanel->PerformLayout();
			this->readGroupBox->ResumeLayout(false);
			this->readPanel->ResumeLayout(false);
			this->readPanel->PerformLayout();
			this->updateGroupBox->ResumeLayout(false);
			this->updatePanel->ResumeLayout(false);
			this->updatePanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	public: static string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;

	}
#pragma endregion

	private: System::Void MailMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void HideCrudGroupBox(System::Object^ sender, System::EventArgs^ e) {
		hideGroupBox();
	}

	// Buttons -----------------------------------------------

	private: System::Void openFile_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start(".\\prueba.txt");
	}
	private: System::Void readMail_Click(System::Object^ sender, System::EventArgs^ e) {
		hideGroupBox();
		readGroupBox->Show();
		//readPanel->Show();
	}
	private: System::Void writeMail_Click(System::Object^ sender, System::EventArgs^ e) {
		hideGroupBox();
		writeGroupBox->Show();
	}
	private: System::Void updateMail_Click(System::Object^ sender, System::EventArgs^ e) {
		hideGroupBox();
		updateGroupBox->Show();
	}

	// Write mails ---------------------------------------------

	private: System::Void WriteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Mail myMail;
		CRUD myCRUD;
		int id = System::Convert::ToInt64(writeTextBox1->Text);
		std::string remitent = toStandardString(writeTextBox2->Text);

		std::string destinatary = toStandardString(writeTextBox3->Text);

		std::string cc = toStandardString(writeTextBox4->Text);

		std::string bcc = toStandardString(writeTextBox5->Text);

		std::string subject = toStandardString(writeTextBox6->Text);

		std::string content = toStandardString(writeTextBox7->Text);

		myMail.setMailStruct(id, remitent, destinatary, cc, bcc, subject, content);
		myCRUD.createFile();
		myCRUD.createMail(myMail.getMailStruct(), myMail.getIdentifier());

	}

	// Read mails ---------------------------------------------

	private: System::Void readButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CRUD myCRUD;

		int id = System::Convert::ToInt64(readTextBox1->Text);
		mailStruct myMail = myCRUD.getMail(id);
		std::string stringBuffer = myMail.date;
		label28->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.time;
		label29->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.remitent;
		label30->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.destinatary;
		label31->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.cc;
		label32->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.bcc;
		label33->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.subject;
		label34->Text = gcnew System::String(stringBuffer.c_str());

		stringBuffer = myMail.content;
		label35->Text = gcnew System::String(stringBuffer.c_str());
	}

private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CRUD myCRUD;

	int id = System::Convert::ToInt64(updateTextBox1->Text);
	mailStruct myMail = myCRUD.getMail(id);
	
	std::string stringBuffer = myMail.remitent;
	updateTextBox2->Text = gcnew System::String(stringBuffer.c_str());

	stringBuffer = myMail.destinatary;
	updateTextBox3->Text = gcnew System::String(stringBuffer.c_str());

	stringBuffer = myMail.cc;
	updateTextBox4->Text = gcnew System::String(stringBuffer.c_str());

	stringBuffer = myMail.bcc;
	updateTextBox5->Text = gcnew System::String(stringBuffer.c_str());

	stringBuffer = myMail.subject;
	updateTextBox6->Text = gcnew System::String(stringBuffer.c_str());

	stringBuffer = myMail.content;
	updateTextBox7->Text = gcnew System::String(stringBuffer.c_str());

	myCRUD.updateMail(myMail, id);
}

private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CRUD myCRUD;

	int id = System::Convert::ToInt64(updateTextBox1->Text);
	mailStruct myMailStruct = myCRUD.getMail(id);
	Mail myMail;

	strcpy(myMailStruct.remitent, toStandardString(updateTextBox2->Text).c_str());
	strcpy(myMailStruct.destinatary, toStandardString(updateTextBox3->Text).c_str());
	strcpy(myMailStruct.cc, toStandardString(updateTextBox4->Text).c_str());
	strcpy(myMailStruct.bcc, toStandardString(updateTextBox5->Text).c_str());
	strcpy(myMailStruct.subject, toStandardString(updateTextBox6->Text).c_str());
	strcpy(myMailStruct.content, toStandardString(updateTextBox7->Text).c_str());

	myMail.setMailStruct(myMailStruct);
	myCRUD.updateMail(myMail.getMailStruct(), id);
}

};
}
