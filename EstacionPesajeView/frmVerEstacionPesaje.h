#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EstacionPesajeModel;
	using namespace EstacionPesajeController;


	/// <summary>
	/// Resumen de frmVerEstacionPesaje
	/// </summary>
	public ref class frmVerEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmVerEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		frmVerEstacionPesaje(EstacionPesaje^ objEstacion)
		{
			InitializeComponent();

			this->objEstacion = objEstacion;

			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmVerEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: EstacionPesaje^ objEstacion;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(35, 38);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(501, 346);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Estaci�n Pesaje:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(188, 281);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 29);
			this->textBox2->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 286);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Multas Registradas:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(188, 222);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 29);
			this->textBox1->TabIndex = 26;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(188, 162);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(286, 29);
			this->textBox6->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(188, 108);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(286, 29);
			this->textBox7->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 228);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 25;
			this->label1->Text = L"C�digo:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(188, 46);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(286, 29);
			this->textBox8->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 51);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Ubicaci�n: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 168);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Longitud:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 112);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 20);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Latitud:";
			// 
			// frmVerEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 419);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"frmVerEstacionPesaje";
			this->Text = L"Ver Estacion Pesaje";
			this->Load += gcnew System::EventHandler(this, &frmVerEstacionPesaje::frmVerEstacionPesaje_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmVerEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox8->Text = this->objEstacion->getUbicacion();
		this->textBox7->Text = Convert::ToString(this->objEstacion->getLatitud());
		this->textBox6->Text = Convert::ToString(this->objEstacion->getLongitud());
		this->textBox1->Text = Convert::ToString(this->objEstacion->getCodigo());
		this->textBox2->Text = Convert::ToString(this->objEstacion->getNroMultas());
	}
};
}
