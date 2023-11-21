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
	/// Resumen de frmEditarEstacionPesaje
	/// </summary>
	public ref class frmEditarEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmEditarEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarEstacionPesaje(EstacionPesaje^ objEstacion)
		{
			InitializeComponent();
			this->objEstacion = objEstacion;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: EstacionPesaje^ objEstacion; /*Este atributo lo agregamos porque necesitamos manejar la informacion de la Estacion a editar*/
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 250);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(28, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 223);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Estación Pesaje:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(142, 178);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 20);
			this->textBox2->TabIndex = 28;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarEstacionPesaje::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Multas Registradas:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(142, 141);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 20);
			this->textBox6->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(142, 105);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(192, 20);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(142, 65);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 20);
			this->textBox8->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Ubicación: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Longitud:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Latitud:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(142, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 20);
			this->textBox1->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Código:";
			// 
			// frmEditarEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 294);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmEditarEstacionPesaje";
			this->Text = L"Editar Estacion Pesaje";
			this->Load += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::frmEditarEstacionPesaje_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Convert::ToString(this->objEstacion->getCodigo());
		this->textBox8->Text = this->objEstacion->getUbicacion();
		this->textBox7->Text = Convert::ToString(this->objEstacion->getLongitud());
		this->textBox6->Text = Convert::ToString(this->objEstacion->getLatitud());
		this->textBox2->Text = Convert::ToString(this->objEstacion->getNroMultas());
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoEstacionPesaje = Convert::ToInt32(this->textBox1->Text);
		String^ ubicacion = this->textBox8->Text;
		double latitud = Convert::ToDouble(this->textBox7->Text);
		double longitud = Convert::ToDouble(this->textBox6->Text);
		int nroMultas = Convert::ToInt32(this->textBox2->Text);

		EstacionController^ objEstacioncontroller = gcnew EstacionController();
		objEstacioncontroller->actualizarEstacion(codigoEstacionPesaje, ubicacion, latitud, longitud, nroMultas);
		MessageBox::Show("La Estación fue actualizada correctamente");
		this->Close();
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
