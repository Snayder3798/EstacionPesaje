#pragma once
#include "frmAgregarPropietarioVehiculo.h"

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
	/// Resumen de frmBuscarPropietarioVehiculo
	/// </summary>
	public ref class frmBuscarPropietarioVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmBuscarPropietarioVehiculo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmBuscarPropietarioVehiculo(PropietarioVehiculo^ objPropietarioVehiculo)
		{
			InitializeComponent();
			this->objPropietarioVehiculo = objPropietarioVehiculo;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmBuscarPropietarioVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button2;
	private: PropietarioVehiculo^ objPropietarioVehiculo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;





	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(56, 18);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(538, 258);
			this->groupBox1->TabIndex = 23;
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::radioButton2_CheckedChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::radioButton1_CheckedChanged);
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
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(176, 125);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmBuscarPropietarioVehiculo::textBox1_KeyPress);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 288);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(666, 222);
			this->dataGridView1->TabIndex = 24;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Visible = false;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"DNI";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Paterno";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Nombre";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(303, 534);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(136, 534);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::button3_Click);
			// 
			// frmBuscarPropietarioVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 588);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmBuscarPropietarioVehiculo";
			this->Text = L" Buscar Propietario Veh�culo";
			this->Load += gcnew System::EventHandler(this, &frmBuscarPropietarioVehiculo::frmBuscarPropietarioVehiculo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmBuscarPropietarioVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		PropietarioVehiculoController^ objPropietarioController = gcnew PropietarioVehiculoController();
		List <PropietarioVehiculo^>^ listaPropietarios = objPropietarioController->buscarAllSQL();
		mostrarGrilla(listaPropietarios);
	}
	private: void mostrarGrilla(List<PropietarioVehiculo^>^ listaPropietarios) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaPropietarios->Count; i++) {
			PropietarioVehiculo^ objPropietario = listaPropietarios[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objPropietario->getCodigo());
			// No creo que sea necesario poner cantMultas al buscarfilaGrilla[1] = Convert::ToString(objPropietario->getMultasAcumuladas());
			filaGrilla[1] = objPropietario->getDni();
			filaGrilla[2] = objPropietario->getApellidoPaterno();
			filaGrilla[3] = objPropietario->getNombre();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
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

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoPropietario = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		PropietarioVehiculoController^ objProyectoController = gcnew PropietarioVehiculoController();
		PropietarioVehiculo^ PropietarioSeleccionado = objProyectoController->objbuscarPropietarioxCodigoSQL(codigoPropietario);
		this->objPropietarioVehiculo->setCodigo(PropietarioSeleccionado->getCodigo());
		this->objPropietarioVehiculo->setApellidoPaterno(PropietarioSeleccionado->getApellidoPaterno());
		this->objPropietarioVehiculo->setDni(PropietarioSeleccionado->getDni());
		this->objPropietarioVehiculo->setNombre(PropietarioSeleccionado->getNombre());
		this->objPropietarioVehiculo->setApellidoMaterno(PropietarioSeleccionado->getApellidoMaterno());
		this->objPropietarioVehiculo->setMultasAcumuladas(PropietarioSeleccionado->getMultasAcumuladas());
		this->Close();
	}
	else {
		MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarPropietarioVehiculo^ ventanaAgregarPropietario = gcnew frmAgregarPropietarioVehiculo();
		ventanaAgregarPropietario->ShowDialog();
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
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}
};
}
