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
	private: System::Windows::Forms::TextBox^ textBox1;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(349, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 35);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarTarjeta::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 294);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
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
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(28, 40);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(576, 225);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Tarjeta:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activa", L"Inactiva" });
			this->comboBox1->Location = System::Drawing::Point(243, 158);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(286, 28);
			this->comboBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(243, 43);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 29);
			this->textBox2->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 48);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Codigo:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 98);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 29);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmEditarTarjeta::textBox1_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 103);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"N° de tarjeta: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 171);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Estado:";
			// 
			// frmEditarTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 351);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
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
		this->textBox1->Text = this->objTarjeta->getNumeroTarjeta();
		this->comboBox1->Text = this->objTarjeta->getEstado();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox2->Text);
		String^ numeroTarjeta = this->textBox1->Text;
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

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		// Verifica si el carácter presionado es un numero, guion o borrar
		if ((Char::IsNumber(e->KeyChar) || e->KeyChar == '-' || e->KeyChar == 8)) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 19 o se presiona la tecla borrar, permite más entrada
			if (TextoIngresado->Length < 19 || e->KeyChar == 8) {
				// Verifica si se encuentra en la posición 4, 9 o 14
				if (TextoIngresado->Length == 4 || TextoIngresado->Length == 9 || TextoIngresado->Length == 14) {
					//Solo permite el guion en la posición 4, 9 y 14
					if ((e->KeyChar == '-' || e->KeyChar == 8)) {
						e->Handled = false; //permite la entrada
					}
					else {
						e->Handled = true; //lo borra
					}
				}
				else { // si no se encuentra en la posición 4,9,14
					if (e->KeyChar == '-') {
						e->Handled = true; //se borra si se ingresa guion donde no se debe
					}
					else {
						e->Handled = false; //permite la entrada
					}
				}
			}
			else {
				e->Handled = true;  // Tiene una longitud de 19 caracteres, no permite más entrada
			}
		}
		else {
			e->Handled = true;
		}
	}
};
}
