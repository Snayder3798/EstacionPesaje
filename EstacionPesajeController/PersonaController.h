#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class PersonaController {
	private: 
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		PersonaController();
		//List<Persona^>^ buscarPersonaDNI(String^ dni);
		//List<Persona^>^ buscarPersonaApellido(String^ apellidoPaterno);

		///*Metodos utiles*/
		//List <Persona^>^ buscarAll();
		//void escribirArchivo(List <Persona^>^ listaPersonas);
		//void eliminarPersonaFisico(String^ dni);
		//void agregarPersona(Persona^ objPersona);

		//Persona^ buscarPersonaxDni(String^ dni);
		//void actualizarPersona(Persona^ objPersona);


		//METODOS PROXIMOS A IMPLEMENTAR PARA SQL
		void abrirConexionBD();
		void cerrarConexionBD();
		void registrarPersonaSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
		void eliminarPersonaSQL(int codigo);
		void actualizarPersonaSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
		Persona^ buscarPersonaxCodigoSQL(int codigo);
		List <Persona^>^ buscarPersonaxApellidoPaternoSQL(String^ informacion);
		List <Persona^>^ buscarPersonaxDniSQL(String^ informacion);
	};


}
