#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace EstacionPesajeModel;
	using namespace EstacionPesajeController;
	/// <summary>
	/// Resumen de frmEditarPersona
	/// </summary>
	public ref class frmEditarPersona : public System::Windows::Forms::Form
	{
	public:
		frmEditarPersona(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarPersona(Persona^ objPersona)
		{
			InitializeComponent();
			this->objPersona = objPersona;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: Persona^ objPersona; /*Este atributo lo agregamos porque necesitamos manejar la informacion de la Persona a editar*/

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(188, 281);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 26);
			this->textBox1->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(410, 405);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 35);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarPersona::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(22, 286);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Código:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(224, 405);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarPersona::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(36, 42);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(576, 335);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Propietario:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(188, 221);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(286, 26);
			this->textBox5->TabIndex = 8;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarPersona::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(188, 162);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(286, 29);
			this->textBox6->TabIndex = 7;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarPersona::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(188, 108);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(286, 29);
			this->textBox7->TabIndex = 6;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarPersona::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(188, 46);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(286, 29);
			this->textBox8->TabIndex = 5;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarPersona::textBox8_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 226);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 51);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nombres: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 168);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Apellido Materno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 112);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Apellido Paterno:";
			// 
			// frmEditarPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 489);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmEditarPersona";
			this->Text = L"Editar Persona";
			this->Load += gcnew System::EventHandler(this, &frmEditarPersona::frmEditarPersona_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarPersona_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Convert::ToString(this->objPersona->getCodigo());
		this->textBox8->Text = this->objPersona-> getNombre();
		this->textBox7->Text = this->objPersona->getApellidoPaterno();
		this->textBox6->Text = this->objPersona->getApellidoMaterno();
		this->textBox5->Text = this->objPersona->getDni();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoPersona = Convert::ToInt32(this->textBox1->Text);
		String^ nombrePersona = this->textBox8->Text;
		String^ apellidoPaternoPersona = this->textBox7->Text;
		String^ apellidoMaternoPersona = this->textBox6->Text;
		String^ dniPersona = this->textBox5->Text;
		Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);

		PersonaController^ objPersonaController = gcnew PersonaController();
		objPersonaController->actualizarPersona(objPersona);
		MessageBox::Show("La Persona fue actualizada correctamente");
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true; // Suprime cualquier carácter

		// Verifica si el carácter presionado es una letra (mayúscula o minúscula) o un espacio en blanco
		if (Char::IsLetter(e->KeyChar) || e->KeyChar == ' ' || e->KeyChar == 8) {
			e->Handled = false;  //Anula supresión si es letra, espacio o borrar
		}
	}

	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true; // Suprime cualquier carácter

		// Verifica si el carácter presionado es una letra (mayúscula o minúscula) o un espacio en blanco
		if (Char::IsLetter(e->KeyChar) || e->KeyChar == ' ' || e->KeyChar == 8) {
			e->Handled = false;  //Anula supresión si es letra, espacio o borrar
		}
	}


	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true; // Suprime cualquier carácter

		// Verifica si el carácter presionado es una letra (mayúscula o minúscula) o un espacio en blanco
		if (Char::IsLetter(e->KeyChar) || e->KeyChar == ' ' || e->KeyChar == 8) {
			e->Handled = false;  //Anula supresión si es letra, espacio o borrar
		}
	}

	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		// Verifica si el carácter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox5->Text;

			// Si longitud del texto actual es menor a 9, permite más entrada
			if (TextoIngresado->Length < 8) {
				e->Handled = false;
			}
			else {
				e->Handled = true;
				if (e->KeyChar == 8) { //distinto a la tecla borrar
					e->Handled = false;  // Tiene una longitud de 8 caracteres, no permite más entrada
				}
			}
		}

		// Verifica si el carácter presionado es distinto a numero o borrar o un espacio en blanco
		if (!(Char::IsNumber(e->KeyChar) || e->KeyChar == 8) || e->KeyChar == ' ') {
			e->Handled = true;  //Anula supresión si distinto de numero o espacio
		}
	}
};
}
