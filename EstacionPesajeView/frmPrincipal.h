#pragma once

#include "frmMantenimientoPersona.h"
#include "frmMantenimientoVehiculo.h"
#include "frmMantenimientoTarjeta.h"
#include "frmMantenimientoEstacionPesaje.h"


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
			this->pbEstactionPesaje = (gcnew System::Windows::Forms::PictureBox());
			this->boxOpcionesMantenimiento = (gcnew System::Windows::Forms::ComboBox());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->Seleccion = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbEstactionPesaje))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(488, 24);
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
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// propietariosToolStripMenuItem
			// 
			this->propietariosToolStripMenuItem->Name = L"propietariosToolStripMenuItem";
			this->propietariosToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->propietariosToolStripMenuItem->Text = L"Persona";
			this->propietariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::propietariosToolStripMenuItem_Click);
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->vToolStripMenuItem->Text = L"Vehículo";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::vToolStripMenuItem_Click);
			// 
			// tarjetaToolStripMenuItem
			// 
			this->tarjetaToolStripMenuItem->Name = L"tarjetaToolStripMenuItem";
			this->tarjetaToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->tarjetaToolStripMenuItem->Text = L"Tarjeta";
			this->tarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::tarjetaToolStripMenuItem_Click);
			// 
			// estaciónPesajeToolStripMenuItem
			// 
			this->estaciónPesajeToolStripMenuItem->Name = L"estaciónPesajeToolStripMenuItem";
			this->estaciónPesajeToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->estaciónPesajeToolStripMenuItem->Text = L"Estación Pesaje";
			this->estaciónPesajeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::estaciónPesajeToolStripMenuItem_Click);
			// 
			// pbEstactionPesaje
			// 
			this->pbEstactionPesaje->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbEstactionPesaje.Image")));
			this->pbEstactionPesaje->Location = System::Drawing::Point(0, 27);
			this->pbEstactionPesaje->Name = L"pbEstactionPesaje";
			this->pbEstactionPesaje->Size = System::Drawing::Size(488, 366);
			this->pbEstactionPesaje->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbEstactionPesaje->TabIndex = 3;
			this->pbEstactionPesaje->TabStop = false;
			this->pbEstactionPesaje->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// boxOpcionesMantenimiento
			// 
			this->boxOpcionesMantenimiento->FormattingEnabled = true;
			this->boxOpcionesMantenimiento->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Persona", L"Tarjeta", L"Vehiculo",
					L"Estacion Pesaje"
			});
			this->boxOpcionesMantenimiento->Location = System::Drawing::Point(183, 242);
			this->boxOpcionesMantenimiento->Name = L"boxOpcionesMantenimiento";
			this->boxOpcionesMantenimiento->Size = System::Drawing::Size(142, 21);
			this->boxOpcionesMantenimiento->TabIndex = 5;
			this->boxOpcionesMantenimiento->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPrincipal::boxOpcionesMantenimiento_SelectedIndexChanged);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->Location = System::Drawing::Point(209, 280);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(82, 27);
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
			this->Titulo->Location = System::Drawing::Point(39, 89);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(411, 33);
			this->Titulo->TabIndex = 9;
			this->Titulo->Text = L"PANEL DE MANTENIMIENTO";
			// 
			// Seleccion
			// 
			this->Seleccion->AutoSize = true;
			this->Seleccion->BackColor = System::Drawing::Color::Transparent;
			this->Seleccion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Seleccion->Location = System::Drawing::Point(112, 204);
			this->Seleccion->Name = L"Seleccion";
			this->Seleccion->Size = System::Drawing::Size(273, 24);
			this->Seleccion->TabIndex = 10;
			this->Seleccion->Text = L"Seleccione la opcion deseada:";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 396);
			this->Controls->Add(this->Seleccion);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->btnSiguiente);
			this->Controls->Add(this->boxOpcionesMantenimiento);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pbEstactionPesaje);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
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
		;
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
	}
private: System::Void boxOpcionesMantenimiento_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
