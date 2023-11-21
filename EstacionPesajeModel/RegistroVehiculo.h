#pragma once

using namespace System;

namespace EstacionPesajeModel {

	public ref class RegistroVehiculo {
	private:
		int codigo;
		int pesoRegistrado;
		bool multaAplicada;

	public:
		RegistroVehiculo();
		RegistroVehiculo(int codigo, int pesoRegistrado, bool multaAplicada);

		int getCodigo();
		void setCodigo(int codigo);

		int getPesoRegistrado();
		void setPesoRegistrado(int pesoRegistrado);

		bool getMultaAplicada();
		void setMultaAplicada(bool multaAplicada);

	};

}