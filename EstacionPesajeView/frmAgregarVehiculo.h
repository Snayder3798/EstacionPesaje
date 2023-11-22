#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmAgregarVehiculo
	/// </summary>
	public ref class frmAgregarVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::GroupBox^ Propietario;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Propietario = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Propietario->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 502);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button1_Click);
			// 
			// Propietario
			// 
			this->Propietario->Controls->Add(this->label8);
			this->Propietario->Controls->Add(this->comboBox1);
			this->Propietario->Controls->Add(this->label7);
			this->Propietario->Controls->Add(this->textBox7);
			this->Propietario->Controls->Add(this->textBox3);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label4);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(29, 23);
			this->Propietario->Margin = System::Windows::Forms::Padding(4);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Padding = System::Windows::Forms::Padding(4);
			this->Propietario->Size = System::Drawing::Size(526, 211);
			this->Propietario->TabIndex = 13;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(30, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"(formato A1B-2C3)";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Automóvil", L"Camioneta", L"Camión", L"Motocicleta" });
			this->comboBox1->Location = System::Drawing::Point(192, 76);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(255, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 168);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Cantidad de Multas:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(192, 161);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(255, 24);
			this->textBox7->TabIndex = 21;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox7_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(192, 119);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 24);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox3_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 33);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 24);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 36);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 122);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Peso Limite:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(314, 502);
			this->button2->Margin = System::Windows::Forms::Padding(3, 1, 3, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 28);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(29, 255);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(526, 227);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del Propietario";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmAgregarVehiculo::groupBox2_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 148);
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
			this->textBox8->Location = System::Drawing::Point(191, 145);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 22);
			this->textBox8->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 73);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Nombre:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(191, 70);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 22);
			this->textBox4->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 110);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Apellido Paterno:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(191, 107);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(184, 22);
			this->textBox5->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(50, 188);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 16);
			this->label10->TabIndex = 4;
			this->label10->Text = L"DNI:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(191, 185);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 22);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 35);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Código Propietario:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(191, 32);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 22);
			this->textBox2->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(410, 97);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 44);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Buscar Vehículo";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// frmAgregarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 555);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Propietario);
			this->Margin = System::Windows::Forms::Padding(3, 1, 3, 1);
			this->Name = L"frmAgregarVehiculo";
			this->Text = L"Agregar Vehículo";
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int codigoVehiculo = Convert::ToInt32(this->textBox6->Text);
		String^ placaVehiculo = this->textBox1->Text;
		String^ tipoVehiculo = this->comboBox1->Text;
		int pesoLimite = Convert::ToInt32(this->textBox3->Text);
		//int pesoSinCargaVehiculo = Convert::ToInt32(this->textBox3->Text);
		//int pesoConCargaVehiculo = Convert::ToInt32(this->textBox4->Text);
		//int pesoActualVehiculo = Convert::ToInt32(this->textBox5->Text);
		int cantMultas = Convert::ToInt32(this->textBox7->Text);
		//int codigoPropietarioVehiculo = Convert::ToInt32(this->textBox6->Text);
		
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		// TXT 
		/*
		Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas, codigoPropietarioVehiculo);
		objVehiculoController -> agregarVehiculo(objVehiculo);*/

		/*SQL*/
		objVehiculoController->AgregarVehiculoSQL(pesoLimite, placaVehiculo, tipoVehiculo,cantMultas);
		Vehiculo^ objVehiculo = objVehiculoController->objbuscarVehiculoxPlacaSQL(placaVehiculo);
		MessageBox::Show("Se ha asignado el codigo '" + objVehiculo->getCodigo() + "' al vehiculo y se ha agregado correctamente.");
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
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
