#pragma once

namespace ControlProductos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			consultaGeneral();
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(165, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre producto:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(832, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precio:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(672, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Existencias:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(99, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(304, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(355, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(768, 34);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(58, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(891, 34);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(58, 26);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(694, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(846, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Consulta General ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(33, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 37);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Crear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(177, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 37);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Modificar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(318, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 37);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(34, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(984, 205);
			this->dataGridView1->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 367);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 void consultaGeneral() {
				 String^ enlace = "Server=127.0.0.1;Uid=root;Pwd=;Database=supermercado";
				 MySqlConnection^ coneccion = gcnew MySqlConnection(enlace);
				 MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter("select * from productos ", coneccion);
				 DataTable^ dataTable = gcnew DataTable();
				 dataAdapter->Fill(dataTable);
				 bindingSource1->DataSource = dataTable;
				 dataGridView1->DataSource = bindingSource1;

			 }


			 //CREAR
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		try {
			String^ enlace = "Server=127.0.0.1;Uid=root;Pwd=;Database=supermercado";
			MySqlConnection^ coneccion = gcnew MySqlConnection(enlace);

			int id = Int32::Parse(textBox1->Text);
			String^ nombre = textBox2->Text;
			int existencia = Int32::Parse(textBox3->Text);
			double precio = System::Convert::ToDouble(textBox4->Text);

			MySqlCommand^ comand = gcnew MySqlCommand("insert into productos values(" + id + ",'" + nombre + "'," + existencia + "," + precio + ")", coneccion);
			MySqlDataReader^ dataReader;
			coneccion->Open();
			dataReader = comand->ExecuteReader();
			MessageBox::Show("¡Producto guardado exitosamente!\n" + "\nCodigo: " + id + "\nProducto: " + nombre + "\nExistencias: " + existencia + "\nPrecio: " + precio);
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";

			consultaGeneral();

		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

			 //BUSCAR
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			int id = Int32::Parse(textBox1->Text);
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";

			String^ enlace = "Server=127.0.0.1;Uid=root;Pwd=;Database=supermercado";
			MySqlConnection^ coneccion = gcnew MySqlConnection(enlace);
			MySqlCommand^ comand = gcnew MySqlCommand("select * from productos WHERE codigo=" + id + "", coneccion);
			coneccion->Open();
			MySqlDataReader^ dataReader = comand->ExecuteReader();

			while (dataReader->Read()) {
				textBox2->Text = dataReader->GetString(1);
				textBox3->Text = dataReader->GetString(2);
				textBox4->Text = dataReader->GetString(3);
			}

			String^ nombre = textBox2->Text;
			if (nombre == "") {
				MessageBox::Show("Valor no encontrado");
				textBox2->Text = "";
				textBox3->Text = "";
				textBox4->Text = "";
			}

			coneccion->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		//Se obtiene el texto dentro del texto




	}
			 //CONSULTA GENERAL
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		consultaGeneral();
	}

	//MODIFICAR
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			String^ enlace = "Server=127.0.0.1;Uid=root;Pwd=;Database=supermercado";
			MySqlConnection^ coneccion = gcnew MySqlConnection(enlace);

			int id = Int32::Parse(textBox1->Text);
			String^ nombre = textBox2->Text;
			int existencia = Int32::Parse(textBox3->Text);
			double precio = System::Convert::ToDouble(textBox4->Text);

			MySqlCommand^ comand = gcnew MySqlCommand("update productos set nombre='"+nombre+"', existencia=" + existencia + ", precio=" + precio + " WHERE codigo="+id+"", coneccion);
			coneccion->Open();
			MySqlDataReader^ dataReader = comand->ExecuteReader();
			MessageBox::Show("Producto modificado exitosamente");
			coneccion->Close();
			consultaGeneral();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	//ELIMINAR
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			String^ enlace = "Server=127.0.0.1;Uid=root;Pwd=;Database=supermercado";
			MySqlConnection^ coneccion = gcnew MySqlConnection(enlace);

			int id = Int32::Parse(textBox1->Text);

			MySqlCommand^ comand = gcnew MySqlCommand("delete from productos WHERE codigo="+id+"", coneccion);
			coneccion->Open();
			MySqlDataReader^ dataReader = comand->ExecuteReader();
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			MessageBox::Show("Producto eliminado exitosamente");
			coneccion->Close();
			consultaGeneral();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
