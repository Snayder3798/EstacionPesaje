#pragma once

#include "frmAgregarPersona.h"
#include "frmEditarPersona.h"

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
	/// Resumen de frmMantenimientoPersona
	/// </summary>
	public ref class frmMantenimientoPersona : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoPersona(void)
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
		~frmMantenimientoPersona()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoMaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ boxPersonas;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMantenimientoPersona::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoMaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->boxPersonas = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxPersonas))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(331, 398);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoPersona::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(184, 398);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoPersona::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(49, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoPersona::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DNI, this->ApellidoPaterno,
					this->ApellidoMaterno, this->Nombres
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 216);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(420, 150);
			this->dataGridView1->TabIndex = 17;
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
			// ApellidoMaterno
			// 
			this->ApellidoMaterno->HeaderText = L"Apellido Materno";
			this->ApellidoMaterno->MinimumWidth = 6;
			this->ApellidoMaterno->Name = L"ApellidoMaterno";
			this->ApellidoMaterno->Width = 145;
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
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 168);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Información:";
			this->label2->Click += gcnew System::EventHandler(this, &frmMantenimientoPersona::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Filtro:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(190, 37);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Apellido Paterno";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(117, 37);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 17);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"DNI";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(165, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoPersona::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(117, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmMantenimientoPersona::textBox1_TextChanged);
			// 
			// boxPersonas
			// 
			this->boxPersonas->BackColor = System::Drawing::SystemColors::Control;
			this->boxPersonas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxPersonas.Image")));
			this->boxPersonas->Location = System::Drawing::Point(307, 27);
			this->boxPersonas->Name = L"boxPersonas";
			this->boxPersonas->Size = System::Drawing::Size(145, 150);
			this->boxPersonas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boxPersonas->TabIndex = 21;
			this->boxPersonas->TabStop = false;
			// 
			// frmMantenimientoPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 448);
			this->Controls->Add(this->boxPersonas);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmMantenimientoPersona";
			this->Text = L"Mantenimiento de Persona";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoPersona::frmMantenimientoPersona_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxPersonas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAgregarPersona^ ventanaAgregarPersona = gcnew frmAgregarPersona();
		/*ventanaAgregarPropietario->MdiParent = this; */
		ventanaAgregarPersona ->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ informacion = this->textBox1->Text;
		PersonaController^ objPersonaController = gcnew PersonaController();
		List <Persona^>^ listaPersonas = gcnew List <Persona^>();
		if (radioButton1 -> Checked) {
			listaPersonas = objPersonaController->buscarPersonaDNI(informacion);
		}
		if (radioButton2->Checked) {
			listaPersonas = objPersonaController->buscarPersonaApellido(informacion);
		}

		mostrarGrilla(listaPersonas);
	}

	private: void mostrarGrilla(List<Persona^>^ listaPersonas) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

		for (int i = 0; i < listaPersonas->Count; i++) {

			Persona^ objPersona = listaPersonas[i];

			array<String^>^ filaGrilla = gcnew array<String^>(5);

			filaGrilla[0] = objPersona->getDni();

			filaGrilla[1] = objPersona->getApellidoPaterno();

			filaGrilla[2] = objPersona->getApellidoMaterno();

			filaGrilla[3] = objPersona->getNombre();

			this->dataGridView1->Rows->Add(filaGrilla);

		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		PersonaController^ objeto;

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/

		String^ EstacionEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		objeto ->eliminarPersonaFisico(EstacionEliminar);

		MessageBox::Show("La Persona ha sido eliminado con éxito");

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/

		String^ DniPersonaEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

		PersonaController^ objPersonaController = gcnew PersonaController();

		Persona^ objPersona = objPersonaController->buscarPersonaxDni(DniPersonaEditar);

		frmEditarPersona^ ventanaEditarPersona = gcnew frmEditarPersona(objPersona);
		ventanaEditarPersona->ShowDialog();
	}
private: System::Void frmMantenimientoPersona_Load(System::Object^ sender, System::EventArgs^ e) {
	PersonaController^ objPersonaController = gcnew PersonaController();
	List <Persona^>^ listaPersonas = objPersonaController->buscarAll();
	mostrarGrilla(listaPersonas);
}
};
}
