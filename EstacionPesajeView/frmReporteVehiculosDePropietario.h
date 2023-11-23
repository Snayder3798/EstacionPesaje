#pragma once
#include "frmBuscarPropietarioVehiculo.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Xml;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmReporteVehiculosDePropietario
	/// </summary>
	public ref class frmReporteVehiculosDePropietario : public System::Windows::Forms::Form
	{
	public:
		frmReporteVehiculosDePropietario(void)
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
		~frmReporteVehiculosDePropietario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;







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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(22, 11);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(553, 176);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seleccione el propietario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Datos encontrados:\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 36);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Buscar Propietario";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReporteVehiculosDePropietario::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Código Propietario:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(125, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(289, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Apellido Materno:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(394, 113);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(139, 20);
			this->textBox8->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(289, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Nombre:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(394, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 20);
			this->textBox4->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Apellido Paterno:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(125, 115);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 20);
			this->textBox5->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 144);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"DNI:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(125, 141);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 20);
			this->textBox6->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(147, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 30);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Generar Reporte";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmReporteVehiculosDePropietario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(324, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 30);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmReporteVehiculosDePropietario::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column5, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(31, 200);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 149);
			this->dataGridView1->TabIndex = 28;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo Vehiculo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo de Vehiculo";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Placa";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Peso Limite";
			this->Column5->Name = L"Column5";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cantidad de Multas";
			this->Column4->Name = L"Column4";
			// 
			// frmReporteVehiculosDePropietario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 397);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Name = L"frmReporteVehiculosDePropietario";
			this->Text = L"Generar reporte";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo();
	frmBuscarPropietarioVehiculo^ ventBuscarPropietario = gcnew frmBuscarPropietarioVehiculo(objPropietario);
	ventBuscarPropietario->ShowDialog();
	this->textBox2->Text = Convert::ToString(objPropietario->getCodigo());
	this->textBox4->Text = objPropietario->getNombre();
	this->textBox5->Text = objPropietario->getApellidoPaterno();
	this->textBox8->Text = objPropietario->getApellidoMaterno();
	this->textBox6->Text = objPropietario->getDni();

	VehiculoController^ objVehiculoController = gcnew VehiculoController();
	int codigoPropietario = objPropietario->getCodigo();
	List<Vehiculo^> ^ listaVehiculos = objVehiculoController->buscarVehiculosxCodigoPropietarioSQL(codigoPropietario);
	mostrarGrilla(listaVehiculos);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ prueba = this->textBox2->Text;
	if (this->textBox2->Text != "") {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Excel files (*.xls)|*.xls|All files (*.*)|*.*";
		saveFileDialog1->Title = "Guardar como archivo XLS";
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = saveFileDialog1->FileName;
			ExportarDataGridViewAXML(dataGridView1, filePath);
		}
	}
	else {
		MessageBox::Show("Por favor, seleccione un propietario antes de continuar.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
 void ExportarDataGridViewAXML(DataGridView^ dataGridView, String^ filePath) {
	XmlTextWriter^ writer = gcnew XmlTextWriter(filePath, nullptr);
	writer->Formatting = Formatting::Indented;
	writer->WriteStartDocument();
	writer->WriteStartElement("Data");

	for (int i = 0; i < (dataGridView->Rows->Count - 1); i++) {
			   writer->WriteStartElement("Row");
			   for (int j = 0; j < dataGridView->Columns->Count; j++) {
				   writer->WriteStartElement(dataGridView->Columns[j]->HeaderText->Replace(" ", ""));
				   writer->WriteString(dataGridView->Rows[i]->Cells[j]->Value->ToString());
				   writer->WriteEndElement();
			   }
			   writer->WriteEndElement();
		   }

		   writer->WriteEndElement();
		   writer->WriteEndDocument();
		   writer->Close();
	   }
  private: void mostrarGrilla(List<Vehiculo^>^ listaVehiculos) {
	  this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/

	  for (int i = 0; i < listaVehiculos->Count; i++) {

		  Vehiculo^ objVehiculo = listaVehiculos[i];
		  array<String^>^ filaGrilla = gcnew array<String^>(5);

		  filaGrilla[0] = Convert::ToString(objVehiculo->getCodigo());
		  filaGrilla[2] = objVehiculo->getPlaca();
		  filaGrilla[1] = objVehiculo->getTipoVehiculo();
		  filaGrilla[3] = Convert::ToString(objVehiculo->getPesoLimite());
		  filaGrilla[4] = Convert::ToString(objVehiculo->getCantMultas());
		  this->dataGridView1->Rows->Add(filaGrilla);
	  }
  }
};
}
