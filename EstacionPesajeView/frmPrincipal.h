#pragma once

#include "frmMantenimientoPersona.h"
#include "frmMantenimientoVehiculo.h"
#include "frmMantenimientoTarjeta.h"
#include "frmMantenimientoEstacionPesaje.h"
#include "frmReporteMultasxTipoVehiculo.h"
#include "frmReporteNroMultasxEstacionPesaje.h"


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
	private: System::Windows::Forms::ToolStripMenuItem^ propietariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tarjetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estaciónPesajeToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pbEstactionPesaje;

	private: System::Windows::Forms::PictureBox^ pbEstacionPesaje;
	private: System::Windows::Forms::ComboBox^ boxOpcionesMantenimiento;
	private: System::Windows::Forms::Button^ btnSiguiente;
	private: System::Windows::Forms::Label^ Titulo;
	private: System::Windows::Forms::Label^ Seleccion;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multasXTipoDeVehiculoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ multasRegistradasXEstacionToolStripMenuItem;



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
			this->propietariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaciónPesajeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multasXTipoDeVehiculoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pbEstactionPesaje = (gcnew System::Windows::Forms::PictureBox());
			this->boxOpcionesMantenimiento = (gcnew System::Windows::Forms::ComboBox());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->Seleccion = (gcnew System::Windows::Forms::Label());
			this->multasRegistradasXEstacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(732, 35);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->propietariosToolStripMenuItem,
					this->vToolStripMenuItem, this->tarjetaToolStripMenuItem, this->estaciónPesajeToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(148, 29);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// propietariosToolStripMenuItem
			// 
			this->propietariosToolStripMenuItem->Name = L"propietariosToolStripMenuItem";
			this->propietariosToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->propietariosToolStripMenuItem->Text = L"Persona";
			this->propietariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::propietariosToolStripMenuItem_Click);
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->vToolStripMenuItem->Text = L"Vehículo";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vToolStripMenuItem_Click);
			// 
			// tarjetaToolStripMenuItem
			// 
			this->tarjetaToolStripMenuItem->Name = L"tarjetaToolStripMenuItem";
			this->tarjetaToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->tarjetaToolStripMenuItem->Text = L"Tarjeta";
			this->tarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetaToolStripMenuItem_Click);
			// 
			// estaciónPesajeToolStripMenuItem
			// 
			this->estaciónPesajeToolStripMenuItem->Name = L"estaciónPesajeToolStripMenuItem";
			this->estaciónPesajeToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->estaciónPesajeToolStripMenuItem->Text = L"Estación Pesaje";
			this->estaciónPesajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::estaciónPesajeToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->multasXTipoDeVehiculoToolStripMenuItem,
					this->multasRegistradasXEstacionToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// multasXTipoDeVehiculoToolStripMenuItem
			// 
			this->multasXTipoDeVehiculoToolStripMenuItem->Name = L"multasXTipoDeVehiculoToolStripMenuItem";
			this->multasXTipoDeVehiculoToolStripMenuItem->Size = System::Drawing::Size(351, 34);
			this->multasXTipoDeVehiculoToolStripMenuItem->Text = L"Multas x Tipo de Vehiculo";
			this->multasXTipoDeVehiculoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasXTipoDeVehiculoToolStripMenuItem_Click);
			// 
			// pbEstactionPesaje
			// 
			this->pbEstactionPesaje->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbEstactionPesaje.Image")));
			this->pbEstactionPesaje->Location = System::Drawing::Point(0, 42);
			this->pbEstactionPesaje->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbEstactionPesaje->Name = L"pbEstactionPesaje";
			this->pbEstactionPesaje->Size = System::Drawing::Size(732, 563);
			this->pbEstactionPesaje->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbEstactionPesaje->TabIndex = 3;
			this->pbEstactionPesaje->TabStop = false;
			this->pbEstactionPesaje->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// boxOpcionesMantenimiento
			// 
			this->boxOpcionesMantenimiento->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->boxOpcionesMantenimiento->FormattingEnabled = true;
			this->boxOpcionesMantenimiento->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Estacion Pesaje", L"Persona",
					L"Tarjeta", L"Vehiculo"
			});
			this->boxOpcionesMantenimiento->Location = System::Drawing::Point(274, 372);
			this->boxOpcionesMantenimiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->boxOpcionesMantenimiento->Name = L"boxOpcionesMantenimiento";
			this->boxOpcionesMantenimiento->Size = System::Drawing::Size(211, 28);
			this->boxOpcionesMantenimiento->Sorted = true;
			this->boxOpcionesMantenimiento->TabIndex = 5;
			this->boxOpcionesMantenimiento->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPrincipal::boxOpcionesMantenimiento_SelectedIndexChanged);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->Location = System::Drawing::Point(314, 431);
			this->btnSiguiente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(123, 42);
			this->btnSiguiente->TabIndex = 7;
			this->btnSiguiente->Text = L"Abrir";
			this->btnSiguiente->UseVisualStyleBackColor = true;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &frmPrincipal::btnSiguiente_Click);
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->BackColor = System::Drawing::Color::Transparent;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Titulo->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Titulo->Location = System::Drawing::Point(58, 137);
			this->Titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(624, 51);
			this->Titulo->TabIndex = 9;
			this->Titulo->Text = L"PANEL DE MANTENIMIENTO";
			// 
			// Seleccion
			// 
			this->Seleccion->AutoSize = true;
			this->Seleccion->BackColor = System::Drawing::Color::Transparent;
			this->Seleccion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Seleccion->Location = System::Drawing::Point(168, 314);
			this->Seleccion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Seleccion->Name = L"Seleccion";
			this->Seleccion->Size = System::Drawing::Size(414, 36);
			this->Seleccion->TabIndex = 10;
			this->Seleccion->Text = L"Seleccione la opcion deseada:";
			// 
			// multasRegistradasXEstacionToolStripMenuItem
			// 
			this->multasRegistradasXEstacionToolStripMenuItem->Name = L"multasRegistradasXEstacionToolStripMenuItem";
			this->multasRegistradasXEstacionToolStripMenuItem->Size = System::Drawing::Size(351, 34);
			this->multasRegistradasXEstacionToolStripMenuItem->Text = L"Multas Registradas x Estacion ";
			this->multasRegistradasXEstacionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::multasRegistradasXEstacionToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 609);
			this->Controls->Add(this->Seleccion);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->boxOpcionesMantenimiento);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pbEstactionPesaje);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
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
		String^ MantenimientoSeleccionado = Convert::ToString(boxOpcionesMantenimiento->SelectedItem);
		// Falta relacionarlo con el comboBox

		if (MantenimientoSeleccionado == "Persona") {
			frmMantenimientoPersona^ ventanaMantPersona = gcnew frmMantenimientoPersona();
			ventanaMantPersona->Show();
		}
		else if (MantenimientoSeleccionado == "Tarjeta") {
			frmMantenimientoTarjeta^ ventanaMantTarjeta = gcnew frmMantenimientoTarjeta();
			ventanaMantTarjeta->Show();
		}
		else if (MantenimientoSeleccionado == "Vehiculo") {
			frmMantenimientoVehiculo^ ventanaMantVehiculo = gcnew frmMantenimientoVehiculo();
			ventanaMantVehiculo->Show();
		}
		else if (MantenimientoSeleccionado == "Estacion Pesaje") {
			frmMantenimientoEstacionPesaje^ ventanaMantEstacionPesaje = gcnew frmMantenimientoEstacionPesaje();
			ventanaMantEstacionPesaje->Show();

		}
		else{
			MessageBox::Show("Por favor, seleccione una opcion.");
		}
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
};
}
