#pragma once
#include "frmBuscarPersona.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace EstacionPesajeController;
	using namespace System::Collections::Generic;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmEditarVehiculo
	/// </summary>
	public ref class frmEditarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmEditarVehiculo(void)
		{
			InitializeComponent();
			this->objPersona = gcnew Persona();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	/*frmEditarVehiculo(String^ PlacaVehiculoEditar)
		{
			InitializeComponent();
			this->PlacaVehiculoEditar = PlacaVehiculoEditar;
			//
			//TODO: agregar código de constructor aquí
			//
		}*/

		frmEditarVehiculo(int CodigoVehiculoEditar)
		{
			InitializeComponent();
			this->CodigoVehiculoEditar = CodigoVehiculoEditar;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarVehiculo()
		{
			if (components)
			{
				delete components;
			}
 		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ Propietario;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	 private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: String^ PlacaVehiculoEditar;
	private: int CodigoVehiculoEditar;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: Persona^ objPersona;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Propietario = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->Propietario->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(242, 335);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button1_Click);
			// 
			// Propietario
			// 
			this->Propietario->Controls->Add(this->label10);
			this->Propietario->Controls->Add(this->comboBox1);
			this->Propietario->Controls->Add(this->label7);
			this->Propietario->Controls->Add(this->textBox7);
			this->Propietario->Controls->Add(this->label1);
			this->Propietario->Controls->Add(this->textBox3);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label4);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(26, 153);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Size = System::Drawing::Size(384, 177);
			this->Propietario->TabIndex = 21;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Location = System::Drawing::Point(18, 46);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"(formato A1B-2C3)";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Automóvil", L"Camioneta", L"Camión", L"Motocicleta" });
			this->comboBox1->Location = System::Drawing::Point(125, 66);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cantidad de Multas:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(125, 137);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 20);
			this->textBox7->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 102);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 30);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Peso Máximo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(26, 16);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(392, 132);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Propietario:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(316, 72);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(124, 69);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(124, 37);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(107, 20);
			this->textBox4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 100);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Apellido Paterno:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 72);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nombre :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(33, 37);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Código :";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(125, 101);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 20);
			this->textBox6->TabIndex = 7;
			// 
			// frmEditarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 374);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Propietario);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmEditarVehiculo";
			this->Text = L"Editar Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmEditarVehiculo::frmEditarVehiculo_Load);
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		Vehiculo^ objVehiculo;
		objVehiculo = objVehiculoController->objbuscarVehiculoxCodigoSQL(this->CodigoVehiculoEditar);	
		this->textBox1->Text = objVehiculo->getPlaca();
		this->comboBox1->Text = objVehiculo->getTipoVehiculo();
		this->textBox3->Text = Convert::ToString(objVehiculo->getPesoLimite());
		this->textBox7->Text = Convert::ToString(objVehiculo->getCantMultas());
		this->textBox5->Text = Convert::ToString(objVehiculo->getCodigo());
		this->textBox8->Text = Convert::ToString(objVehiculo->getcodigoPropietarioVehiculo());
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int codigoVehiculo = Convert::ToInt32(this->textBox6->Text);
		int pesoSinCarga = Convert::ToInt32(this->textBox3->Text);
		int pesoConCarga = Convert::ToInt32(this->textBox4->Text);
		int pesoActual = Convert::ToInt32(this->textBox5->Text);
		String^ placa = this->textBox1->Text;
		String^ tipoVehiculo = this->comboBox1->Text;
		int cantMultas = Convert::ToInt32(this->textBox7->Text);
		
		//Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCarga, pesoConCarga, pesoActual, placa, tipoVehiculo, cantMultas);

		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		//objVehiculoController->actualizarVehiculo(objVehiculo);
		objVehiculoController->actualizarVehiculoSQL(pesoSinCarga, pesoConCarga, pesoActual, placa, tipoVehiculo, cantMultas);
		MessageBox::Show("El Vehiculo fue actualizado correctamente");
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un número o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un número ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}

	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un número o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un número ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un número o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un número ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		// Verifica si la tecla presionada es un dígito o una letra mayúscula
		if (Char::IsDigit(e->KeyChar) || (e->KeyChar >= 'A' && e->KeyChar <= 'Z') || e->KeyChar == '-') {
			// Obtiene el texto actual del TextBox
			String^ TextoIngresado = textBox1->Text;

			// Verifica la longitud del texto actual
			if (TextoIngresado->Length < 7) {
				// Verifica si se ha ingresado el guion en la posición 3
				if (TextoIngresado->Length == 3) {
					// Solo permite el guion en la posición 3
					e->Handled = true;
					if (e->KeyChar == '-') {
						e->Handled = false;
					}
				}
				else {
					e->Handled = false;  // Permite letras y números en las posiciones 0, 1, 2, 4, 5, 6
				}
			}
			else {
				e->Handled = true;  // La placa tiene una longitud de 6 caracteres, no permite más entrada
			}

		}
		else if (e->KeyChar == 8) {
			// Permite la tecla borrar 
			e->Handled = false;
		}
		else {
			e->Handled = true;  // Suprime cualquier otro carácter
		}

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBuscarPersona^ ventanaBuscarPersona = gcnew frmBuscarPersona(this->objPersona);
		ventanaBuscarPersona->ShowDialog();
		/*Cuando regreso de la pantalla de BuscarProyecto, el this->objProyecto que le pase como parametro ya tiene datos*/
		this->textBox4->Text = Convert::ToString(this->objPersona->getCodigo());
		this->textBox2->Text = this->objPersona->getNombre();
		this->textBox6->Text = this->objPersona->getApellidoMaterno();
	}
};
}
