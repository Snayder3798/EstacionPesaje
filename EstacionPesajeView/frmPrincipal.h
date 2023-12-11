#pragma once

#include "frmMantenimientoPersona.h"
#include "frmMantenimientoVehiculo.h"
#include "frmMantenimientoTarjeta.h"
#include "frmMantenimientoEstacionPesaje.h"
#include "frmMantenimientoPropietarioVehiculo.h"
#include "frmReporteMultasxTipoVehiculo.h"
#include "frmReporteNroMultasxEstacionPesaje.h"
#include "frmPanelControlSistema.h"
#include "frmMantenimientoUsuario.h"
#include "frmReporteVehiculosDePropietario.h"
#include "frmMantenimientoRegistroVehiculo.h"


namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmPrincipal(String^ CargoIngresado)
		{
			InitializeComponent();
			this->CargoIngresado = CargoIngresado;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ vToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estaciónPesajeToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnSiguiente;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multasXTipoDeVehiculoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multasRegistradasXEstacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ propietarioVehiculoToolStripMenuItem;
	private: System::Windows::Forms::Label^ Titulo;
	private: System::Windows::Forms::PictureBox^ pbEstactionPesaje;
	private: System::Windows::Forms::ToolStripMenuItem^ usuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vehiculosDePropietarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroVehiculoToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ volverToolStripMenuItem;

	private: String^ CargoIngresado;
	private: frmPanelControlSistema^ ventanaPanelControl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->volverToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaciónPesajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propietarioVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multasXTipoDeVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multasRegistradasXEstacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vehiculosDePropietarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->pbEstactionPesaje = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->volverToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(748, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// volverToolStripMenuItem
			// 
			this->volverToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volverToolStripMenuItem.BackgroundImage")));
			this->volverToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->volverToolStripMenuItem->Name = L"volverToolStripMenuItem";
			this->volverToolStripMenuItem->Size = System::Drawing::Size(48, 29);
			this->volverToolStripMenuItem->Text = L"    ";
			this->volverToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::volverToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->vToolStripMenuItem,
					this->tarjetaToolStripMenuItem, this->estaciónPesajeToolStripMenuItem, this->propietarioVehiculoToolStripMenuItem, this->usuarioToolStripMenuItem,
					this->registroVehiculoToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(148, 29);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->vToolStripMenuItem->Text = L"Vehiculo";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vToolStripMenuItem_Click);
			// 
			// tarjetaToolStripMenuItem
			// 
			this->tarjetaToolStripMenuItem->Name = L"tarjetaToolStripMenuItem";
			this->tarjetaToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->tarjetaToolStripMenuItem->Text = L"Tarjeta";
			this->tarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetaToolStripMenuItem_Click);
			// 
			// estaciónPesajeToolStripMenuItem
			// 
			this->estaciónPesajeToolStripMenuItem->Name = L"estaciónPesajeToolStripMenuItem";
			this->estaciónPesajeToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->estaciónPesajeToolStripMenuItem->Text = L"Estacion Pesaje";
			this->estaciónPesajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::estaciónPesajeToolStripMenuItem_Click);
			// 
			// propietarioVehiculoToolStripMenuItem
			// 
			this->propietarioVehiculoToolStripMenuItem->Name = L"propietarioVehiculoToolStripMenuItem";
			this->propietarioVehiculoToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->propietarioVehiculoToolStripMenuItem->Text = L"Propietario Vehiculo";
			this->propietarioVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::propietarioVehiculoToolStripMenuItem_Click);
			// 
			// usuarioToolStripMenuItem
			// 
			this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
			this->usuarioToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->usuarioToolStripMenuItem->Text = L"Usuario";
			this->usuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuarioToolStripMenuItem_Click);
			// 
			// registroVehiculoToolStripMenuItem
			// 
			this->registroVehiculoToolStripMenuItem->Name = L"registroVehiculoToolStripMenuItem";
			this->registroVehiculoToolStripMenuItem->Size = System::Drawing::Size(272, 34);
			this->registroVehiculoToolStripMenuItem->Text = L"Registro Vehiculo";
			this->registroVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::registroVehiculoToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->multasXTipoDeVehiculoToolStripMenuItem,
					this->multasRegistradasXEstacionToolStripMenuItem, this->vehiculosDePropietarioToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// multasXTipoDeVehiculoToolStripMenuItem
			// 
			this->multasXTipoDeVehiculoToolStripMenuItem->Name = L"multasXTipoDeVehiculoToolStripMenuItem";
			this->multasXTipoDeVehiculoToolStripMenuItem->Size = System::Drawing::Size(367, 34);
			this->multasXTipoDeVehiculoToolStripMenuItem->Text = L"Multas por Tipo de Vehiculo";
			this->multasXTipoDeVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasXTipoDeVehiculoToolStripMenuItem_Click);
			// 
			// multasRegistradasXEstacionToolStripMenuItem
			// 
			this->multasRegistradasXEstacionToolStripMenuItem->Name = L"multasRegistradasXEstacionToolStripMenuItem";
			this->multasRegistradasXEstacionToolStripMenuItem->Size = System::Drawing::Size(367, 34);
			this->multasRegistradasXEstacionToolStripMenuItem->Text = L"Multas registradas por Estacion ";
			this->multasRegistradasXEstacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasRegistradasXEstacionToolStripMenuItem_Click);
			// 
			// vehiculosDePropietarioToolStripMenuItem
			// 
			this->vehiculosDePropietarioToolStripMenuItem->Name = L"vehiculosDePropietarioToolStripMenuItem";
			this->vehiculosDePropietarioToolStripMenuItem->Size = System::Drawing::Size(367, 34);
			this->vehiculosDePropietarioToolStripMenuItem->Text = L"Multas de un Propietario";
			this->vehiculosDePropietarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vehiculosDePropietarioToolStripMenuItem_Click);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSiguiente.BackgroundImage")));
			this->btnSiguiente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSiguiente->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSiguiente->FlatAppearance->BorderSize = 0;
			this->btnSiguiente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSiguiente->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSiguiente->Location = System::Drawing::Point(55, 455);
			this->btnSiguiente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(174, 70);
			this->btnSiguiente->TabIndex = 7;
			this->btnSiguiente->Text = L"Iniciar";
			this->btnSiguiente->UseVisualStyleBackColor = true;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &frmPrincipal::btnSiguiente_Click);
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->BackColor = System::Drawing::Color::White;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Impact", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Titulo->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Titulo->Location = System::Drawing::Point(84, 70);
			this->Titulo->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(632, 71);
			this->Titulo->TabIndex = 9;
			this->Titulo->Text = L"SISTEMA ESTACION PESAJE";
			this->Titulo->Click += gcnew System::EventHandler(this, &frmPrincipal::Titulo_Click_1);
			// 
			// pbEstactionPesaje
			// 
			this->pbEstactionPesaje->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbEstactionPesaje.Image")));
			this->pbEstactionPesaje->Location = System::Drawing::Point(0, 31);
			this->pbEstactionPesaje->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->pbEstactionPesaje->Name = L"pbEstactionPesaje";
			this->pbEstactionPesaje->Size = System::Drawing::Size(750, 638);
			this->pbEstactionPesaje->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbEstactionPesaje->TabIndex = 3;
			this->pbEstactionPesaje->TabStop = false;
			this->pbEstactionPesaje->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(73, 551);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 45);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Cerrar Sesion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 658);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pbEstactionPesaje);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
		this->volverToolStripMenuItem->Visible = false;
		
		if (CargoIngresado == "Asistente") {
			this->reportesToolStripMenuItem->Visible = false;
			this->mantenimientoToolStripMenuItem->Visible = false;
		}
		else {
			this->reportesToolStripMenuItem->Visible = true;
			this->mantenimientoToolStripMenuItem->Visible = true;
		}
	}

	private: System::Void Titulo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Seleccion_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void propietariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoPersona^ ventanaMantPersona = gcnew frmMantenimientoPersona();
		/*ventanaMantPropietarios->MdiParent = this;*/
		ventanaMantPersona->Show();
	}

	private: System::Void vToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoVehiculo^ ventanaMantVehiculo = gcnew frmMantenimientoVehiculo();
		ventanaMantVehiculo->Show();
	}

	private: System::Void tarjetaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoTarjeta^ ventanaMantTarjeta = gcnew frmMantenimientoTarjeta();
		ventanaMantTarjeta->Show();
	}

	private: System::Void estaciónPesajeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoEstacionPesaje^ ventanaMantEstacionPesaje = gcnew frmMantenimientoEstacionPesaje();
		ventanaMantEstacionPesaje->Show();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void btnSiguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnSiguiente->Visible = false;
		this->Titulo->Visible = false;
		this->pbEstactionPesaje->Visible = false;
		this->button1->Visible = false;
		ventanaPanelControl = gcnew frmPanelControlSistema();
		ventanaPanelControl->MdiParent = this;
		ventanaPanelControl->Show();
		this->volverToolStripMenuItem->Visible = true;
	}
	private: System::Void boxOpcionesMantenimiento_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void multasXTipoDeVehiculoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteMultasxTipoVehiculo^ ventReporte = gcnew frmReporteMultasxTipoVehiculo();
		ventReporte->Show();
	}
	private: System::Void multasRegistradasXEstacionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteNroMultasxEstacionPesaje^ ventReporte = gcnew frmReporteNroMultasxEstacionPesaje();
		ventReporte->Show();
	}
	private: System::Void propietarioVehiculoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoPropietarioVehiculo^ ventReporte = gcnew frmMantenimientoPropietarioVehiculo();
		ventReporte->Show();
	}

	private: System::Void usuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoUsuario^ ventMantUsuario = gcnew frmMantenimientoUsuario();
		ventMantUsuario->Show();
	}
	private: System::Void vehiculosDePropietarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteVehiculosDePropietario^ ventanaReporte = gcnew frmReporteVehiculosDePropietario();
		ventanaReporte->Show();
	}	
	private: System::Void registroVehiculoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoRegistroVehiculo^ ventMantRegistroVehiculo = gcnew frmMantenimientoRegistroVehiculo();
		ventMantRegistroVehiculo->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void Titulo_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void volverToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ventanaPanelControl->Close();
		this->btnSiguiente->Visible = true;
		this->Titulo->Visible = true;
		this->pbEstactionPesaje->Visible = true;
		this->button1->Visible = true;
		this->volverToolStripMenuItem->Visible = false;
	}
};
}
