#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmAgregarPropietarioVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(26, 195);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(523, 229);
			this->groupBox3->TabIndex = 23;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Datos de Veh�culo";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(163, 181);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(155, 24);
			this->textBox6->TabIndex = 30;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(377, 86);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 53);
			this->button2->TabIndex = 7;
			this->button2->Text = L"A�adir Veh�culo";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(163, 33);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(155, 24);
			this->textBox7->TabIndex = 29;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(163, 68);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(155, 24);
			this->textBox11->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(48, 37);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 27;
			this->label8->Text = L"C�digo:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(48, 105);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 16);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Tipo:";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(163, 143);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(155, 24);
			this->textBox9->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(48, 146);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Peso Neto:";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(163, 110);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(155, 24);
			this->textBox10->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(48, 71);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 16);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Placa: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(48, 181);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 16);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Peso Bruto:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(26, 22);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(523, 155);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de Persona";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(163, 43);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 79);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(163, 75);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 111);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DNI:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(377, 60);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 53);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Buscar persona";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(163, 107);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 22);
			this->textBox3->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(314, 579);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(138, 579);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Location = System::Drawing::Point(27, 431);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(521, 140);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Propietario del Veh�culo";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(184, 33);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarPropietarioVehiculo::textBox4_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 33);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Multas acumuladas:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 74);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Multa actual:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(184, 70);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 9;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarPropietarioVehiculo::textBox5_KeyPress);
			// 
			// frmAgregarPropietarioVehiculo
			// 
			this->ClientSize = System::Drawing::Size(590, 621);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAgregarPropietarioVehiculo";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si el car�cter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 9, permite m�s entrada
			if (TextoIngresado->Length < 9) {
				e->Handled = false;
			}
			else {
				e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite m�s entrada
			}
		}
	}

	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si el car�cter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 9, permite m�s entrada
			if (TextoIngresado->Length < 9) {
				e->Handled = false;
			}
			else {
				e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite m�s entrada
			}
		}
	}
};
}
