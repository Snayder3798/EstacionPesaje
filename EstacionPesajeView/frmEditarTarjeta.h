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
	/// Resumen de frmEditarTarjeta
	/// </summary>
	public ref class frmEditarTarjeta : public System::Windows::Forms::Form
	{
	public:
		frmEditarTarjeta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarTarjeta(Tarjeta^ objTarjeta)
		{
			InitializeComponent();
			this->objTarjeta = objTarjeta;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarTarjeta()
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

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: Tarjeta^ objTarjeta;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 191);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarTarjeta::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarTarjeta::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(19, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 149);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Tarjeta:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activa", L"Inactiva" });
			this->comboBox1->Location = System::Drawing::Point(162, 103);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(162, 28);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 20);
			this->textBox2->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Codigo:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(162, 64);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 20);
			this->textBox8->TabIndex = 5;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarTarjeta::textBox8_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"N° de tarjeta: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Estado:";
			// 
			// frmEditarTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 231);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmEditarTarjeta";
			this->Text = L"Editar Tarjeta";
			this->Load += gcnew System::EventHandler(this, &frmEditarTarjeta::frmEditarTarjeta_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text = Convert::ToString(this->objTarjeta->getCodigo());
		this->textBox8->Text = this->objTarjeta->getNumeroTarjeta();
		this->comboBox1->Text = this->objTarjeta->getEstado();
		this->textBox1->Text = Convert::ToString(this->objTarjeta->getCodigoPropietarioVehiculo());
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox2->Text);
		String^ numeroTarjeta = this->textBox8->Text;
		String^ estado = this->comboBox1->Text;

		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo, estado, numeroTarjeta);

		TarjetaController^ objTarjetaController = gcnew TarjetaController();
		// TXT objTarjetaController->actualizarTarjeta(objTarjeta);
		objTarjetaController->actualizarTarjetaSQL(objTarjeta);
		MessageBox::Show("La Tarjeta fue actualizada correctamente");
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
