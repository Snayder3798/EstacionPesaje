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
	/// Resumen de frmAgregarPropietarioVehiculo
	/// </summary>
	public ref class frmAgregarPropietarioVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmAgregarPropietarioVehiculo(void)
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
		~frmAgregarPropietarioVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox12;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(26, 22);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(393, 182);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de Persona";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 90);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Apellido Materno:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(174, 87);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 20);
			this->textBox8->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(174, 23);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 58);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido Paterno:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(174, 55);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 121);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DNI:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(174, 118);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(226, 210);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmAgregarPropietarioVehiculo::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(95, 210);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAgregarPropietarioVehiculo::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 149);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Multas Acumuladas:";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(174, 146);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(184, 20);
			this->textBox12->TabIndex = 10;
			// 
			// frmAgregarPropietarioVehiculo
			// 
			this->ClientSize = System::Drawing::Size(459, 267);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Name = L"frmAgregarPropietarioVehiculo";
			this->Text = L"Agregar Propietario de Vehiculo";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		PropietarioVehiculoController^ objPropietarioVehiculo = gcnew PropietarioVehiculoController();
		String^ nombrePersona = this->textBox1->Text;
		String^ apellidoPaternoPersona = this->textBox2->Text;
		String^ apellidoMaternoPersona = this->textBox8->Text;
		String^ dni = this->textBox3->Text;
		int multaAcumulada = Convert::ToInt32(this->textBox12->Text);
		objPropietarioVehiculo->agregarPropietarioVehiculo(nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dni, multaAcumulada);
		MessageBox::Show("La Propietario del Vehiculo se ha agregado correctamente");
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
  }

	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si el carácter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 9, permite más entrada
			if (TextoIngresado->Length < 9) {
				e->Handled = false;
			}
			else {
				e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite más entrada
			}
		}
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si el carácter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 9, permite más entrada
			if (TextoIngresado->Length < 9) {
				e->Handled = false;
			}
			else {
				e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite más entrada
			}
		}

	}
};
}
