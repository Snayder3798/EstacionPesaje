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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label8;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Propietario = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Propietario->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 518);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
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
			this->Propietario->Controls->Add(this->textBox5);
			this->Propietario->Controls->Add(this->textBox6);
			this->Propietario->Controls->Add(this->label1);
			this->Propietario->Controls->Add(this->label6);
			this->Propietario->Controls->Add(this->textBox4);
			this->Propietario->Controls->Add(this->textBox3);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label5);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label4);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(39, 14);
			this->Propietario->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Propietario->Size = System::Drawing::Size(576, 468);
			this->Propietario->TabIndex = 13;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(24, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"(formato A1B-2C3)";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Autom�vil", L"Camioneta", L"Cami�n", L"Motocicleta" });
			this->comboBox1->Location = System::Drawing::Point(189, 102);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(285, 28);
			this->comboBox1->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 288);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Cantidad de Multas:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(188, 282);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(286, 29);
			this->textBox7->TabIndex = 21;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox7_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 398);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(286, 26);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(188, 340);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(286, 29);
			this->textBox6->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 400);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"*Peso Actual*:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 345);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"C�digo de Propietario:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(188, 221);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(286, 26);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 162);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(286, 29);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox3_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 46);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 29);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarVehiculo::textBox1_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 226);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Peso Bruto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 51);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 168);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Peso Neto:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 112);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(393, 518);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 35);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarVehiculo::button2_Click);
			// 
			// frmAgregarVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 569);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Propietario);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmAgregarVehiculo";
			this->Text = L"Agregar Veh�culo";
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int codigoVehiculo = Convert::ToInt32(this->textBox6->Text);
		String^ placaVehiculo = this->textBox1->Text;
		String^ tipoVehiculoVehiculo = this->comboBox1->Text;
		int pesoSinCargaVehiculo = Convert::ToInt32(this->textBox3->Text);
		int pesoConCargaVehiculo = Convert::ToInt32(this->textBox4->Text);
		int pesoActualVehiculo = Convert::ToInt32(this->textBox5->Text);
		int cantMultas = Convert::ToInt32(this->textBox7->Text);
		int codigoPropietarioVehiculo = Convert::ToInt32(this->textBox6->Text);
		VehiculoController^ objVehiculoController = gcnew VehiculoController();

		// TXT 
		/*
		Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas, codigoPropietarioVehiculo);
		objVehiculoController -> agregarVehiculo(objVehiculo);*/

		/*SQL*/
		objVehiculoController->AgregarVehiculoSQL(pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas, codigoPropietarioVehiculo);
		Vehiculo^ objVehiculo = objVehiculoController->objbuscarVehiculoxPlacaSQL(placaVehiculo);
		MessageBox::Show("Se ha asignado el codigo '" + objVehiculo->getCodigo() + "' al vehiculo y se ha agregado correctamente.");
		this->Close();

	}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un n�mero o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un n�mero ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}


	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un n�mero o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un n�mero ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un n�mero o borrar
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Si no es un n�mero ni una tecla de control, suprime la tecla presionada
			e->Handled = true;
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
		// Verifica si la tecla presionada es un d�gito o una letra may�scula
		if (Char::IsDigit(e->KeyChar) || (e->KeyChar >= 'A' && e->KeyChar <= 'Z') || e->KeyChar == '-') {
			// Obtiene el texto actual del TextBox
			String^ TextoIngresado = textBox1->Text;
	
			// Verifica la longitud del texto actual
			if (TextoIngresado->Length < 7) {
				// Verifica si se ha ingresado el guion en la posici�n 3
				if (TextoIngresado->Length == 3) {
					// Solo permite el guion en la posici�n 3
					e->Handled = true;
					if (e->KeyChar == '-') {
						e->Handled = false;
					}  
				}
				else {
					e->Handled = false;  // Permite letras y n�meros en las posiciones 0, 1, 2, 4, 5, 6
				}
			}
			else {
				e->Handled = true;  // La placa tiene una longitud de 6 caracteres, no permite m�s entrada
			}
	
		}
		else if (e->KeyChar == 8) {
			// Permite la tecla borrar 
			e->Handled = false;
		}
		else {
			e->Handled = true;  // Suprime cualquier otro car�cter
		}

	}
};
}
