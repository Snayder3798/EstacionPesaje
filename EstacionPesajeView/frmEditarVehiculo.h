#pragma once
#include "frmBuscarPropietarioVehiculo.h"

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
	using namespace EstacionPesajeController;

	/// <summary>
	/// Resumen de frmEditarVehiculo
	/// </summary>
	public ref class frmEditarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmEditarVehiculo(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	 private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
//	private: String^ PlacaVehiculoEditar;
	private: int CodigoVehiculoEditar;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->Propietario->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(337, 550);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 28);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(189, 550);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button1_Click);
			// 
			// Propietario
			// 
			this->Propietario->Controls->Add(this->label10);
			this->Propietario->Controls->Add(this->label9);
			this->Propietario->Controls->Add(this->comboBox1);
			this->Propietario->Controls->Add(this->label7);
			this->Propietario->Controls->Add(this->textBox7);
			this->Propietario->Controls->Add(this->textBox5);
			this->Propietario->Controls->Add(this->label1);
			this->Propietario->Controls->Add(this->textBox3);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label4);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(39, 28);
			this->Propietario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Propietario->Size = System::Drawing::Size(512, 273);
			this->Propietario->TabIndex = 21;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Location = System::Drawing::Point(34, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 16);
			this->label10->TabIndex = 29;
			this->label10->Text = L"(formato A1B-2C3)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 44);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 16);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Código:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Automóvil", L"Camioneta", L"Camión", L"Motocicleta" });
			this->comboBox1->Location = System::Drawing::Point(177, 128);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(255, 24);
			this->comboBox1->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 229);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 16);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cantidad de Multas:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(177, 225);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(255, 24);
			this->textBox7->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(177, 38);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(255, 22);
			this->textBox5->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 324);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 177);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 24);
			this->textBox3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 84);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 24);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 181);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Limite de Peso:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 132);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Location = System::Drawing::Point(39, 307);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(512, 226);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del Propietario";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(397, 95);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 44);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Buscar Propietario";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarVehiculo::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 34);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Código Propietario:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(177, 31);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 22);
			this->textBox2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 148);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Apellido Materno:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(177, 144);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 22);
			this->textBox8->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 73);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 16);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Nombre:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(177, 69);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 22);
			this->textBox4->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 110);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Apellido Paterno:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(177, 106);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 22);
			this->textBox6->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 188);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"DNI:";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(177, 184);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(184, 22);
			this->textBox9->TabIndex = 5;
			// 
			// frmEditarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 592);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Propietario);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmEditarVehiculo";
			this->Text = L"Editar Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmEditarVehiculo::frmEditarVehiculo_Load);
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		PropietarioVehiculoController^ objPropietarioController = gcnew PropietarioVehiculoController();
		Vehiculo^ objVehiculo = objVehiculoController->objbuscarVehiculoxCodigoSQL(this->CodigoVehiculoEditar);
		PropietarioVehiculo^ objPropietario = objPropietarioController->objbuscarPropietarioxCodigoSQL(objVehiculo->getCodigoPropietarioVehiculo());
		this->textBox1->Text = objVehiculo->getPlaca();
		this->comboBox1->Text = objVehiculo->getTipoVehiculo();
		this->textBox3->Text = Convert::ToString(objVehiculo->getPesoLimite());	
		this->textBox7->Text = Convert::ToString(objVehiculo->getCantMultas());
		this->textBox5->Text = Convert::ToString(objVehiculo->getCodigo());
		this->textBox2->Text = Convert::ToString(objPropietario->getCodigo());
		this->textBox4->Text = objPropietario->getNombre();
		this->textBox6->Text = objPropietario->getApellidoPaterno();
		this->textBox8->Text = objPropietario->getApellidoMaterno();
		this->textBox9->Text = objPropietario->getDni();

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoVehiculo = Convert::ToInt32(this->textBox5->Text);
		int pesoLimite = Convert::ToInt32(this->textBox3->Text);
		String^ placa = this->textBox1->Text;
		String^ tipoVehiculo = this->comboBox1->Text;
		int cantMultas = Convert::ToInt32(this->textBox7->Text);
		int codigoPropietarioVehiculo = Convert::ToInt32(this->textBox2->Text);
		
		//Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCarga, pesoConCarga, pesoActual, placa, tipoVehiculo, cantMultas);

		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		//objVehiculoController->actualizarVehiculo(objVehiculo);
		objVehiculoController->actualizarVehiculoSQL(codigoVehiculo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
		
		PropietarioVehiculoController^ objPropietarioController = gcnew PropietarioVehiculoController();
		objPropietarioController->ActualizarMultasAcumuladas(codigoPropietarioVehiculo);
		
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
	PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo();
	frmBuscarPropietarioVehiculo^ ventBuscarPropietario = gcnew frmBuscarPropietarioVehiculo(objPropietario);
	ventBuscarPropietario->ShowDialog();
	this->textBox2->Text = Convert::ToString(objPropietario->getCodigo());
	this->textBox4->Text = objPropietario->getNombre();
	this->textBox6->Text = objPropietario->getApellidoPaterno();
	this->textBox8->Text = objPropietario->getApellidoMaterno();
	this->textBox9->Text = objPropietario->getDni();
}
};
}
