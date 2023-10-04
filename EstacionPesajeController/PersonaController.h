#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class PersonaController {
	public:
		PersonaController();
		List<Persona^>^ buscarPersonaDNI(String^ dni);
		List<Persona^>^ buscarPersonaApellido(String^ apellidoPaterno);

		/*Metodos utiles*/
		List <Persona^>^ buscarAll();
		void escribirArchivo(List <Persona^>^ listaPersonas);
		void eliminarPersonaFisico(String^ dni);
		void agregarPersona(Persona^ objPersona);
	};


}
