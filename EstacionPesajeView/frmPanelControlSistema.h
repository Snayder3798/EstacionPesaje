#pragma once
#include "frmBuscarEstacionPesaje.h"
#include <windows.h>
#include <string.h>
#include <iostream>
#include <ctime>

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



		   int contador = 0;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;



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
		//frmPanelControlSistema(EstacionPesaje^ objEstacion)
		//{
		//	InitializeComponent();
		//	this->objEstacion = objEstacion;
		//	//
		//	//TODO: agregar código de constructor aquí
		//	//
		//}

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->BotonDetenerArduino);
			this->groupBox1->Controls->Add(this->BotonIniciarArduino);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 97);
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(14, 115);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(354, 97);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Estación seleccionada:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(105, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(105, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 20);
			this->textBox1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Buscar Estación";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPanelControlSistema::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Codigo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubicación:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(21, 218);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(354, 121);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Vehiculo Registrado:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(125, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(123, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(125, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 20);
			this->textBox4->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Placa:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Peso Limite:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(125, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(123, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Tipo de Vehiculo:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(149, 345);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(123, 20);
			this->textBox8->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Peso Registrado:";
			// 
			// frmPanelControlSistema
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 399);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmPanelControlSistema";
			this->Text = L"frmPanelControlSistema";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPanelControlSistema::frmPanelControlSistema_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPanelControlSistema::frmPanelControlSistema_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
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
	private: void MandarMultaLCD(int multaTotal) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes(" " + Convert::ToString(multaTotal) + "             ");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	//Para el Bluetooth
	private: String^ SolicitarPlaca_Tarjeta(void) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Escanear_Bluetooth");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
		//Sleep(1000);//Espera un segundo a que se escanee el codigo
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
		Sleep(1000);
		//Entra aquí cuando se detectó un Vehículo
		if (dataRecibida != "No_hay_codigo\r") {
			placaRegistrada = dataRecibida;
			pesoRegistrado = SolicitarPeso();
			Sleep(1000);
			MandarPesoLCD(pesoRegistrado);
			Sleep(1000);

			PropietarioVehiculoController^ objPropietarioVehiculoController = gcnew PropietarioVehiculoController();
			VehiculoController^ objVehiculoController = gcnew VehiculoController();
			RegistroVehiculoController^ objRegistroVehiculoController = gcnew RegistroVehiculoController();
			EstacionController^ objEstacionController = gcnew EstacionController();
			TarjetaController^ objTarjetaController = gcnew TarjetaController();
			
			EstacionPesaje^ EstacionRegistrada = objEstacionController->objbuscarEstacionxCodigoSQL(Convert::ToInt32(this->textBox1->Text));
			Vehiculo^ VehiculoRegistrado = objVehiculoController->objbuscarVehiculoxPlacaSQL(placaRegistrada->Remove(placaRegistrada->Length - 1));
			int PesoLimite = VehiculoRegistrado->getPesoLimite();
			int multasAcumuladas = VehiculoRegistrado->getCantMultas();

			this->textBox4->Text = VehiculoRegistrado->getPlaca();
			this->textBox3->Text = Convert::ToString(VehiculoRegistrado->getPesoLimite());
			this->textBox5->Text = VehiculoRegistrado->getTipoVehiculo();
			this->textBox8->Text = Convert::ToString(pesoRegistrado);
			//Todo esto ocurre si es que el peso está dentro de lo permitido
			if (PesoLimite > pesoRegistrado) {
				
				if (multasAcumuladas == 0) {//Propietario responsable
					ActivarDesactivarServo(true);
					Sleep(1000);
					ActivarDesactivarServo(false);
					Sleep(1000);
				}
				else {//Propietario con multas pendientes pero sin peso excesivo
					MandarMultaLCD(multasAcumuladas);
					Sleep(3000);
					String^ EstadoTargeta = "Inactiva";
					do {//Esperando pago de una tarjeta válida (activa)
						dataRecibida = SolicitarPlaca_Tarjeta();
						Sleep(1000);
						if (dataRecibida != "No_hay_codigo\r") {
							Tarjeta^ TarjetaRegistrada = objTarjetaController->buscarTarjetaxNumeroSQL(dataRecibida->Remove(dataRecibida->Length - 1));
							EstadoTargeta = TarjetaRegistrada->getEstado();
						}
					} while (EstadoTargeta == "Inactiva");
					/*
					RESUMEN DE LO QUE HA PASADO:
					1. Se le hizo el cobro a un propietario sin peso excesivo pero con multas pendientes		
					Ahora hacermos la actualización de las demas clases
					*/
					//Se debe generar un registro
						// Obtener la fecha y hora actual
					time_t now = time(0);
					tm* localTime = localtime(&now);
					// Formatear la fecha y hora en el formato dd/MM/yyyy HH:mm:ss
					char buffer[80];
					strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", localTime);
					// Convertir el buffer a un String^
					String^ fechaYHoraActual = gcnew String(buffer);

					objRegistroVehiculoController->AgregarRegistroSQL(pesoRegistrado, VehiculoRegistrado->getCantMultas(), fechaYHoraActual, VehiculoRegistrado->getCodigo());
					objEstacionController->actualizarNroMultasxCodigoSQL(EstacionRegistrada->getCodigo(), (EstacionRegistrada->getNroMultas()) + VehiculoRegistrado->getCantMultas());
					objVehiculoController->actualizarCantMultasVehiculoxCodigoSQL(VehiculoRegistrado->getCodigo(), 0);
					objPropietarioVehiculoController->ActualizarMultasAcumuladas(VehiculoRegistrado->getCodigoPropietarioVehiculo());

					ActivarDesactivarServo(true);
					Sleep(1000);
					ActivarDesactivarServo(false);
					Sleep(1000);
				}
			}
			else {//Peso excedido
				MandarMultaLCD(multasAcumuladas+1);
				//Sube la multa en una unidad pq es la multa
				objVehiculoController->actualizarCantMultasVehiculoxCodigoSQL(VehiculoRegistrado->getCodigo(), (VehiculoRegistrado->getCantMultas()) + 1);
				Sleep(3000);

				String^ EstadoTargeta = "Inactiva";
				do {
					dataRecibida = SolicitarPlaca_Tarjeta();
					Sleep(1000);
					if (dataRecibida != "No_hay_codigo\r") {
						Tarjeta^ TarjetaRegistrada = objTarjetaController->buscarTarjetaxNumeroSQL(dataRecibida->Remove(dataRecibida->Length - 1));
						EstadoTargeta = TarjetaRegistrada->getEstado();
					}
				} while (EstadoTargeta == "Inactiva");
				//Se deben actualizar la base de datos y crear un registro
				time_t now = time(0);
				tm* localTime = localtime(&now);
				// Formatear la fecha y hora en el formato dd/MM/yyyy HH:mm:ss
				char buffer[80];
				strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", localTime);
				// Convertir el buffer a un String^
				String^ fechaYHoraActual = gcnew String(buffer);

				objRegistroVehiculoController->AgregarRegistroSQL(pesoRegistrado, VehiculoRegistrado->getCantMultas(), fechaYHoraActual, VehiculoRegistrado->getCodigo());
				objEstacionController->actualizarNroMultasxCodigoSQL(EstacionRegistrada->getCodigo(), (EstacionRegistrada->getNroMultas()) + VehiculoRegistrado->getCantMultas());
				objVehiculoController->actualizarCantMultasVehiculoxCodigoSQL(VehiculoRegistrado->getCodigo(), 0);
				objPropietarioVehiculoController->ActualizarMultasAcumuladas(VehiculoRegistrado->getCodigoPropietarioVehiculo());

				ActivarDesactivarServo(true);
				Sleep(1000);
				ActivarDesactivarServo(false);
				Sleep(1000);
			}
			MandarMensajeLCD("Limpiar");
			Sleep(1000);
			this->textBox8->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
		}
	}


	//Aquí va lo que se debe hacer cuando la ventana se cierra
	private: System::Void frmPanelControlSistema_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//Puedes detener todo aquí
	}
	private: System::Void frmPanelControlSistema_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje();
		frmBuscarEstacionPesaje^ ventBuscarEstacionPesaje = gcnew frmBuscarEstacionPesaje(objEstacionPesaje);
		ventBuscarEstacionPesaje->ShowDialog();

		this->textBox1->Text = Convert::ToString(objEstacionPesaje->getCodigo());
		this->textBox2->Text = objEstacionPesaje->getUbicacion();
	}
};
}
