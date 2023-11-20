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
	/// Resumen de frmReporteNroMultasxEstacionPesaje
	/// </summary>
	public ref class frmReporteNroMultasxEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmReporteNroMultasxEstacionPesaje(void)
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
		~frmReporteNroMultasxEstacionPesaje()
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
			this->chart1->Location = System::Drawing::Point(41, 35);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1192, 512);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteNroMultasxEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1566, 627);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteNroMultasxEstacionPesaje";
			this->Text = L"frmReporteNroMultasxEstacionPesaje";
			this->Load += gcnew System::EventHandler(this, &frmReporteNroMultasxEstacionPesaje::frmReporteNroMultasxEstacionPesaje_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void frmReporteNroMultasxEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
			EstacionController^ objVehiculoController = gcnew EstacionController();
			List <String^>^ listaTiposVehiculos = objVehiculoController->obtenerUbicaciones();
			List <String^>^ listaMultas = objVehiculoController->getMultas(listaTiposVehiculos);
			
			//cambia el tipo de gr�fico a circular
			this->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;

			for (int i = 0; i < listaTiposVehiculos->Count; i++) {
				this->chart1->Series["Series1"]->Points->Add(Convert::ToInt32(listaMultas[i])); // Se necesita un int
				this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaTiposVehiculos[i]; // este y los sgts se necesitan string
				this->chart1->Series["Series1"]->Points[i]->LegendText = listaTiposVehiculos[i];
				this->chart1->Series["Series1"]->Points[i]->Label = listaMultas[i];
			}

			// Personalizaci�n necesaria para el gr�fico
			this->chart1->Legends["Legend1"]->Enabled = true; // Aseg�rate de que la leyenda est� habilitada si es necesario
			
			// Personalizar el t�tulo del gr�fico
			this->chart1->Titles->Add("Gr�fico de n�mero de multas por Estaci�n de Pesaje");
			this->chart1->Titles[0]->Font = gcnew System::Drawing::Font("Arial", 15, FontStyle::Bold);
			this->chart1->Titles[0]->ForeColor = System::Drawing::Color::Red;

			// Personalizar la leyenda del gr�fico
			this->chart1->Legends["Legend1"]->Enabled = true;
			this->chart1->Legends["Legend1"]->Title = "Leyenda";
			this->chart1->Legends["Legend1"]->TitleFont = gcnew System::Drawing::Font("Arial", 12, FontStyle::Bold);
			this->chart1->Legends["Legend1"]->BackColor = System::Drawing::Color::LightYellow;

			// Personalizar el texto en los sectores del gr�fico circular
			for (int i = 0; i < listaTiposVehiculos->Count; i++) {
				this->chart1->Series["Series1"]->Points[i]->Label = listaTiposVehiculos[i] + ": " + listaMultas[i];
				this->chart1->Series["Series1"]->Points[i]->Font = gcnew System::Drawing::Font("Arial", 12, FontStyle::Regular);
			}
		}
	};
}
