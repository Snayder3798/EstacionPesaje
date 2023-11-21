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
	};


}