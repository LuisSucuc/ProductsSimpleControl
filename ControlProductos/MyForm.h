#pragma once
#include <stdlib.h>

namespace ControlProductos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Para no escribir siempre MySql::Data::MySqlClient
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		//CONSTRUCTOR: Contiene las variables o funciones a ejecutar al correr el programa
		MyForm(void)
		{
			InitializeComponent();
			//Actualizar al compilar o correr el programa
			actualizar();
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
	private: System::Windows::Forms::Button^  Buscar;


	private: System::Windows::Forms::Button^  Crear;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button2;
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
			this->Buscar = (gcnew System::Windows::Forms::Button());
			this->Crear = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->label3->Location = System::Drawing::Point(732, 37);
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
			this->label4->Location = System::Drawing::Point(572, 37);
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
			this->textBox2->Size = System::Drawing::Size(253, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(668, 34);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(58, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(791, 34);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(58, 26);
			this->textBox4->TabIndex = 7;
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buscar->Location = System::Drawing::Point(876, 115);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(103, 37);
			this->Buscar->TabIndex = 8;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Crear
			// 
			this->Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Crear->Location = System::Drawing::Point(876, 167);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(103, 37);
			this->Crear->TabIndex = 10;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(876, 226);
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
			this->button5->Location = System::Drawing::Point(876, 287);
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
			this->dataGridView1->Size = System::Drawing::Size(815, 300);
			this->dataGridView1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(876, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 37);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Crear);
			this->Controls->Add(this->Buscar);
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




	
	//Dirección del servidor que contiene nuestra base de datos
	String^ servidor = "SERVER=127.0.0.1;";
	String^ usuario = "UID=root;";
	String^ password = "PWD=;";
	String^ tabla = "DATABASE=supermercado";

	//Datos para crear la coneccion a la base de datos
	String^ datos = servidor + usuario + password + tabla;
	

	//Método que actualiza los cambios realizados en la base de datos
	void actualizar() {

		//Conección a la base de datos, se envían los datos para hacer la conección con la base de datos
		MySqlConnection^ coneccion = gcnew MySqlConnection(datos);
		//Crea la referencia y envía la conección y las instrucciones en lenguaje SQL
		MySqlDataAdapter^ adaptadorIntermediario = gcnew MySqlDataAdapter("SELECT * FROM PRODUCTOS ", coneccion);
		
		//Creamos el objeto tabla en el que se mostrarán los datos
		DataTable^ tabla = gcnew DataTable();
		//LLenamos el objeto
		adaptadorIntermediario->Fill(tabla);
		//Asingamos a la base de datos de Visual Studio como nuestra tabla de llenado
		bindingSource1->DataSource = tabla;
		//Asingamos a nuestra vista en MyForm.h para que muestre los datos y se le asigna la base de datos anterior
		dataGridView1->DataSource = bindingSource1;

	}

	void limpiar() {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
	}

	int convertirEntero(String^ str) {
		return System::Convert::ToInt32(str);
	}

	int convertirDouble(String^ str) {
		return System::Convert::ToDouble(str);
	}



    //Acción CREAR
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		try {
			//Se obtienen los datos en String y se pasan a enteros los que lo requieran
			int codigo = convertirEntero(textBox1->Text);
			String^ nombre = textBox2->Text;
			int existencia = convertirEntero(textBox3->Text);
			double precio = convertirDouble(textBox4->Text);

			//Se abre la conección
			MySqlConnection^ coneccion = gcnew MySqlConnection(datos);
			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("INSERT INTO productos VALUES(" + codigo + ",'" + nombre + "'," + existencia + "," + precio + ")", coneccion);
			//Se abre la conección anteriormente (Se abre porque se enviarán datos)
			coneccion->Open();


			//dataReader es la instancia que leerá los datos y ejecutará las instrucciones SQL
			MySqlDataReader^ dataReader = instrucciones->ExecuteReader();
			//Se cierra la conección
			coneccion->Close();

			//Mensaje de creación
			MessageBox::Show("¡Producto guardado exitosamente!\n" + "\nCodigo: " + codigo + "\nProducto: " + nombre + "\nExistencias: " + existencia + "\nPrecio: " + precio);
			limpiar();
			actualizar();
		}

	catch (Exception^ msj) {
			//Se muestra el mensaje que envia la excepción
			MessageBox::Show(msj->Message);
		}
	}

    //BUSCAR
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se obtienen el codigo en String y se pasa a entero
			int codigo = convertirEntero(textBox1->Text);

			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(datos);
			
			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("SELECT * FROM productos WHERE codigo=" + codigo + "", coneccion);
			
			//Se abre la conección anteriormente (Se abre porque se enviarán datos)
			coneccion->Open();

			//dataReader es la instancia que leerá los datos y ejecutará las instrucciones SQL
			MySqlDataReader^ dataReader = instrucciones->ExecuteReader();

			//Mientras la instancia data reader esté leyendo los textbox recibirán los datos
			while (dataReader->Read()) {
				textBox2->Text = dataReader->GetString(1);
				textBox3->Text = dataReader->GetString(2);
				textBox4->Text = dataReader->GetString(3);
			}

			//Si el texto de nombre está vació significa que no contró ningun valor
			String^ nombre = textBox2->Text;
			if (nombre == "") {
				MessageBox::Show("Valor no encontrado");
			}

			//Cerrado de conección
			coneccion->Close();

		}
		catch (Exception^ msj)
		{
			MessageBox::Show(msj->Message);
		}
	}

	//MODIFICAR
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(datos);

			//Se obtienen los datos en String y se pasan a enteros los que lo requieran
			int codigo = convertirEntero(textBox1->Text);
			String^ nombre = textBox2->Text;
			int existencia = convertirEntero(textBox3->Text);
			double precio = convertirDouble(textBox4->Text);

			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("UPDATE productos SET nombre='"+nombre+"', existencia=" + existencia + ", precio=" + precio + " WHERE codigo="+codigo+"", coneccion);

			//Se abre la conección anteriormente (Se abre porque se enviarán datos)
			coneccion->Open();

			//dataReader es la instancia que leerá los datos y ejecutará las instrucciones SQL
			MySqlDataReader^ dataReader = instrucciones->ExecuteReader();
			//Se cierra la conección
			coneccion->Close();

			//Mensaje de éxito
			MessageBox::Show("Producto modificado exitosamente");

			limpiar();
			actualizar();
	

		}
		catch (Exception^ msj)
		{
			MessageBox::Show(msj->Message);
		}
	}
	
	//ELIMINAR
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(datos);

			int codigo = convertirEntero(textBox1->Text);

			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("delete from productos WHERE codigo=" + codigo + "", coneccion);
			
			//Se abre la conección anteriormente (Se abre porque se enviarán datos)
			coneccion->Open();

			//dataReader es la instancia que leerá los datos y ejecutará las instrucciones SQL
			MySqlDataReader^ dataReader = instrucciones->ExecuteReader();

			//Mensaje de éxito
			MessageBox::Show("Producto eliminado exitosamente");

			//Se cierra la conección
			coneccion->Close();
			limpiar();
			actualizar();

		}
		catch (Exception^ msj)
		{
			MessageBox::Show(msj->Message);
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
