#pragma once

#include "frmAgregarTarjeta.h"
#include "frmEditarTarjeta.h"

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
	/// Resumen de frmMantenimientoTarjeta
	/// </summary>
	public ref class frmMantenimientoTarjeta : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoTarjeta(void)
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
		~frmMantenimientoTarjeta()
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


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NroTarjeta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;


















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMantenimientoTarjeta::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NroTarjeta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(420, 423);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(240, 423);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 423);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->NroTarjeta, this->Estado, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 203);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(475, 178);
			this->dataGridView1->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(16, 50);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(521, 133);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de busqueda:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 84);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(120, 87);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMantenimientoTarjeta::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 91);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N� de tarjeta:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(252, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo:";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Visible = false;
			this->Column1->Width = 150;
			// 
			// NroTarjeta
			// 
			this->NroTarjeta->HeaderText = L"N� de tarjeta:";
			this->NroTarjeta->MinimumWidth = 6;
			this->NroTarjeta->Name = L"NroTarjeta";
			this->NroTarjeta->ReadOnly = true;
			this->NroTarjeta->Width = 160;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado:";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->ReadOnly = true;
			this->Estado->Width = 140;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Codigo de Propietario:";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// frmMantenimientoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 480);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmMantenimientoTarjeta";
			this->Text = L"Mantenimiento de Tarjeta";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoTarjeta::frmMantenimientoTarjeta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarTarjeta^ ventanaAgregarTarjeta = gcnew frmAgregarTarjeta();
		ventanaAgregarTarjeta->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numeroTarjeta= this->textBox1->Text;
		TarjetaController^ objTarjetaController = gcnew TarjetaController();
		List <Tarjeta^>^ listaTarjetas = objTarjetaController->buscarListaxNumeroSQL(numeroTarjeta);

		mostrarGrilla(listaTarjetas);
	}

	private: void mostrarGrilla(List<Tarjeta^>^ listaTarjetas) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

		for (int i = 0; i < listaTarjetas->Count; i++) {

			Tarjeta^ objTarjeta = listaTarjetas[i];

			array<String^>^ filaGrilla = gcnew array<String^>(4);

			filaGrilla[0] = Convert::ToString(objTarjeta->getCodigo());
			filaGrilla[1] = objTarjeta->getNumeroTarjeta();			
			filaGrilla[2] = objTarjeta->getEstado();
			
			this->dataGridView1->Rows->Add(filaGrilla);

		}
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int  codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

			TarjetaController^ objeto = gcnew TarjetaController();
			objeto->eliminarTarjetaSQLxCodigo(codigoEliminar);

			MessageBox::Show("La Tarjeta ha sido eliminada con �xito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int codigo = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			TarjetaController^ objtTarjetaController = gcnew TarjetaController();
			Tarjeta^ objTarjeta = objtTarjetaController->buscarTarjetaxCodigoSQL(codigo);
			frmEditarTarjeta^ ventanaEditartarjeta = gcnew frmEditarTarjeta(objTarjeta);
			ventanaEditartarjeta->ShowDialog();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void frmMantenimientoTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
		TarjetaController^ objTarjetaController = gcnew TarjetaController();
		List <Tarjeta^>^ listaTarjetas = objTarjetaController->buscarAllSQL();
		mostrarGrilla(listaTarjetas);
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		// Verifica si el car�cter presionado es un numero, guion o borrar
		if ((Char::IsNumber(e->KeyChar) || e->KeyChar == '-' || e->KeyChar == 8)) {

			String^ TextoIngresado = textBox1->Text;

			// Si longitud del texto actual es menor a 19 o se presiona la tecla borrar, permite m�s entrada
			if (TextoIngresado->Length < 19 || e->KeyChar == 8) {
				// Verifica si se encuentra en la posici�n 4, 9 o 14
				if (TextoIngresado->Length == 4 || TextoIngresado->Length == 9 || TextoIngresado->Length == 14) {
					//Solo permite el guion en la posici�n 4, 9 y 14
					if ((e->KeyChar == '-' || e->KeyChar == 8)) {
						e->Handled = false; //permite la entrada
					}
					else {
						e->Handled = true; //lo borra
					}
				}
				else { // si no se encuentra en la posici�n 4,9,14
					if (e->KeyChar == '-') {
						e->Handled = true; //se borra si se ingresa guion donde no se debe
					}
					else {
						e->Handled = false; //permite la entrada
					}
				}
			}
			else {
				e->Handled = true;  // Tiene una longitud de 19 caracteres, no permite m�s entrada
			}
		}
		else {
			e->Handled = true;
		}
	}
};
}
