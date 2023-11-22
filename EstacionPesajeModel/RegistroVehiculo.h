#pragma once

using namespace System;

namespace EstacionPesajeModel {

	public ref class RegistroVehiculo {
	private:
		int codigo;
		int pesoRegistrado;
		int multaAplicada;
		String^ fechaHora;

	public:
		RegistroVehiculo();
		RegistroVehiculo(int codigo, int pesoRegistrado, int multaAplicada, String^ fechaHora);

		int getCodigo();
		void setCodigo(int codigo);

		int getPesoRegistrado();
		void setPesoRegistrado(int pesoRegistrado);

		int getMultaAplicada();
		void setMultaAplicada(int multaAplicada);

		String^ getFechaHora();
		void setFechaHora(String^ fechaHora);

	};

}