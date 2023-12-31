#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

using namespace System::Data::SqlClient;

namespace EstacionPesajeController {

	public ref class EstacionController {
	private:
		SqlConnection^ objConexion;		/*Atributo que permite hacer la conexion a la base de datos*/

	public:
		EstacionController();
		/*
		//Metodos utiles
		List <EstacionPesaje^>^ buscarAll();
		void escribirArchivo(List <EstacionPesaje^>^ listaEstaciones);
		void eliminarEstacionFisico(String^ ubicacion);
		void agregarEstacion(EstacionPesaje^ objEstacionPesaje);
		List<EstacionPesaje^>^ buscarEstacionPesaje(String^ ubicacion);
		EstacionPesaje^ buscarEstacionxUbicacion(String^ ubicacion);
		void actualizarEstacion(EstacionPesaje^ objEstacionPesaje);
		List <String^>^ obtenerUbicaciones(); //Obtener lista de Ubicaciones para ponerlos en el filtro de Ubicaciones
		List <String^>^ getMultas(List <String^>^ listaUbicaciones);
		*/

		/////////////////////////////////////////////////////
		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarEstacionSQL(String^ ubicacion, double latitud, double longitud, int nroMultas);
		void eliminarEstacionSQL(int codigo);
		List<EstacionPesaje^>^ buscarEstacionxUbicacionSQL(String^ ubicacion);
		List <EstacionPesaje^>^ buscarAllSQL();
		EstacionPesaje^ objbuscarEstacionxCodigoSQL(int codigo);
		void actualizarEstacionSQL(int codigo, String^ ubicacion, double latitud, double longitud, int nroMultas);
		List <String^>^ EstacionController::obtenerUbicacionesSQL();
		List <String^>^ getMultasSQL(List <String^>^ listaUbicaciones);
		void actualizarNroMultasxCodigoSQL(int codigo, int nroMultas);

	};

}