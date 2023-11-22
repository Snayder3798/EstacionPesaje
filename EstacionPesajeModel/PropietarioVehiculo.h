#pragma once
#include "Persona.h"
#include "Usuario.h"
#include "Vehiculo.h"

using namespace System;
using namespace System::Collections::Generic;
namespace EstacionPesajeModel {

	public ref class PropietarioVehiculo : Persona {

	private:
		int multasAcumuladas;
		Usuario^ objUsuario;
		List<Vehiculo^>^ listaVehiculos;
	public:
		PropietarioVehiculo();
		PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, Usuario^ objUsuario);
		PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
		
		int getMultasAcumuladas();
		void setMultasAcumuladas(int multasAcumuladas);

		Usuario^ getUsuario();
		void setUsuario(Usuario^ objUsuario);

		List<Vehiculo^>^ getListaVehiculos();
		void setListaVehiculos(List<Vehiculo^>^ listaVehiculos);
	};

}