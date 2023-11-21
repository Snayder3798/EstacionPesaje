#pragma once
#include "Persona.h"
using namespace System;
using namespace System::Collections::Generic;
namespace EstacionPesajeModel {

	public ref class PropietarioVehiculo : Persona {

	private:

	public:
		PropietarioVehiculo();
		PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
			
	};

}