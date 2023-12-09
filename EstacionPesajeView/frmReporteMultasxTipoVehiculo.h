#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmReporteMultasxTipoVehiculo
	/// </summary>
	public ref class frmReporteMultasxTipoVehiculo : public System::Windows::Forms::Form
	{
	public:
		frmReporteMultasxTipoVehiculo(void)
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
		~frmReporteMultasxTipoVehiculo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(41, 32);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(644, 495);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteMultasxTipoVehiculo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 542);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmReporteMultasxTipoVehiculo";
			this->Text = L"Reporte de Multas por Tipo de Vehiculo";
			this->Load += gcnew System::EventHandler(this, &frmReporteMultasxTipoVehiculo::frmReporteMultasxTipoVehiculo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmReporteMultasxTipoVehiculo_Load(System::Object^ sender, System::EventArgs^ e) {
		VehiculoController^ objVehiculoController = gcnew VehiculoController();
		List <String^>^ listaTiposVehiculos = objVehiculoController->getTiposVehiculosSQL();
		List <String^>^ listaMultas = objVehiculoController->getMultasSQL(listaTiposVehiculos);
		for (int i = 0; i < listaTiposVehiculos->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(Convert::ToInt32(listaMultas[i])); // Se necesita un int
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaTiposVehiculos[i]; // este y los sgts se necesitan string
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaTiposVehiculos[i];
			this->chart1->Series["Series1"]->Points[i]->Label = listaMultas[i];
		}

	}
	};
}
