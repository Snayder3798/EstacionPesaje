#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

using namespace System::Data::SqlClient;

namespace EstacionPesajeController {
	public ref class RegistroVehiculoController {
	private:
		SqlConnection^ objConexion;		/*Atributo que permite hacer la conexion a la base de datos*/

	public:
		RegistroVehiculoController();

		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarRegistroSQL(int pesoRegistrado, int multaAplicada, String^ fechaHora, int codigoVehiculo);
		void eliminarRegistroSQL(int codigo);
		void actualizarRegistroSQL(int codigo, int pesoRegistrado, int multaAplicada, String^ fechaHora, int codigoVehiculo);
		List<RegistroVehiculo^>^ buscarRegistroxCodigoVehiculoSQL(int codigoVehiculo);
		RegistroVehiculo^ objbuscarRegistroxCodigoSQL(int codigoRegistro);
		List<RegistroVehiculo^>^ buscarAllSQL();
	};


}