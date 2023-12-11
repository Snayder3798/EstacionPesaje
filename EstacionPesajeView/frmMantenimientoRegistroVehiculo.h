#pragma once
#include "frmAgregarRegistroVehiculo.h"
#include "frmEditarRegistroVehiculo.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmMantenimientoRegistroVehiculo
	/// </summary>
	public ref class frmMantenimientoRegistroVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoRegistroVehiculo(void)
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
		~frmMantenimientoRegistroVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(62, 42);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(586, 142);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(140, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 26);
			this->textBox1->TabIndex = 23;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMantenimientoRegistroVehiculo::textBox1_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(42, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"(formato A1B-2C3)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(431, 60);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoRegistroVehiculo::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 68);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Placa:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(493, 448);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 32);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoRegistroVehiculo::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(294, 448);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 32);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoRegistroVehiculo::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(91, 448);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 32);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoRegistroVehiculo::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 195);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(622, 228);
			this->dataGridView1->TabIndex = 13;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Visible = false;
			this->Codigo->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Peso Registrado:";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Multa Aplicada:";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha y Hora:";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// frmMantenimientoRegistroVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 515);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmMantenimientoRegistroVehiculo";
			this->Text = L"Mantenimiento Registro Vehículo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarRegistroVehiculo^ ventanaAgregarRegistroVehiculo = gcnew frmAgregarRegistroVehiculo();
		ventanaAgregarRegistroVehiculo->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//HABILITAMOS LA BUSQUEDA DE PLACAS
		//Buscams vehiculo x placa. Hacer ima verificacion de la placa antes de meterla al buscador

		String^ placa = this->textBox1->Text;
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		Vehiculo^ objVehiculosSQL = objVehiculoController->objbuscarVehiculoxPlacaSQL(placa);
		
		int codigoVehiculo = objVehiculosSQL->getCodigo();
		
		RegistroVehiculoController^ objRegistroVehiculoController = gcnew RegistroVehiculoController();
		List<RegistroVehiculo^>^ listaRegistros = objRegistroVehiculoController->buscarRegistroxCodigoVehiculoSQL(codigoVehiculo);
		
		mostrarGrilla(listaRegistros);
	}
	private: void mostrarGrilla(List<RegistroVehiculo^>^ listaRegistros) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

		for (int i = 0; i < listaRegistros->Count; i++) {

			RegistroVehiculo^ objRegistroVehiculo = listaRegistros[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);

			filaGrilla[0] = Convert::ToString(objRegistroVehiculo->getCodigo());
			filaGrilla[1] = Convert::ToString(objRegistroVehiculo->getPesoRegistrado());
			filaGrilla[2] = Convert::ToString(objRegistroVehiculo->getMultaAplicada());
			filaGrilla[3] = objRegistroVehiculo->getFechaHora();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int  codigoRegistroEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

			RegistroVehiculoController^ objeto = gcnew RegistroVehiculoController();
			objeto->eliminarRegistroSQL(codigoRegistroEliminar); /*SQL*/
			MessageBox::Show("El registro ha sido eliminado con éxito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {

			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int codigoRegistroVehiculoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

			RegistroVehiculoController^ objRegistroVehiculoController = gcnew RegistroVehiculoController();
			frmEditarRegistroVehiculo^ ventanaEditarRegistro = gcnew frmEditarRegistroVehiculo(codigoRegistroVehiculoEditar);
			ventanaEditarRegistro->ShowDialog();
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

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
