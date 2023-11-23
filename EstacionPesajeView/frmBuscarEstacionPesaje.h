#pragma once
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
	/// Resumen de frmBuscarEstacionPesaje
	/// </summary>
	public ref class frmBuscarEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmBuscarEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmBuscarEstacionPesaje(EstacionPesaje^ objEstacionPesaje)
		{
			InitializeComponent();
			this->objEstacionPesaje = objEstacionPesaje;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBuscarEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ubicacion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Longitud;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Latitud;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: EstacionPesaje^ objEstacionPesaje;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ubicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Longitud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Latitud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Ubicacion, this->Longitud, this->Latitud
			});
			this->dataGridView1->Location = System::Drawing::Point(39, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(439, 157);
			this->dataGridView1->TabIndex = 24;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código:";
			this->Codigo->MinimumWidth = 6;
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 75;
			// 
			// Ubicacion
			// 
			this->Ubicacion->HeaderText = L"Ubicación:";
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
			this->groupBox1->Location = System::Drawing::Point(73, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(375, 90);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
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
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarEstacionPesaje::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubicación:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarEstacionPesaje::button2_Click);
			// 
			// frmBuscarEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 359);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmBuscarEstacionPesaje";
			this->Text = L"frmBuscarEstacionPesaje";
			this->Load += gcnew System::EventHandler(this, &frmBuscarEstacionPesaje::frmBuscarEstacionPesaje_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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
			filaGrilla[1] = objEstacion->getUbicacion();
			filaGrilla[2] = Convert::ToString(objEstacion->getLatitud());
			filaGrilla[3] = Convert::ToString(objEstacion->getLongitud());

			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->SelectedRows->Count > 0) {
			int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
			int codigoEstacion = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			EstacionController^ objEstacionController = gcnew EstacionController();
			EstacionPesaje^ EstacionSeleccionada = objEstacionController->objbuscarEstacionxCodigoSQL(codigoEstacion);

			this->objEstacionPesaje->setCodigo(EstacionSeleccionada->getCodigo());
			this->objEstacionPesaje->setUbicacion(EstacionSeleccionada->getUbicacion());
			this->objEstacionPesaje->setLatitud(EstacionSeleccionada->getLatitud());
			this->objEstacionPesaje->setLongitud(EstacionSeleccionada->getLongitud());
			this->objEstacionPesaje->setNroMultas(EstacionSeleccionada->getNroMultas());
			this->Close();
		}
		else {
			MessageBox::Show("Por favor, seleccione una fila en la tabla antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}


	}
	private: System::Void frmBuscarEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
