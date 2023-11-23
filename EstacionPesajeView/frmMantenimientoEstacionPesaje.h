#pragma once

#include "frmAgregarEstacionPesaje.h"
#include "frmEditarEstacionPesaje.h"
#include "frmVerEstacionPesaje.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace EstacionPesajeController;
	using namespace System::Collections::Generic;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmMantenimientoEstacionPesaje
	/// </summary>
	public ref class frmMantenimientoEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmMantenimientoEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ubicacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Longitud;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Latitud;





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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ubicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Longitud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Latitud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(277, 311);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(40, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Ubicacion, this->Longitud, this->Latitud
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 129);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(437, 157);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantenimientoEstacionPesaje::dataGridView1_CellContentClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"C�digo:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 125;
			// 
			// Ubicacion
			// 
			this->Ubicacion->HeaderText = L"Ubicaci�n:";
			this->Ubicacion->MinimumWidth = 6;
			this->Ubicacion->Name = L"Ubicacion";
			this->Ubicacion->ReadOnly = true;
			this->Ubicacion->Width = 140;
			// 
			// Longitud
			// 
			this->Longitud->HeaderText = L"Longitud:";
			this->Longitud->MinimumWidth = 6;
			this->Longitud->Name = L"Longitud";
			this->Longitud->ReadOnly = true;
			this->Longitud->Width = 130;
			// 
			// Latitud
			// 
			this->Latitud->HeaderText = L"Latitud:";
			this->Latitud->MinimumWidth = 6;
			this->Latitud->Name = L"Latitud";
			this->Latitud->ReadOnly = true;
			this->Latitud->Width = 130;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(375, 90);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(90, 40);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(269, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubicaci�n:";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(395, 311);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button5_Click);
			// 
			// frmMantenimientoEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 367);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Name = L"frmMantenimientoEstacionPesaje";
			this->Text = L"Mantenimiento de Estaci�n Pesaje";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::frmMantenimientoEstacionPesaje_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void frmMantenimientoEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
		EstacionController^ objEstacionController = gcnew EstacionController();
		List <String^>^ listaUbicaciones = objEstacionController->obtenerUbicacionesSQL();
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add("Todos");
		for (int i = 0; i < listaUbicaciones->Count; i++) {
			this->comboBox1->Items->Add(listaUbicaciones[i]);
		}
		List <EstacionPesaje^>^ listaEstaciones = objEstacionController->buscarAllSQL();
		mostrarGrilla(listaEstaciones);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarEstacionPesaje^ ventanaAgregarEstacionPesaje = gcnew frmAgregarEstacionPesaje();
		/*ventanaAgregarPropietario->MdiParent = this; */
		ventanaAgregarEstacionPesaje->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ubicacion = this->comboBox1->Text;
		EstacionController^ objEstacionController = gcnew EstacionController();
		List <EstacionPesaje^>^ listaEstaciones = gcnew List <EstacionPesaje^>();
		if (ubicacion == "Todos") {
			listaEstaciones = objEstacionController->buscarAllSQL();
		}
		else {
			listaEstaciones = objEstacionController->buscarEstacionxUbicacionSQL(ubicacion);
		}
		mostrarGrilla(listaEstaciones); 
	}

	private: void mostrarGrilla(List<EstacionPesaje^>^ listaEstaciones) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

		for (int i = 0; i < listaEstaciones->Count; i++) {
			EstacionPesaje^ objEstacion = listaEstaciones[i];

			array<String^>^ filaGrilla = gcnew array<String^>(4);

			filaGrilla[0] = Convert::ToString(objEstacion->getCodigo());
			filaGrilla[1] = objEstacion-> getUbicacion();
			filaGrilla[2] = Convert::ToString(objEstacion->getLatitud());
			filaGrilla[3] = Convert::ToString(objEstacion-> getLongitud());

			this->dataGridView1->Rows->Add(filaGrilla);
		}
	} 

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoEstacion = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			EstacionController^ objeto = gcnew EstacionController();
			objeto->eliminarEstacionSQL(CodigoEstacion);

			MessageBox::Show("La Estacion ha sido eliminado con �xito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoEstacion = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			EstacionController^ objEstacionController = gcnew EstacionController();
			EstacionPesaje^ objEstacion = objEstacionController->objbuscarEstacionxCodigoSQL(CodigoEstacion);
			frmEditarEstacionPesaje^ ventanaEditarEstacionPesaje = gcnew frmEditarEstacionPesaje(objEstacion);
			ventanaEditarEstacionPesaje->ShowDialog();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoEstacion = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			EstacionController^ objEstacionController = gcnew EstacionController();
			EstacionPesaje^ objEstacion = objEstacionController->objbuscarEstacionxCodigoSQL(CodigoEstacion);
			frmVerEstacionPesaje^ ventanaVerEstacionPesaje = gcnew frmVerEstacionPesaje(objEstacion);
			ventanaVerEstacionPesaje->ShowDialog();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}	
	}
};
}
