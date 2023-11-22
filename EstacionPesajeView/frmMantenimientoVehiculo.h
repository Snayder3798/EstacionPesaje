#pragma once

#include "frmAgregarVehiculo.h"
#include "frmEditarVehiculo.h"

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
	/// Resumen de frmMantenimientoVehiculo
	/// </summary>
	public ref class frmMantenimientoVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoVehiculo(void)
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
		~frmMantenimientoVehiculo()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ boxVehiculo;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Placa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pesoSinCarga;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pesoConCarga;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMantenimientoVehiculo::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->boxVehiculo = (gcnew System::Windows::Forms::PictureBox());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Placa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pesoSinCarga = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pesoConCarga = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxVehiculo))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 535);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 66);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 535);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 66);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(80, 535);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 66);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Codigo,
					this->Placa, this->Tipo, this->pesoSinCarga, this->pesoConCarga
			});
			this->dataGridView1->Location = System::Drawing::Point(44, 268);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(622, 228);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantenimientoVehiculo::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(44, 80);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(586, 178);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(22, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"(formato A1B-2C3)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 114);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(102, 114);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMantenimientoVehiculo::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 122);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Placa:";
			// 
			// boxVehiculo
			// 
			this->boxVehiculo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxVehiculo.Image")));
			this->boxVehiculo->Location = System::Drawing::Point(300, 18);
			this->boxVehiculo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->boxVehiculo->Name = L"boxVehiculo";
			this->boxVehiculo->Size = System::Drawing::Size(346, 146);
			this->boxVehiculo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->boxVehiculo->TabIndex = 16;
			this->boxVehiculo->TabStop = false;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 125;
			// 
			// Placa
			// 
			this->Placa->HeaderText = L"Placa:";
			this->Placa->MinimumWidth = 6;
			this->Placa->Name = L"Placa";
			this->Placa->ReadOnly = true;
			this->Placa->Width = 125;
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo:";
			this->Tipo->MinimumWidth = 6;
			this->Tipo->Name = L"Tipo";
			this->Tipo->ReadOnly = true;
			this->Tipo->Width = 125;
			// 
			// pesoSinCarga
			// 
			this->pesoSinCarga->HeaderText = L"Peso Limite:";
			this->pesoSinCarga->MinimumWidth = 6;
			this->pesoSinCarga->Name = L"pesoSinCarga";
			this->pesoSinCarga->ReadOnly = true;
			this->pesoSinCarga->Width = 125;
			// 
			// pesoConCarga
			// 
			this->pesoConCarga->HeaderText = L"Cantidad de Multas";
			this->pesoConCarga->MinimumWidth = 6;
			this->pesoConCarga->Name = L"pesoConCarga";
			this->pesoConCarga->ReadOnly = true;
			this->pesoConCarga->Width = 125;
			// 
			// frmMantenimientoVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 625);
			this->Controls->Add(this->boxVehiculo);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantenimientoVehiculo";
			this->Text = L"Mantenimiento de Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoVehiculo::frmMantenimientoVehiculo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxVehiculo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void frmMantenimientoVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		List <Vehiculo^>^ listaVehiculos = objVehiculoController->buscarAllSQL();
		mostrarGrilla(listaVehiculos);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarVehiculo^ ventanaAgregarVehiculo = gcnew frmAgregarVehiculo();
		ventanaAgregarVehiculo->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ placa = this->textBox1->Text;
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		List <Vehiculo^>^ listaVehiculosSQL = objVehiculoController->buscarVehiculosxPlacaSQL(placa);
		mostrarGrilla(listaVehiculosSQL);
	}

	private: void mostrarGrilla(List<Vehiculo^>^ listaVehiculos) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		
		for (int i = 0; i < listaVehiculos->Count; i++) {

			Vehiculo^ objVehiculo = listaVehiculos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);

			filaGrilla[0] = Convert::ToString(objVehiculo->getCodigo());
			filaGrilla[1] = objVehiculo->getPlaca();
			filaGrilla[2] = objVehiculo->getTipoVehiculo();
			filaGrilla[3] = Convert::ToString(objVehiculo->getPesoLimite());
			filaGrilla[4] = Convert::ToString(objVehiculo->getCantMultas());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int  codigoVehiculoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

			VehiculoController^ objeto = gcnew VehiculoController();
			objeto->eliminarVehiculoSQL(codigoVehiculoEliminar); /*SQL*/
			MessageBox::Show("El Vehiculo ha sido eliminado con éxito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
    
      //Codigo carlos
      int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
      int CodigoVehiculoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
      //	String^ PlacaVehiculoEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

      VehiculoController^ objVehiculoController = gcnew VehiculoController();
      frmEditarVehiculo^ ventanaEditarVehiculo = gcnew frmEditarVehiculo(CodigoVehiculoEditar);
      ventanaEditarVehiculo->ShowDialog();
    
      //Codigo master
			/*int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; //Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0
			String^ PlacaVehiculoEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
			VehiculoController^ objVehiculoController = gcnew VehiculoController();
			Vehiculo^ objVehiculo = objVehiculoController->buscarVehiculoxPlaca(PlacaVehiculoEditar);
			frmEditarVehiculo^ ventanaEditarVehiculo = gcnew frmEditarVehiculo(objVehiculo);
			ventanaEditarVehiculo->ShowDialog();*/
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si la tecla presionada es un dígito o una letra mayúscula
		if (Char::IsDigit(e->KeyChar) || (e->KeyChar >= 'A' && e->KeyChar <= 'Z') || e->KeyChar == '-') {
			// Obtiene el texto actual del TextBox
			String^ TextoIngresado = textBox1->Text;

			// Verifica la longitud del texto actual
			if (TextoIngresado->Length < 7) {
				// Verifica si se ha ingresado el guion en la posición 3
				if (TextoIngresado->Length == 3) {
					// Solo permite el guion en la posición 3
					e->Handled = true;
					if (e->KeyChar == '-') {
						e->Handled = false;
					}
				}
				else {
					e->Handled = false;  // Permite letras y números en las posiciones 0, 1, 2, 4, 5, 6
				}
			}
			else {
				e->Handled = true;  // La placa tiene una longitud de 6 caracteres, no permite más entrada
			}

		}
		else if (e->KeyChar == 8) {
			// Permite la tecla borrar 
			e->Handled = false;
		}
		else {
			e->Handled = true;  // Suprime cualquier otro carácter
		}
	}

};
}
