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
	/// Resumen de frmAgregarTarjeta
	/// </summary>
	public ref class frmAgregarTarjeta : public System::Windows::Forms::Form
	{
	public:
		frmAgregarTarjeta(void)
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
		~frmAgregarTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 34);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarTarjeta::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(20, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 105);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Tarjeta:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activa", L"Inactiva" });
			this->comboBox1->Location = System::Drawing::Point(143, 70);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(143, 36);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 20);
			this->textBox8->TabIndex = 5;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmAgregarTarjeta::textBox8_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"N° de tarjeta: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Estado:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 133);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 34);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarTarjeta::button1_Click);
			// 
			// frmAgregarTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 187);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"frmAgregarTarjeta";
			this->Text = L"Agregar Tarjeta";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numeroTarjeta = this->textBox8->Text;
		String^ estadoTarjeta = this->comboBox1->Text;
		TarjetaController^ objTarjetaController = gcnew TarjetaController();

		objTarjetaController->AgregarTarjetaSQL(estadoTarjeta, numeroTarjeta);
		Tarjeta^ objTarjeta = objTarjetaController->buscarTarjetaxNumeroSQL(numeroTarjeta);
		MessageBox::Show("Se ha asignado el codigo '"+objTarjeta->getCodigo()+"' a la tarjeta y se ha agregado correctamente.");
		this->Close();
	}


	private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
		// Verifica si el carácter presionado es un numero o borrar
		if (Char::IsNumber(e->KeyChar) || e->KeyChar == 8) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 9, permite más entrada
			if (TextoIngresado->Length < 16) {
				e->Handled = false;
			}
			else {
				e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite más entrada
			}
		}
	}
};
}
