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

		List<PropietarioVehiculo^>^ buscarPropietarioDNI(String^ dni);
		List<PropietarioVehiculo^>^ buscarPropietarioApellido(String^ apellido);

		void AgregarPropietarioVehiculo(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, int multaActual, int codigoVehiculo);
	};

}

