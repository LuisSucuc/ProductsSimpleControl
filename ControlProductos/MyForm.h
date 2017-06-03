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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(80, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(312, 71);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(604, 71);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(84, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(748, 71);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(58, 26);
			this->textBox4->TabIndex = 7;
			// 
			// Buscar
			// 
			this->Buscar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Buscar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Buscar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Buscar->FlatAppearance->BorderSize = 0;
			this->Buscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Buscar->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Buscar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Buscar->Location = System::Drawing::Point(712, 118);
			this->Buscar->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Buscar->Name = L"Buscar";
			this->Buscar->Size = System::Drawing::Size(132, 41);
			this->Buscar->TabIndex = 8;
			this->Buscar->Text = L"Buscar";
			this->Buscar->UseVisualStyleBackColor = false;
			this->Buscar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Crear
			// 
			this->Crear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Crear->FlatAppearance->BorderSize = 0;
			this->Crear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Crear->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Crear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Crear->Location = System::Drawing::Point(712, 168);
			this->Crear->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Crear->Name = L"Crear";
			this->Crear->Size = System::Drawing::Size(132, 41);
			this->Crear->TabIndex = 10;
			this->Crear->Text = L"Crear";
			this->Crear->UseVisualStyleBackColor = false;
			this->Crear->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(712, 218);
			this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 41);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Modificar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(712, 268);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 41);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 116);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(632, 295);
			this->dataGridView1->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(712, 368);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 41);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(712, 318);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 41);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(896, 518);
			this->Controls->Add(this->button1);
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
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Super Mercado";
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
