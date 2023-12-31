#pragma once
#include "frmEditarUsuario.h"
#include "frmAgregarUsuario.h"

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
	/// Resumen de frmMantenimientoUsuario
	/// </summary>
	public ref class frmMantenimientoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoUsuario(void)
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
		~frmMantenimientoUsuario()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cargo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;







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
			this->nombreUsuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cargo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->button4->Location = System::Drawing::Point(569, 579);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuario::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(349, 579);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuario::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(146, 579);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuario::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Codigo,
					this->nombreUsuario, this->cargo, this->DNI, this->ApellidoPaterno, this->Nombres
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 312);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(745, 231);
			this->dataGridView1->TabIndex = 28;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"C�digo:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Visible = false;
			this->Codigo->Width = 125;
			// 
			// nombreUsuario
			// 
			this->nombreUsuario->HeaderText = L"Usuario:";
			this->nombreUsuario->MinimumWidth = 6;
			this->nombreUsuario->Name = L"nombreUsuario";
			this->nombreUsuario->Width = 125;
			// 
			// cargo
			// 
			this->cargo->HeaderText = L"Cargo:";
			this->cargo->MinimumWidth = 6;
			this->cargo->Name = L"cargo";
			this->cargo->Width = 125;
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			this->DNI->ReadOnly = true;
			this->DNI->Width = 90;
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"Apellido Paterno";
			this->ApellidoPaterno->MinimumWidth = 6;
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			this->ApellidoPaterno->ReadOnly = true;
			this->ApellidoPaterno->Width = 145;
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombre";
			this->Nombres->MinimumWidth = 6;
			this->Nombres->Name = L"Nombres";
			this->Nombres->ReadOnly = true;
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
			this->groupBox1->Location = System::Drawing::Point(125, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(538, 258);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Informaci�n:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Filtro:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(285, 58);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(150, 24);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Apellido Paterno";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &frmMantenimientoUsuario::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(176, 58);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 24);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"DNI";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &frmMantenimientoUsuario::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(248, 195);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuario::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(176, 125);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMantenimientoUsuario::textBox1_KeyPress);
			// 
			// frmMantenimientoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 645);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmMantenimientoUsuario";
			this->Text = L"Mantenimiento Usuario";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoUsuario::frmMantenimientoUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void frmMantenimientoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List <Usuario^>^ listaUsuarios = objUsuarioController->buscarAllSQL();
		mostrarGrilla(listaUsuarios);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ informacion = this->textBox1->Text;
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List <Usuario^>^ listaUsuarios = gcnew List <Usuario^>();
		if (radioButton1->Checked) {
			listaUsuarios = objUsuarioController->buscarUsuarioxDniSQL(informacion);
		}
		if (radioButton2->Checked) {
			listaUsuarios = objUsuarioController->buscarUsuarioxApellidoSQL(informacion);
		}
		mostrarGrilla(listaUsuarios);
	}

	private: void mostrarGrilla(List<Usuario^>^ listaPropietarios) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPropietarios->Count; i++) {
			Usuario^ objUsuario = listaPropietarios[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(objUsuario->getCodigo());
			filaGrilla[1] = objUsuario->getNombreUsuario();
			filaGrilla[2] = objUsuario->getCargo();
			filaGrilla[3] = objUsuario->getDni();
			filaGrilla[4] = objUsuario->getApellidoPaterno();
			filaGrilla[5] = objUsuario->getNombre();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoUsuario = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			UsuarioController^ objeto = gcnew UsuarioController();
			objeto->eliminarUsuarioSQL(CodigoUsuario);

			MessageBox::Show("El Usuario ha sido eliminado con �xito");
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int CodigoUsuario = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			UsuarioController^ objUsuarioController = gcnew UsuarioController();
			Usuario^ objUsuario = objUsuarioController->objbuscarUsuarioxCodigoSQL(CodigoUsuario);
			frmEditarUsuario^ ventanaEditarUsuario = gcnew frmEditarUsuario(objUsuario);
			ventanaEditarUsuario->ShowDialog();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarUsuario^ ventanaAgregarUsuario = gcnew frmAgregarUsuario();
		ventanaAgregarUsuario->ShowDialog();
	}


	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//Este campo es para ingresar numeros de DNI
		if (this->radioButton1->Checked) {
			// Verifica si el car�cter presionado es un numero o la tecla borrar
			if ((Char::IsNumber(e->KeyChar) || e->KeyChar == 8)) {

				String^ TextoIngresado = textBox1->Text;

				// Si longitud del texto actual es menor a 8 o se presiona la tecla borrar, permite m�s entrada
				if (TextoIngresado->Length < 8 || e->KeyChar == 8) {
					e->Handled = false; //permite la entrada
				}
				else {
					e->Handled = true;  // Tiene una longitud de 8 caracteres, no permite m�s entrada
				}
			}
			else {
				e->Handled = true;
			}
		}
		else if (this->radioButton2->Checked) {
			// Verifica si el car�cter presionado NO es un numero o la tecla borrar
			if ((!(Char::IsNumber(e->KeyChar)) || e->KeyChar == 8)) {
				e->Handled = false; //permite la entrada
			}
			else {
				e->Handled = true; //borra la entrada
			}
		}
		//Verifica que se ha presionado la tecla enter (retorno de carro seg�n ascii)
		if (e->KeyChar == 13) {
			this->button1->PerformClick();
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}
};
}
