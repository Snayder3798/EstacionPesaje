#pragma once
#include <windows.h>
#include <string.h>
namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports; //Para arduino
	using namespace System::Text;//Para arduino
	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmPanelControlSistema
	/// </summary>
	public ref class frmPanelControlSistema : public System::Windows::Forms::Form
	{
		String^ dataRecibida = "";
		String^ placaRegistrada="";
		int pesoRegistrado;
	private: System::Windows::Forms::TextBox^ textBox2;


		   int contador = 0;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
		   int contador_2 = 0;
	public:
		frmPanelControlSistema(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			/*PARA CONEXION ARDUINO*/
			findPorts();
			//Abrir puerto mientras se ejecuta la aplicación. 
			// Esto es lo que se ejecuta siempre al principio cuando se habre este panel de control 
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
		~frmPanelControlSistema()
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
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->BotonDetenerArduino = (gcnew System::Windows::Forms::Button());
			this->BotonIniciarArduino = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->BotonDetenerArduino);
			this->groupBox1->Controls->Add(this->BotonIniciarArduino);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
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
			this->BotonDetenerArduino->Click += gcnew System::EventHandler(this, &frmPanelControlSistema::BotonDetenerArduino_Click);
			// 
			// BotonIniciarArduino
			// 
			this->BotonIniciarArduino->Location = System::Drawing::Point(206, 31);
			this->BotonIniciarArduino->Name = L"BotonIniciarArduino";
			this->BotonIniciarArduino->Size = System::Drawing::Size(54, 26);
			this->BotonIniciarArduino->TabIndex = 17;
			this->BotonIniciarArduino->Text = L"Iniciar";
			this->BotonIniciarArduino->UseVisualStyleBackColor = true;
			this->BotonIniciarArduino->Click += gcnew System::EventHandler(this, &frmPanelControlSistema::BotonIniciarArduino_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPanelControlSistema::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(231, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(63, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(130, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(127, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Mensaje recibido";
			// 
			// frmPanelControlSistema
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 263);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmPanelControlSistema";
			this->Text = L"frmPanelControlSistema";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPanelControlSistema::frmPanelControlSistema_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*PARA CONEXION CON ARDUINO*/
	//Buscar puertos del combobox
	private: void findPorts(void) {
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray);
	}
	//El boton iniciar
	private: System::Void BotonIniciarArduino_Click(System::Object^ sender, System::EventArgs^ e) {
		//Asegurarse de que el puerto no esta abierto
		if (!this->serialPort1->IsOpen)
		{
			this->serialPort1->PortName = this->comboBox1->Text;

			this->serialPort1->Open();
		}
		this->timer1->Enabled = true;
	}
	//El boton detener
	private: System::Void BotonDetenerArduino_Click(System::Object^ sender, System::EventArgs^ e) {
		//cerrar puerto
		this->serialPort1->Close();
		//activar boton iniciar
		this->BotonIniciarArduino->Enabled = true;
		this->timer1->Enabled = false;
	}

/*Funciones de los periféricos*/
	//Para el servo
	private: void ActivarDesactivarServo(bool estado) {
		if (estado == true) {
			array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Servo_activado");
			serialPort1->Write(miBuffer, 0, miBuffer->Length);
		}
		else {
			array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Servo_desactivado");
			serialPort1->Write(miBuffer, 0, miBuffer->Length);
		}
	}
	//Para el LCD
	private: void MandarMensajeLCD(String^ mensaje) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes(mensaje);
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: void MandarPesoLCD(int pesoRegistrado) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("  "+ Convert::ToString(pesoRegistrado)+"             ");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	//Para el Bluetooth
	private: String^ SolicitarPlaca_Tarjeta(void) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Escanear_Bluetooth");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
		do {
			dataRecibida = serialPort1->ReadLine();
		} while (dataRecibida == "\r");
		return dataRecibida;
	}
	//Para la balanza
	private: int SolicitarPeso(void) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Pesar");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
		do {
			dataRecibida = serialPort1->ReadLine();
		} while (dataRecibida == "\r");
		return pesoRegistrado = Convert::ToInt32(dataRecibida);
	}
	//Configuración de la interrupción
	//NOTA: TIMER NO INTERACTUA CON EL VIEW HASTA QUE TERMINE TODA LA INTERRUPCION DEL TIMER
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		ActivarDesactivarServo(false);
		Sleep(1000);
		MandarMensajeLCD("Mensaje_1");
		Sleep(1000);
		dataRecibida = SolicitarPlaca_Tarjeta();

		if (dataRecibida != "No_hay_codigo\r") {
			//Continuar con el algoritmo total
			placaRegistrada = dataRecibida;
			pesoRegistrado = SolicitarPeso();
			Sleep(1000);
			MandarPesoLCD(pesoRegistrado);
			Sleep(1000);

			VehiculoController^ objVehiculoController = gcnew VehiculoController();
			Vehiculo^ VehiculoRegistrado = objVehiculoController->buscarVehiculoxPlaca(placaRegistrada->Remove(placaRegistrada->Length - 1));
			int PesoLimite = VehiculoRegistrado->getPesoConCarga();

			if (PesoLimite > pesoRegistrado) {
				ActivarDesactivarServo(true);
				Sleep(1000);
				ActivarDesactivarServo(false);
				Sleep(1000);
			}
			else {
				MandarMensajeLCD("Mensaje_Multa");
				Sleep(3000);
				TarjetaController^ objTarjetaController = gcnew TarjetaController();
				bool EstadoTargeta=false;
				do {
					dataRecibida = SolicitarPlaca_Tarjeta();
					Sleep(1000);
					if (dataRecibida != "No_hay_codigo\r") {
						Tarjeta^ TarjetaRegistrada = objTarjetaController->buscarTarjetaxNumero(dataRecibida->Remove(dataRecibida->Length - 1));
						EstadoTargeta = TarjetaRegistrada->getEstado();
					}
				} while (EstadoTargeta == false);
				ActivarDesactivarServo(true);
				Sleep(1000);
				ActivarDesactivarServo(false);
				Sleep(1000);
			}
			this->textBox1->Text = placaRegistrada;
			this->textBox2->Text = Convert::ToString(pesoRegistrado);
		}
	}


	//Aquí va lo que se debe hacer cuando la ventana se cierra
	private: System::Void frmPanelControlSistema_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//Puedes detener todo aquí
	}
};
}
