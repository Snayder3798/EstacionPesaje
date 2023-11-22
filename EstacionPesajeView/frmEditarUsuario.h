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
	/// Resumen de frmEditarUsuario
	/// </summary>
	public ref class frmEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		frmEditarUsuario(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: Usuario^ objUsuario;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(356, 426);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 28);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 426);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 28);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(68, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(512, 399);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Usuario:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Jefe", L"Asistente", L"Secretario", L"Programador" });
			this->comboBox1->Location = System::Drawing::Point(167, 310);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(255, 24);
			this->comboBox1->TabIndex = 28;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(167, 354);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(255, 22);
			this->textBox8->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Location = System::Drawing::Point(20, 359);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"C�digo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Location = System::Drawing::Point(20, 315);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Cargo:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(167, 266);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(255, 22);
			this->textBox6->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(20, 270);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Contrase�a:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 218);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(255, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 175);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(255, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(167, 130);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 24);
			this->textBox3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(20, 222);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Nombre de Usuario:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 86);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 24);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 24);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 179);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 41);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nombres: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 134);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 16);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Apellido Materno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 90);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Apellido Paterno:";
			// 
			// frmEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 466);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmEditarUsuario";
			this->Text = L"frmEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &frmEditarUsuario::frmEditarUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = objUsuario->getNombre();
		this->textBox2->Text = objUsuario->getApellidoPaterno();
		this->textBox3->Text = objUsuario->getApellidoMaterno();
		this->textBox4->Text = objUsuario->getDni();
		this->textBox5->Text = objUsuario->getNombreUsuario();
		this->textBox6->Text = objUsuario->getContrasena();
		this->comboBox1->Text = objUsuario->getCargo();
		this->textBox8->Text = Convert::ToString(objUsuario->getCodigo());
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		String^ apellidoPaterno = this->textBox2->Text;
		String^ apellidoMaterno = this->textBox3->Text;
		String^ dni = this->textBox4->Text;
		String^ nombreUsuario = this->textBox5->Text;
		String^ contrasena = this->textBox6->Text;
		String^ cargo = this->comboBox1->Text;
		int codigo = Convert::ToInt32(this->textBox8->Text);

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objUsuarioController->actualizarUsuarioSQL(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
		MessageBox::Show("El Propietario fue actualizado correctamente");
		this->Close();
	}

};
}
