#pragma once

#include "frmAgregarPropietarioVehiculo.h"
#include "frmEditarPropietarioVehiculo.h"

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
	/// Resumen de frmMantenimientoPropietarioVehiculo
	/// </summary>
	public ref class frmMantenimientoPropietarioVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoPropietarioVehiculo(void)
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
		~frmMantenimientoPropietarioVehiculo()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ multasAcumuladas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;





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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->multasAcumuladas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(508, 479);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(312, 479);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 479);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Codigo,
					this->multasAcumuladas, this->DNI, this->ApellidoPaterno, this->Nombres
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 255);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(663, 185);
			this->dataGridView1->TabIndex = 23;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->Width = 125;
			// 
			// multasAcumuladas
			// 
			this->multasAcumuladas->HeaderText = L"Multas Acumuladas";
			this->multasAcumuladas->MinimumWidth = 6;
			this->multasAcumuladas->Name = L"multasAcumuladas";
			this->multasAcumuladas->Width = 125;
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			this->DNI->Width = 90;
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"Apellido Paterno";
			this->ApellidoPaterno->MinimumWidth = 6;
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			this->ApellidoPaterno->Width = 145;
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombre";
			this->Nombres->MinimumWidth = 6;
			this->Nombres->Name = L"Nombres";
			this->Nombres->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(82, 27);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(479, 207);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Información:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Filtro:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(253, 46);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(128, 20);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Apellido Paterno";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(156, 46);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 20);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"DNI";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 156);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(156, 100);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::textBox1_TextChanged);
			// 
			// frmMantenimientoPropietarioVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 529);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantenimientoPropietarioVehiculo";
			this->Text = L"Mantenimiento Propietario Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoPropietarioVehiculo::frmMantenimientoPropietarioVehiculo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void frmMantenimientoPropietarioVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		PropietarioVehiculoController^ objPropietarioController = gcnew PropietarioVehiculoController();
		List <PropietarioVehiculo^>^ listaPropietarios = objPropietarioController->buscarAllSQL();
		mostrarGrilla(listaPropietarios);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ informacion = this->textBox1->Text;
		PropietarioVehiculoController^ objPersonaController = gcnew PropietarioVehiculoController();
		List <PropietarioVehiculo^>^ listaPersonas = gcnew List <PropietarioVehiculo^>();
		if (radioButton1->Checked) {
			listaPersonas = objPersonaController->buscarPropietarioxDniSQL(informacion);
		}
		if (radioButton2->Checked) {
			listaPersonas = objPersonaController->buscarPropietarioxApellidoSQL(informacion);
		}
		mostrarGrilla(listaPersonas);
	}

	private: void mostrarGrilla(List<PropietarioVehiculo^>^ listaPropietarios) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPropietarios->Count; i++) {
			PropietarioVehiculo^ objPropietario = listaPropietarios[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objPropietario->getCodigo());
			filaGrilla[1] = Convert::ToString(objPropietario->getMultasAcumuladas());
			filaGrilla[2] = objPropietario->getDni();
			filaGrilla[3] = objPropietario->getApellidoPaterno();
			filaGrilla[4] = objPropietario->getNombre();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarPropietarioVehiculo^ ventanaAgregarPropietario = gcnew frmAgregarPropietarioVehiculo();
		ventanaAgregarPropietario->ShowDialog();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoPropietario = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			PropietarioVehiculoController^ objeto = gcnew PropietarioVehiculoController();
			objeto->eliminarPropietarioSQL(CodigoPropietario);

			MessageBox::Show("La Estacion ha sido eliminado con éxito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoEstacion = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			PropietarioVehiculoController^ objEstacionController = gcnew PropietarioVehiculoController();
			PropietarioVehiculo^ objEstacion = objEstacionController->objbuscarPropietarioxCodigoSQL(CodigoEstacion);
			frmEditarPropietarioVehiculo^ ventanaEditarPropietario = gcnew frmEditarPropietarioVehiculo(objEstacion);
			ventanaEditarPropietario->ShowDialog();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}


};
}

