#pragma once
#include "Customer.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <string>

const int MAX_CUSTOMERS = 100;
Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

namespace MunicipalBillingSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	public ref class billing_System : public System::Windows::Forms::Form
	{

	public:

		billing_System(void)
		{
			InitializeComponent();
		}

	protected:

		~billing_System()
		{
			if (components)
				delete components;
		}

	private:

		System::ComponentModel::Container^ components;

		System::Windows::Forms::Label^ lblName;
		System::Windows::Forms::Label^ lblAccNumber;
		System::Windows::Forms::TextBox^ tbAccNumber;
		System::Windows::Forms::TextBox^ tbName;
		System::Windows::Forms::TextBox^ tbWtrUsage;

		System::Windows::Forms::Button^ btnAdd;
		System::Windows::Forms::Button^ btnSearch;
		System::Windows::Forms::Button^ btnViewBills;

		System::Windows::Forms::TextBox^ tbSearch;

		System::Windows::Forms::Label^ lblWtrUsage;

		System::Windows::Forms::DataGridView^ GridViewServices;

		System::Windows::Forms::OpenFileDialog^ openFileDialog1;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{

			this->lblName = gcnew Label();
			this->lblAccNumber = gcnew Label();

			this->tbAccNumber = gcnew TextBox();
			this->tbName = gcnew TextBox();
			this->tbWtrUsage = gcnew TextBox();

			this->btnAdd = gcnew Button();
			this->btnSearch = gcnew Button();
			this->btnViewBills = gcnew Button();

			this->tbSearch = gcnew TextBox();

			this->lblWtrUsage = gcnew Label();

			this->GridViewServices = gcnew DataGridView();

			this->openFileDialog1 = gcnew OpenFileDialog();


			this->SuspendLayout();


			lblName->Text = "Name";
			lblName->Location = Drawing::Point(20, 20);


			lblAccNumber->Text = "Account";
			lblAccNumber->Location = Drawing::Point(20, 60);


			lblWtrUsage->Text = "Water Usage";
			lblWtrUsage->Location = Drawing::Point(20, 100);


			tbName->Location = Drawing::Point(150, 20);
			tbAccNumber->Location = Drawing::Point(150, 60);
			tbWtrUsage->Location = Drawing::Point(150, 100);


			btnAdd->Text = "Add";
			btnAdd->Location = Drawing::Point(20, 150);
			btnAdd->Click += gcnew EventHandler(this,
				&billing_System::btnAdd_Click);


			btnSearch->Text = "Search";
			btnSearch->Location = Drawing::Point(120, 150);
			btnSearch->Click += gcnew EventHandler(this,
				&billing_System::btnSearch_Click);


			btnViewBills->Text = "View Bills";
			btnViewBills->Location = Drawing::Point(220, 150);
			btnViewBills->Click += gcnew EventHandler(this,
				&billing_System::btnViewBills_Click);


			tbSearch->Location = Drawing::Point(20, 200);


			GridViewServices->Location =
				Drawing::Point(350, 20);

			GridViewServices->Size =
				Drawing::Size(600, 400);


			this->Controls->Add(lblName);
			this->Controls->Add(lblAccNumber);
			this->Controls->Add(lblWtrUsage);

			this->Controls->Add(tbName);
			this->Controls->Add(tbAccNumber);
			this->Controls->Add(tbWtrUsage);

			this->Controls->Add(btnAdd);
			this->Controls->Add(btnSearch);
			this->Controls->Add(btnViewBills);

			this->Controls->Add(tbSearch);

			this->Controls->Add(GridViewServices);


			this->Text = "Municipal Billing";

			this->ResumeLayout(false);

		}

#pragma endregion



	private:

		void LoadCSVtoGrid(String^ fileName)
		{

			GridViewServices->Columns->Clear();
			GridViewServices->Rows->Clear();


			GridViewServices->ColumnCount = 5;

			GridViewServices->Columns[0]->Name = "Account";
			GridViewServices->Columns[1]->Name = "Name";
			GridViewServices->Columns[2]->Name = "Water";
			GridViewServices->Columns[3]->Name = "Waste";
			GridViewServices->Columns[4]->Name = "Total";


			string file =
				marshal_as<string>(fileName);


			ifstream fileStream(file);


			if (!fileStream.is_open())
			{
				MessageBox::Show("Cannot open file");
				return;
			}


			string line;


			getline(fileStream, line);


			while (getline(fileStream, line))
			{

				stringstream ss(line);

				string acc;
				string name;
				string water;
				string waste;
				string total;


				getline(ss, acc, ',');
				getline(ss, name, ',');
				getline(ss, water, ',');
				getline(ss, waste, ',');
				getline(ss, total, ',');


				GridViewServices->Rows->Add(
					gcnew String(acc.c_str()),
					gcnew String(name.c_str()),
					gcnew String(water.c_str()),
					gcnew String(waste.c_str()),
					gcnew String(total.c_str())
				);

			}


			fileStream.close();

		}



	private:

		System::Void btnAdd_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{

			if (customerCount < MAX_CUSTOMERS)
			{

				int acc =
					Convert::ToInt32(
						tbAccNumber->Text);

				string name =
					marshal_as<string>(
						tbName->Text);

				double usage =
					Convert::ToDouble(
						tbWtrUsage->Text);


				customers[customerCount++]
					=
					Customer(
						acc,
						name,
						"",
						"",
						"Residential",
						0,
						usage,
						240);


				MessageBox::Show(
					"Customer Added");

			}

		}



	private:

		System::Void btnSearch_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{

			int acc =
				Convert::ToInt32(
					tbSearch->Text);


			for (int i = 0;i < customerCount;i++)
			{

				if (customers[i].
					getAccountNumber() == acc)
				{

					String^ msg =

						"Name: " +

						gcnew String(
							customers[i].
							getName().
							c_str())

						+

						"\nTotal: R" +

						customers[i].
						computeTotalAmount();


					MessageBox::Show(msg);

					return;

				}

			}


			MessageBox::Show(
				"Not Found");

		}



	private:

		System::Void btnViewBills_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{


			openFileDialog1->Filter =
				"CSV Files (*.csv)|*.csv";


			openFileDialog1->Title =
				"Select services.csv";


			if (openFileDialog1->ShowDialog()
				==
				System::Windows::Forms::
				DialogResult::OK)
			{

				LoadCSVtoGrid(
					openFileDialog1->FileName);

			}


		}


	};

}