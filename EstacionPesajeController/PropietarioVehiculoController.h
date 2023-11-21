#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

using namespace System::Data::SqlClient;

namespace EstacionPesajeController {

	public ref class PropietarioVehiculoController {
	
	private:
		SqlConnection^ objConexion;		/*Atributo que permite hacer la conexion a la base de datos*/

	public:
		PropietarioVehiculoController();

		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarPropietarioSQL(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
		void eliminarPropietarioSQL(String^ dni);
		void actualizarPropietarioSQL(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas);
		List<PropietarioVehiculo^>^ buscarPropietarioxDniSQL(String^ dni);
		List<PropietarioVehiculo^>^ buscarPropietarioxApellidoSQL(String^ apellidoPaterno);
		List <PropietarioVehiculo^>^ buscarAllSQL();
		
	};

}

