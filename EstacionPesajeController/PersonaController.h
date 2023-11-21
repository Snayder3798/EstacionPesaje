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

		Persona^ buscarPersonaxDni(String^ dni);
		void actualizarPersona(Persona^ objPersona);
		//METODOS PROXIMOS A IMPLEMENTAR PARA SQL
		void registrarPersona(int codigoPersona, String^ nombrePersona, String^ apellidoPaternoPersona, String^ apellidoMaternoPersona, String^ dniPersona, int multasAcumuladasPersona);
		Persona^ buscarPersonaxCodigo(int codigo);
		void actualizarPersona(int codigoPersona, String^ nombrePersona, String^ apellidoPaternoPersona, String^ apellidoMaternoPersona, String^ dniPersona, int multasAcumuladasPersona);
		List <Persona^>^ buscarPersonaxDniSQL(String^ informacion);
		List <Persona^>^ buscarPersonaxApellidoSQL(String^ informacion);
		void eliminarVendedorSQL(int codigoEliminar);
	
	};


}
