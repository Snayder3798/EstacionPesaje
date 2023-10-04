#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class PersonaController {
	public:
		PersonaController();
		List<Persona^>^ buscarPersona(String^ dni);
	};


}
