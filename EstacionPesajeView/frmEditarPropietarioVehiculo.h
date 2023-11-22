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
	/// Resumen de frmEditarPropietarioVehiculo
	/// </summary>
	public ref class frmEditarPropietarioVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmEditarPropietarioVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarPropietarioVehiculo(PropietarioVehiculo^ objPropietario)
		{
			InitializeComponent();
			this->objPropietario = objPropietario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarPropietarioVehiculo()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: PropietarioVehiculo^ objPropietario;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 361);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 28);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarPropietarioVehiculo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(142, 361);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarPropietarioVehiculo::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
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
			this->groupBox1->Location = System::Drawing::Point(35, 34);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(512, 306);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Propietario:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(167, 218);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 22);
			this->textBox1->TabIndex = 22;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 175);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(255, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(167, 130);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(255, 24);
			this->textBox6->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(20, 222);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Multas Acumuladas:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(167, 86);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(255, 24);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(167, 37);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(255, 24);
			this->textBox8->TabIndex = 5;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &frmEditarPropietarioVehiculo::textBox8_TextChanged);
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
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(167, 266);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 22);
			this->textBox2->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(20, 270);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Código:";
			// 
			// frmEditarPropietarioVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 414);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarPropietarioVehiculo";
			this->Text = L"Editar Propietario Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmEditarPropietarioVehiculo::frmEditarPropietarioVehiculo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void frmEditarPropietarioVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox8->Text = objPropietario->getNombre();
		this->textBox7->Text = objPropietario->getApellidoPaterno();
		this->textBox6->Text = objPropietario->getApellidoMaterno();
		this->textBox5->Text = objPropietario->getDni();
		this->textBox1->Text = Convert::ToString(objPropietario->getMultasAcumuladas());
		this->textBox2->Text = Convert::ToString(objPropietario->getCodigo());
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox8->Text;
		String^ apellidoPaterno = this->textBox7->Text;
		String^ apellidoMaterno = this->textBox6->Text;
		String^ dni = this->textBox5->Text;
		int multasAcumuladas = Convert::ToInt32(this->textBox1->Text);
		int codigoPropietario = Convert::ToInt32(this->textBox2->Text);
	
		PropietarioVehiculoController^ objPropietarioController = gcnew PropietarioVehiculoController();
		objPropietarioController->actualizarPropietarioSQL(codigoPropietario, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		MessageBox::Show("El Propietario fue actualizado correctamente");
		this->Close();
	}
};
}
