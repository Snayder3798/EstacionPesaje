#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports; //Para arduino
	using namespace System::Text;//Para arduino

	/// <summary>
	/// Resumen de frmIniciarDetenerSistema
	/// </summary>
	public ref class frmIniciarDetenerSistema : public System::Windows::Forms::Form
	{
		String^ dataRecibida = "";
	public:
		frmIniciarDetenerSistema(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			/*PARA CONEXION ARDUINO*/
			findPorts();
			//Abrir puerto mientras se ejecuta la aplicación.  
			if (!serialPort1->IsOpen) {
				try {
					serialPort1->Open();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->ToString());
				}
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmIniciarDetenerSistema()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ BotonDetenerArduino;
	private: System::Windows::Forms::Button^ BotonIniciarArduino;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->BotonDetenerArduino = (gcnew System::Windows::Forms::Button());
			this->BotonIniciarArduino = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->BotonDetenerArduino);
			this->groupBox1->Controls->Add(this->BotonIniciarArduino);
			this->groupBox1->Location = System::Drawing::Point(25, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 85);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vincular arduino:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(32, 36);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 21);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->Text = L"SELECCIONAR PUERTO";
			// 
			// BotonDetenerArduino
			// 
			this->BotonDetenerArduino->Location = System::Drawing::Point(276, 31);
			this->BotonDetenerArduino->Name = L"BotonDetenerArduino";
			this->BotonDetenerArduino->Size = System::Drawing::Size(54, 26);
			this->BotonDetenerArduino->TabIndex = 18;
			this->BotonDetenerArduino->Text = L"Detener";
			this->BotonDetenerArduino->UseVisualStyleBackColor = true;
			// 
			// BotonIniciarArduino
			// 
			this->BotonIniciarArduino->Location = System::Drawing::Point(206, 31);
			this->BotonIniciarArduino->Name = L"BotonIniciarArduino";
			this->BotonIniciarArduino->Size = System::Drawing::Size(54, 26);
			this->BotonIniciarArduino->TabIndex = 17;
			this->BotonIniciarArduino->Text = L"Vincular";
			this->BotonIniciarArduino->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmIniciarDetenerSistema::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(223, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Detener";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// frmIniciarDetenerSistema
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 268);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmIniciarDetenerSistema";
			this->Text = L"frmIniciarDetenerSistema";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	/*PARA CONEXION CON ARDUINO*/
	//Buscar puertos del combobox
		//AQUI DEBE HABER UNA CONEXIÓN AUTOMATICA
	private: void findPorts(void) {
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Aquí iría todo el programa de funcionamiento automático




	}
	};
}
