#pragma once
#include <stdlib.h>
#include "login1.h"

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
			//Se importa el archivo dentro de nuestro programa y le damos el nombre ventanaLogin
			login^ ventanaLogin = gcnew login();
			//Mostramos la ventana
			ventanaLogin->ShowDialog();

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 73);
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
			this->label2->Location = System::Drawing::Point(155, 74);
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
			this->label3->Location = System::Drawing::Point(710, 74);
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
			this->label4->Location = System::Drawing::Point(546, 74);
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
			this->textBox1->Location = System::Drawing::Point(89, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(58, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(294, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(246, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(645, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(58, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(773, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(58, 26);
			this->textBox4->TabIndex = 7;
			// 
			// Buscar
			// 
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buscar->Location = System::Drawing::Point(664, 122);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(167, 37);
			this->Buscar->TabIndex = 8;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = true;
			this->Buscar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Crear
			// 
			this->Crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Crear->Location = System::Drawing::Point(664, 169);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(167, 37);
			this->Crear->TabIndex = 10;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = true;
			this->Crear->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(664, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 37);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Modificar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(664, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 37);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 122);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(615, 292);
			this->dataGridView1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(664, 377);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 37);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 502);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(262, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(438, 26);
			this->label5->TabIndex = 16;
			this->label5->Text = L"CONTROL PRODUCTOS SUPERMERCADO";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(85, 505);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(412, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(86, 545);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"FACULTAD DE INGENIERÍA";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(85, 525);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(387, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"CENTRO UNIVERSITARIO DE CHIMALTENANGO";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(707, 565);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 18);
			this->label9->TabIndex = 23;
			this->label9->Text = L"José Luis Sucuc Otzoy";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(659, 529);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 18);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Oscar Dany Josúe Sucuc Otzoy";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(668, 547);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 18);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Juan Carlos Ovando Borrallo";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(712, 509);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 20);
			this->label12->TabIndex = 20;
			this->label12->Text = L"INTEGRANTES:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(664, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 37);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 591);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
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
			this->Text = L"Control Productos";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	String^ llave = servidor + usuario + password + tabla;
	

	//Método que actualiza los cambios realizados en la base de datos
	void actualizar() {

		//Conección a la base de datos, se envían los datos para hacer la conección con la base de datos
		MySqlConnection^ coneccion = gcnew MySqlConnection(llave);
		//Crea la referencia y envía la conección y las instrucciones en lenguaje SQL
		MySqlDataAdapter^ instrucciones = gcnew MySqlDataAdapter("SELECT * FROM PRODUCTOS ", coneccion);
		//Creamos el objeto tabla en el que se mostrarán los datos
		DataTable^ tabla = gcnew DataTable();
		//LLenamos el objeto
		instrucciones->Fill(tabla);
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
		//Sirve para convertir el string a tipo entero que es el tipo que pide la base de datos 
		return System::Convert::ToInt32(str);
	}

	int convertirDouble(String^ str) {
		//Sirve para convertir el string a tipo doble que es el tipo que pide la base de datos 
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
			MySqlConnection^ coneccion = gcnew MySqlConnection(llave);
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

	catch (Exception^ mensaje) {
			//Se muestra el mensaje que envia la excepción o error
			MessageBox::Show(mensaje->Message);
		}
	}

    //BUSCAR
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se obtienen el codigo en String y se pasa a entero
			int codigo = convertirEntero(textBox1->Text);

			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(llave);
			
			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("SELECT * FROM productos WHERE codigo=" + codigo + "", coneccion);
															//Lo lee de la tabla  productos cuando (WHERE) codigo es igual a lo que buscamos
			//Se abre la conección anteriormente (Se abre porque se enviarán datos)
			coneccion->Open();

			//dataReader es la instancia que leerá los datos y ejecutará las instrucciones SQL
			MySqlDataReader^ dataReader = instrucciones->ExecuteReader();

			//Mientras la instancia data reader esté leyendo los textbox recibirán los datos
			while (dataReader->Read()) {
				//Mientras hayan datos que leer los colocan en los datos correspondientes
				textBox2->Text = dataReader->GetString(1);
				textBox3->Text = dataReader->GetString(2);
				textBox4->Text = dataReader->GetString(3);
			}
			//cuando ya no hay datos se sale del blucle


			//Si el texto de nombre está vació significa que no contró ningun valor
			String^ nombre = textBox2->Text;
			if (nombre == "") {
				MessageBox::Show("Valor no encontrado");
			}

			//Cerrado de conección
			coneccion->Close();

		}
		catch (Exception^ mensaje)
		{
			MessageBox::Show(mensaje->Message);
		}
	}

	//MODIFICAR
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(llave);

			//Se obtienen los datos en String y se pasan a enteros los que lo requieran
			int codigo = convertirEntero(textBox1->Text);
			String^ nombre = textBox2->Text;
			int existencia = convertirEntero(textBox3->Text);
			double precio = convertirDouble(textBox4->Text);

			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("UPDATE productos SET nombre='"+nombre+"', existencia=" + existencia + ", precio=" + precio + " WHERE codigo="+codigo+"", coneccion);
															//Actualizar la tabla y ponerle (SET) los nuevos valores
			
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
		catch (Exception^ mensaje)
		{
			MessageBox::Show(mensaje->Message);
		}
	}
	
	//ELIMINAR
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Se crea la conección y se envían los datos solicitados
			MySqlConnection^ coneccion = gcnew MySqlConnection(llave);

			int codigo = convertirEntero(textBox1->Text);

			//Creamos las instrucciones que le enviamos a la base de datos y la conección abierta anteriormente
			MySqlCommand^ instrucciones = gcnew MySqlCommand("DELETE FROM productos WHERE codigo=" + codigo + "", coneccion);
															//Eliminar de la tabla productos cuando (WHERE) el código sea seleccionado
			
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
		catch (Exception^ mensaje)
		{
			MessageBox::Show(mensaje->Message);
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Instrucción que cierra el programa
		exit(0);
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	limpiar();
}
};
}
