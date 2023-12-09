#pragma once
#include "frmBuscarVehiculo.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmEditarRegistroVehiculo
	/// </summary>
	public ref class frmEditarRegistroVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmEditarRegistroVehiculo(void)
		{
			InitializeComponent();
			this->objVehiculoSeleccionado = gcnew Vehiculo();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarRegistroVehiculo(int codigoRegistroVehiculoEditar)
		{
			InitializeComponent();
			this->codigoRegistroVehiculoEditar = codigoRegistroVehiculoEditar;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarRegistroVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int codigoRegistroVehiculoEditar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ Propietario;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: Vehiculo^ objVehiculoSeleccionado;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->Propietario = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->Propietario->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(313, 382);
			this->button2->Margin = System::Windows::Forms::Padding(3, 1, 3, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 28);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(167, 382);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarRegistroVehiculo::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Location = System::Drawing::Point(32, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(511, 220);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del Registro";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Codigo:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 50);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 22);
			this->textBox3->TabIndex = 12;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(239, 158);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(184, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 158);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Fecha y hora:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 82);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Peso Registrado:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(239, 82);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 22);
			this->textBox4->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(51, 119);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Monto de la multa aplicada:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(239, 119);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(184, 22);
			this->textBox5->TabIndex = 3;
			// 
			// Propietario
			// 
			this->Propietario->Controls->Add(this->textBox2);
			this->Propietario->Controls->Add(this->button1);
			this->Propietario->Controls->Add(this->label8);
			this->Propietario->Controls->Add(this->textBox1);
			this->Propietario->Controls->Add(this->label2);
			this->Propietario->Controls->Add(this->label3);
			this->Propietario->Location = System::Drawing::Point(32, 240);
			this->Propietario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Propietario->Name = L"Propietario";
			this->Propietario->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Propietario->Size = System::Drawing::Size(511, 122);
			this->Propietario->TabIndex = 28;
			this->Propietario->TabStop = false;
			this->Propietario->Text = L"Datos del Vehiculo:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(192, 80);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 24);
			this->textBox2->TabIndex = 26;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(407, 52);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 44);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Buscar Vehiculo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarRegistroVehiculo::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(29, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"(formato A1B-2C3)";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(192, 33);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 24);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 36);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Placa: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(29, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Codigo";
			// 
			// frmEditarRegistroVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 452);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Propietario);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmEditarRegistroVehiculo";
			this->Text = L"Editar Registro Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmEditarRegistroVehiculo::frmEditarRegistroVehiculo_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Propietario->ResumeLayout(false);
			this->Propietario->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBuscarVehiculo^ ventanaBuscarVehiculo = gcnew frmBuscarVehiculo(this->objVehiculoSeleccionado);
		ventanaBuscarVehiculo->ShowDialog();
		/*Cuando regreso de la pantalla de BuscarVehiculo, el this->objVehiculoSeleccionado que le pase como parametro ya tiene datos*/
		this->textBox1->Text = this->objVehiculoSeleccionado->getPlaca();
		this->textBox2->Text = Convert::ToString(this->objVehiculoSeleccionado->getCodigo());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ placa = this->textBox1->Text;
		int codigoVehiculo = Convert::ToInt32(this->textBox2->Text);

		int codigo = Convert::ToInt32(this->textBox3->Text);
		int pesoRegistrado = Convert::ToInt32(this->textBox4->Text);
		int multaAplicada = Convert::ToInt32(this->textBox5->Text);
		String^ fechaHora = this->dateTimePicker1->Text;

		RegistroVehiculoController^ objRegistroVehiculoController = gcnew RegistroVehiculoController();
		/*SQL*/
		objRegistroVehiculoController->actualizarRegistroSQL(codigo, pesoRegistrado, multaAplicada, fechaHora, codigoVehiculo);
		MessageBox::Show("Registro actualizado correctamente al vehiculo de placa '" + placa + "'");
		this->Close();	
	}
	private: System::Void frmEditarRegistroVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		RegistroVehiculoController^ objRegistroVehiculoController = gcnew RegistroVehiculoController();
		VehiculoController^ objVehiculoController = gcnew VehiculoController();

		RegistroVehiculo^ objRegistroVehiculo = objRegistroVehiculoController->objbuscarRegistroxCodigoSQL(this->codigoRegistroVehiculoEditar);
		Vehiculo^ objVehiculo = objVehiculoController->objbuscarVehiculoxCodigoSQL(objRegistroVehiculo->getCodigoVehiculo());
		
		this->textBox3->Text = Convert::ToString(objRegistroVehiculo->getCodigo());
		this->textBox4->Text = Convert::ToString(objRegistroVehiculo->getPesoRegistrado());
		this->textBox5->Text = Convert::ToString(objRegistroVehiculo->getMultaAplicada());
		this->dateTimePicker1->Text = objRegistroVehiculo->getFechaHora();

		this->textBox1->Text = objVehiculo->getPlaca();
		this->textBox2->Text = Convert::ToString(objVehiculo->getCodigo());


	}
};
}
