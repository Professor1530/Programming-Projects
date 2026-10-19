// Form1.h
// Main Form for Municipal Billing Calculation System

#pragma once
#include <windows.h>
#include "Form1.h"

namespace MunicipalBillingSystem {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace System::ComponentModel;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TabControl^ tabBills;
    private: System::Windows::Forms::TabPage^ tbBills;
    private: System::Windows::Forms::TabPage^ tbAdd;
    private: System::Windows::Forms::TabPage^ tbUpdate;
    private: System::Windows::Forms::TabPage^ tbSummary;









    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::ListBox^ lstBills;

    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Button^ button5;




    private: System::Windows::Forms::Button^ btnLoad;

    private: System::Windows::Forms::Button^ btnSearch;

    private: System::Windows::Forms::TextBox^ txtSearch;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;



    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::GroupBox^ grpDetail;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label29;



    protected:

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->tabBills = (gcnew System::Windows::Forms::TabControl());
            this->tbBills = (gcnew System::Windows::Forms::TabPage());
            this->tbAdd = (gcnew System::Windows::Forms::TabPage());
            this->tbUpdate = (gcnew System::Windows::Forms::TabPage());
            this->tbSummary = (gcnew System::Windows::Forms::TabPage());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->btnLoad = (gcnew System::Windows::Forms::Button());
            this->btnSearch = (gcnew System::Windows::Forms::Button());
            this->txtSearch = (gcnew System::Windows::Forms::TextBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->lstBills = (gcnew System::Windows::Forms::ListBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->grpDetail = (gcnew System::Windows::Forms::GroupBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->tabBills->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            this->grpDetail->SuspendLayout();
            this->panel10->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->tabBills);
            this->panel1->Location = System::Drawing::Point(4, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1072, 140);
            this->panel1->TabIndex = 0;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(17, 14);
            this->label13->MaximumSize = System::Drawing::Size(300, 100);
            this->label13->MinimumSize = System::Drawing::Size(350, 50);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(350, 50);
            this->label13->TabIndex = 0;
            this->label13->Text = L"Municipal Billing Calculation System\r\n";
            // 
            // tabBills
            // 
            this->tabBills->Controls->Add(this->tbBills);
            this->tabBills->Controls->Add(this->tbAdd);
            this->tabBills->Controls->Add(this->tbUpdate);
            this->tabBills->Controls->Add(this->tbSummary);
            this->tabBills->Location = System::Drawing::Point(21, 80);
            this->tabBills->Name = L"tabBills";
            this->tabBills->SelectedIndex = 0;
            this->tabBills->Size = System::Drawing::Size(1051, 661);
            this->tabBills->TabIndex = 0;
            // 
            // tbBills
            // 
            this->tbBills->Location = System::Drawing::Point(4, 29);
            this->tbBills->Name = L"tbBills";
            this->tbBills->Padding = System::Windows::Forms::Padding(3);
            this->tbBills->Size = System::Drawing::Size(1043, 628);
            this->tbBills->TabIndex = 3;
            this->tbBills->Text = L"Customer Bills";
            this->tbBills->UseVisualStyleBackColor = true;
            // 
            // tbAdd
            // 
            this->tbAdd->Location = System::Drawing::Point(4, 29);
            this->tbAdd->Name = L"tbAdd";
            this->tbAdd->Padding = System::Windows::Forms::Padding(3);
            this->tbAdd->Size = System::Drawing::Size(1043, 628);
            this->tbAdd->TabIndex = 4;
            this->tbAdd->Text = L"Add Customer";
            this->tbAdd->UseVisualStyleBackColor = true;
            // 
            // tbUpdate
            // 
            this->tbUpdate->Location = System::Drawing::Point(4, 29);
            this->tbUpdate->Name = L"tbUpdate";
            this->tbUpdate->Padding = System::Windows::Forms::Padding(3);
            this->tbUpdate->Size = System::Drawing::Size(1043, 628);
            this->tbUpdate->TabIndex = 5;
            this->tbUpdate->Text = L"Update Water";
            this->tbUpdate->UseVisualStyleBackColor = true;
            // 
            // tbSummary
            // 
            this->tbSummary->Location = System::Drawing::Point(4, 29);
            this->tbSummary->Name = L"tbSummary";
            this->tbSummary->Padding = System::Windows::Forms::Padding(3);
            this->tbSummary->Size = System::Drawing::Size(1043, 628);
            this->tbSummary->TabIndex = 6;
            this->tbSummary->Text = L"Summary Report";
            this->tbSummary->UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Location = System::Drawing::Point(29, 172);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(212, 113);
            this->panel2->TabIndex = 1;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(2, 85);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(125, 20);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Loaded from CSV";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->label2->Location = System::Drawing::Point(2, 43);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(64, 25);
            this->label2->TabIndex = 1;
            this->label2->Text = L"label2";
            this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(2, 3);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(106, 20);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Total Accounts";
            // 
            // panel3
            // 
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->label4);
            this->panel3->Controls->Add(this->label5);
            this->panel3->Controls->Add(this->label6);
            this->panel3->Location = System::Drawing::Point(301, 172);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(212, 113);
            this->panel3->TabIndex = 2;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(14, 86);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(100, 20);
            this->label4->TabIndex = 5;
            this->label4->Text = L"All Customers";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->label5->ForeColor = System::Drawing::Color::DarkGreen;
            this->label5->Location = System::Drawing::Point(14, 43);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(64, 25);
            this->label5->TabIndex = 4;
            this->label5->Text = L"label5";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(14, 3);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(108, 20);
            this->label6->TabIndex = 3;
            this->label6->Text = L"Water Revenue";
            // 
            // panel4
            // 
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label7);
            this->panel4->Controls->Add(this->label8);
            this->panel4->Controls->Add(this->label9);
            this->panel4->Location = System::Drawing::Point(575, 172);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(212, 113);
            this->panel4->TabIndex = 3;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(3, 86);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(100, 20);
            this->label7->TabIndex = 5;
            this->label7->Text = L"All Customers";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->label8->ForeColor = System::Drawing::Color::Goldenrod;
            this->label8->Location = System::Drawing::Point(3, 43);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(64, 25);
            this->label8->TabIndex = 4;
            this->label8->Text = L"label8";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(3, 3);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(109, 20);
            this->label9->TabIndex = 3;
            this->label9->Text = L"Waste Revenue";
            // 
            // panel5
            // 
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->label10);
            this->panel5->Controls->Add(this->label11);
            this->panel5->Controls->Add(this->label12);
            this->panel5->Location = System::Drawing::Point(847, 172);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(212, 113);
            this->panel5->TabIndex = 4;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(3, 85);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(84, 20);
            this->label10->TabIndex = 5;
            this->label10->Text = L"All Services";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->label11->ForeColor = System::Drawing::Color::DarkRed;
            this->label11->Location = System::Drawing::Point(3, 43);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(75, 25);
            this->label11->TabIndex = 4;
            this->label11->Text = L"label11";
            this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(3, 3);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(84, 20);
            this->label12->TabIndex = 3;
            this->label12->Text = L"Total Billed";
            // 
            // panel6
            // 
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->btnLoad);
            this->panel6->Controls->Add(this->btnSearch);
            this->panel6->Controls->Add(this->txtSearch);
            this->panel6->Location = System::Drawing::Point(32, 305);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(720, 43);
            this->panel6->TabIndex = 5;
            // 
            // btnLoad
            // 
            this->btnLoad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLoad->Location = System::Drawing::Point(582, 11);
            this->btnLoad->Name = L"btnLoad";
            this->btnLoad->Size = System::Drawing::Size(98, 27);
            this->btnLoad->TabIndex = 2;
            this->btnLoad->Text = L"Load CSV";
            this->btnLoad->UseVisualStyleBackColor = true;
            // 
            // btnSearch
            // 
            this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSearch->Location = System::Drawing::Point(317, 13);
            this->btnSearch->Name = L"btnSearch";
            this->btnSearch->Size = System::Drawing::Size(103, 27);
            this->btnSearch->TabIndex = 1;
            this->btnSearch->Text = L"Search";
            this->btnSearch->UseVisualStyleBackColor = true;
            // 
            // txtSearch
            // 
            this->txtSearch->ForeColor = System::Drawing::SystemColors::ScrollBar;
            this->txtSearch->Location = System::Drawing::Point(3, 13);
            this->txtSearch->Name = L"txtSearch";
            this->txtSearch->Size = System::Drawing::Size(308, 27);
            this->txtSearch->TabIndex = 0;
            this->txtSearch->Text = L"Account Number...";
            // 
            // panel7
            // 
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->label32);
            this->panel7->Controls->Add(this->grpDetail);
            this->panel7->Location = System::Drawing::Point(770, 305);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(289, 425);
            this->panel7->TabIndex = 6;
            // 
            // lstBills
            // 
            this->lstBills->Font = (gcnew System::Drawing::Font(L"Courier New", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lstBills->FormattingEnabled = true;
            this->lstBills->ItemHeight = 17;
            this->lstBills->Location = System::Drawing::Point(32, 354);
            this->lstBills->Name = L"lstBills";
            this->lstBills->Size = System::Drawing::Size(720, 293);
            this->lstBills->TabIndex = 7;
            // 
            // panel8
            // 
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->button2);
            this->panel8->Controls->Add(this->button1);
            this->panel8->Controls->Add(this->button3);
            this->panel8->Controls->Add(this->button6);
            this->panel8->Controls->Add(this->button5);
            this->panel8->Location = System::Drawing::Point(29, 653);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(723, 77);
            this->panel8->TabIndex = 8;
            // 
            // button5
            // 
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Location = System::Drawing::Point(458, 21);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(98, 28);
            this->button5->TabIndex = 4;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(43, 295);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(144, 20);
            this->label14->TabIndex = 9;
            this->label14->Text = L"Customer Billing List";
            // 
            // button6
            // 
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Location = System::Drawing::Point(323, 21);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(98, 28);
            this->button6->TabIndex = 5;
            this->button6->Text = L"button6";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(151, 21);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(98, 28);
            this->button3->TabIndex = 6;
            this->button3->Text = L"button3";
            this->button3->UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(20, 21);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(98, 28);
            this->button1->TabIndex = 7;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(588, 21);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(98, 28);
            this->button2->TabIndex = 8;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(191, 57);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(58, 20);
            this->label17->TabIndex = 2;
            this->label17->Text = L"label17";
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::Gainsboro;
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Controls->Add(this->label16);
            this->panel9->Location = System::Drawing::Point(6, 26);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(243, 28);
            this->panel9->TabIndex = 0;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->ForeColor = System::Drawing::SystemColors::ControlDark;
            this->label16->Location = System::Drawing::Point(10, 3);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(70, 20);
            this->label16->TabIndex = 0;
            this->label16->Text = L"Account: ";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(6, 57);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(58, 20);
            this->label15->TabIndex = 1;
            this->label15->Text = L"label15";
            // 
            // grpDetail
            // 
            this->grpDetail->Controls->Add(this->panel10);
            this->grpDetail->Controls->Add(this->label31);
            this->grpDetail->Controls->Add(this->label26);
            this->grpDetail->Controls->Add(this->label30);
            this->grpDetail->Controls->Add(this->label24);
            this->grpDetail->Controls->Add(this->label29);
            this->grpDetail->Controls->Add(this->label21);
            this->grpDetail->Controls->Add(this->label28);
            this->grpDetail->Controls->Add(this->label23);
            this->grpDetail->Controls->Add(this->label27);
            this->grpDetail->Controls->Add(this->label22);
            this->grpDetail->Controls->Add(this->label25);
            this->grpDetail->Controls->Add(this->label20);
            this->grpDetail->Controls->Add(this->label19);
            this->grpDetail->Controls->Add(this->label18);
            this->grpDetail->Controls->Add(this->label17);
            this->grpDetail->Controls->Add(this->label15);
            this->grpDetail->Controls->Add(this->panel9);
            this->grpDetail->Location = System::Drawing::Point(15, -1);
            this->grpDetail->Name = L"grpDetail";
            this->grpDetail->Size = System::Drawing::Size(255, 408);
            this->grpDetail->TabIndex = 1;
            this->grpDetail->TabStop = false;
            this->grpDetail->Text = L"Bill Detail";
            this->grpDetail->Enter += gcnew System::EventHandler(this, &Form1::grpDetail_Enter);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(6, 88);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(58, 20);
            this->label18->TabIndex = 2;
            this->label18->Text = L"label18";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(191, 88);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(58, 20);
            this->label19->TabIndex = 3;
            this->label19->Text = L"label19";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(6, 121);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(58, 20);
            this->label20->TabIndex = 3;
            this->label20->Text = L"label20";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(191, 121);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(58, 20);
            this->label21->TabIndex = 4;
            this->label21->Text = L"label21";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(6, 152);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(58, 20);
            this->label22->TabIndex = 4;
            this->label22->Text = L"label22";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(191, 152);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(58, 20);
            this->label23->TabIndex = 5;
            this->label23->Text = L"label23";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(6, 182);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(58, 20);
            this->label24->TabIndex = 6;
            this->label24->Text = L"label24";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(191, 182);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(58, 20);
            this->label25->TabIndex = 7;
            this->label25->Text = L"label25";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(6, 211);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(58, 20);
            this->label26->TabIndex = 7;
            this->label26->Text = L"label26";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(191, 211);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(58, 20);
            this->label27->TabIndex = 8;
            this->label27->Text = L"label27";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(6, 244);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(58, 20);
            this->label28->TabIndex = 8;
            this->label28->Text = L"label28";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(191, 244);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(58, 20);
            this->label29->TabIndex = 8;
            this->label29->Text = L"label29";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Location = System::Drawing::Point(6, 281);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(58, 20);
            this->label30->TabIndex = 8;
            this->label30->Text = L"label30";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Location = System::Drawing::Point(191, 281);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(58, 20);
            this->label31->TabIndex = 8;
            this->label31->Text = L"label31";
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::RoyalBlue;
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Controls->Add(this->label33);
            this->panel10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->panel10->ForeColor = System::Drawing::Color::White;
            this->panel10->Location = System::Drawing::Point(7, 358);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(241, 39);
            this->panel10->TabIndex = 9;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::RoyalBlue;
            this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->label32->ForeColor = System::Drawing::Color::Transparent;
            this->label32->Location = System::Drawing::Point(32, 369);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(75, 25);
            this->label32->TabIndex = 10;
            this->label32->Text = L"label32";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Location = System::Drawing::Point(178, 11);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(75, 25);
            this->label33->TabIndex = 10;
            this->label33->Text = L"label33";
            // 
            // Form1
            // 
            this->BackColor = System::Drawing::Color::WhiteSmoke;
            this->ClientSize = System::Drawing::Size(1082, 770);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->lstBills);
            this->Controls->Add(this->panel7);
            this->Controls->Add(this->panel6);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Municipal Billing Calculation System";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tabBills->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->grpDetail->ResumeLayout(false);
            this->grpDetail->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
        private:
            System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
            {

            }
            System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
            {
                // Code for custom drawing on panel2 goes here
            }

            System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
            {
                // Code for when label2 is clicked goes here
            }

            System::Void label11_Click(System::Object^ sender, System::EventArgs^ e)
            {
                // Code for when label11 is clicked goes here
            }


    private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void grpDetail_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#pragma endregion
