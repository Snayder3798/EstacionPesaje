#pragma once
#include "frmPrincipal.h"

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

	/// <summary>
	/// Resumen de frmLogIn
	/// </summary>
	public ref class frmLogIn : public System::Windows::Forms::Form
	{
	public:
		frmLogIn(void)
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
		~frmLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogIn::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(119, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(243, 172);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(84, 231);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 35);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Ingrese su Usuario";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Enter += gcnew System::EventHandler(this, &frmLogIn::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &frmLogIn::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(84, 297);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(319, 35);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Contraseña";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmLogIn::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &frmLogIn::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &frmLogIn::textBox2_Leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(211, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 54);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmLogIn::button1_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(329, 338);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Mostrar";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &frmLogIn::checkBox1_CheckedChanged);
			// 
			// frmLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(483, 468);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmLogIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iniciar Sesión ";
			this->Load += gcnew System::EventHandler(this, &frmLogIn::frmLogIn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void frmLogIn_Load(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Select();
	}

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		// Cuando el TextBox recibe el foco, borrar el texto predeterminado si es el texto predeterminado
		if (this->textBox1->Text == "Ingrese su Usuario") {
			this->textBox1->Text = "";
			this->textBox1->ForeColor = System::Drawing::Color::Black; // Cambiar el color del texto al color por defecto
		}
	}
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		// Cuando el TextBox pierde el foco, restaurar el texto predeterminado si está vacío
		if (this->textBox1->Text == "") {
			this->textBox1->ForeColor = System::Drawing::Color::Gray; // Cambiar el color del texto al color gris
			this->textBox1->Text = "Ingrese su Usuario";
		}
	}

	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text == "Contraseña") {
			this->textBox2->Text = "";
			this->textBox2->PasswordChar = '*';
			this->textBox2->ForeColor = System::Drawing::Color::Black; // Cambiar el color del texto al color por defecto
		}
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text=="") {
			this->textBox2->PasswordChar = '\0';
			this->textBox2->ForeColor = System::Drawing::Color::Gray; // Cambiar el color del texto al color gris
			this->textBox2->Text = "Contraseña";
		}
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Cambiar el carácter de contraseña del TextBox
		if (checkBox1->Checked) {
			this->textBox2->PasswordChar = '\0'; // Mostrar caracteres reales
		}
		else {
			this->textBox2->PasswordChar = '*'; // Ocultar caracteres reales, usar el carácter que prefieras
		}
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreUsuarioIngresado = this->textBox1->Text;
		String^ contraIngresada = this->textBox2->Text;
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuarioIngresado = objUsuarioController->objbuscarUsuarioxNombreUsuarioSQL(nombreUsuarioIngresado);
		if (objUsuarioIngresado != nullptr) {
			if (contraIngresada == objUsuarioIngresado->getContrasena()) {
				if (objUsuarioIngresado->getCargo() == "Programador" || objUsuarioIngresado->getCargo() == "Administrador") {
					this->Hide();
					frmPrincipal^ ventanaPrincipal = gcnew frmPrincipal();
					ventanaPrincipal->ShowDialog();
					this->textBox2->Clear();
					this->Show();
				}
				else if (objUsuarioIngresado->getCargo() == "Asistente") {
					this->Hide();
					frmPrincipal^ ventanaAsistente = gcnew frmPrincipal(objUsuarioIngresado->getCargo());
					ventanaAsistente->ShowDialog();
					this->textBox2->Clear();
					this->Show();
				}
			}
			else {
				MessageBox::Show("El Usuario o Contraseña ingresado es incorrecto", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

		} else {
			MessageBox::Show("El Usuario ingresado no existe", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}


	}


};
}
