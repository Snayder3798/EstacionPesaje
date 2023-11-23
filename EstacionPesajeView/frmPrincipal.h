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
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaciónPesajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propietarioVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multasXTipoDeVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multasRegistradasXEstacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->pbEstactionPesaje = (gcnew System::Windows::Forms::PictureBox());
      this->vehiculosDePropietarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(488, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->vToolStripMenuItem,
					this->tarjetaToolStripMenuItem, this->estaciónPesajeToolStripMenuItem, this->propietarioVehiculoToolStripMenuItem, this->usuarioToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->vToolStripMenuItem->Text = L"Vehiculo";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vToolStripMenuItem_Click);
			// 
			// tarjetaToolStripMenuItem
			// 
			this->tarjetaToolStripMenuItem->Name = L"tarjetaToolStripMenuItem";
			this->tarjetaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tarjetaToolStripMenuItem->Text = L"Tarjeta";
			this->tarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetaToolStripMenuItem_Click);
			// 
			// estaciónPesajeToolStripMenuItem
			// 
			this->estaciónPesajeToolStripMenuItem->Name = L"estaciónPesajeToolStripMenuItem";
			this->estaciónPesajeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->estaciónPesajeToolStripMenuItem->Text = L"Estacion Pesaje";
			this->estaciónPesajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::estaciónPesajeToolStripMenuItem_Click);
			// 
			// propietarioVehiculoToolStripMenuItem
			// 
			this->propietarioVehiculoToolStripMenuItem->Name = L"propietarioVehiculoToolStripMenuItem";
			this->propietarioVehiculoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->propietarioVehiculoToolStripMenuItem->Text = L"Propietario Vehiculo";
			this->propietarioVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::propietarioVehiculoToolStripMenuItem_Click);
			// 
			// usuarioToolStripMenuItem
			// 
			this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
			this->usuarioToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->usuarioToolStripMenuItem->Text = L"Usuario";
			this->usuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuarioToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->multasXTipoDeVehiculoToolStripMenuItem,
					this->multasRegistradasXEstacionToolStripMenuItem, this->vehiculosDePropietarioToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// multasXTipoDeVehiculoToolStripMenuItem
			// 
			this->multasXTipoDeVehiculoToolStripMenuItem->Name = L"multasXTipoDeVehiculoToolStripMenuItem";
			this->multasXTipoDeVehiculoToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->multasXTipoDeVehiculoToolStripMenuItem->Text = L"Multas x Tipo de Vehiculo";
			this->multasXTipoDeVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasXTipoDeVehiculoToolStripMenuItem_Click);
			// 
			// multasRegistradasXEstacionToolStripMenuItem
			// 
			this->multasRegistradasXEstacionToolStripMenuItem->Name = L"multasRegistradasXEstacionToolStripMenuItem";
			this->multasRegistradasXEstacionToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->multasRegistradasXEstacionToolStripMenuItem->Text = L"Multas Registradas x Estacion ";
			this->multasRegistradasXEstacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasRegistradasXEstacionToolStripMenuItem_Click);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->Location = System::Drawing::Point(195, 208);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(79, 23);
			this->btnSiguiente->TabIndex = 7;
			this->btnSiguiente->Text = L"Iniciar";
			this->btnSiguiente->UseVisualStyleBackColor = true;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &frmPrincipal::btnSiguiente_Click);
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Titulo->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Titulo->Location = System::Drawing::Point(44, 136);
			this->Titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(400, 33);
			this->Titulo->TabIndex = 9;
			this->Titulo->Text = L"SISTEMA ESTACION PESAJE";
			// 
			// pbEstactionPesaje
			// 
			this->pbEstactionPesaje->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbEstactionPesaje.Image")));
			this->pbEstactionPesaje->Location = System::Drawing::Point(0, 16);
			this->pbEstactionPesaje->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbEstactionPesaje->Name = L"pbEstactionPesaje";
			this->pbEstactionPesaje->Size = System::Drawing::Size(488, 387);
			this->pbEstactionPesaje->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbEstactionPesaje->TabIndex = 3;
			this->pbEstactionPesaje->TabStop = false;
			this->pbEstactionPesaje->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// vehiculosDePropietarioToolStripMenuItem
			// 
			this->vehiculosDePropietarioToolStripMenuItem->Name = L"vehiculosDePropietarioToolStripMenuItem";
			this->vehiculosDePropietarioToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->vehiculosDePropietarioToolStripMenuItem->Text = L"Vehiculos de Propietario";
			this->vehiculosDePropietarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vehiculosDePropietarioToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 396);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pbEstactionPesaje);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
      this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"Panel Principal Mantenimiento";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
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
		frmPanelControlSistema^ ventanaPanelControl = gcnew frmPanelControlSistema();
		ventanaPanelControl->MdiParent = this;
		ventanaPanelControl->Show();
		
		//this->pbEstacionPesaje->Visible = false;
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
};
}
