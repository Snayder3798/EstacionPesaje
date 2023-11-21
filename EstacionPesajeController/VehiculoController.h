#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;


using namespace System::Data::SqlClient;


namespace EstacionPesajeController {

	public ref class VehiculoController {

	private:
		SqlConnection^ objConexion;		/*Atributo que permite hacer la conexion a la base de datos*/


	public:
		VehiculoController();
		List<Vehiculo^>^ buscarVehiculo(String^ placa);

		/*Metodos utiles*/
		List <Vehiculo^>^ buscarAll();
		List <Vehiculo^>^ VehiculoController::buscarxTipoVehiculo(String^ TipoVehiculo);
		void escribirArchivo(List <Vehiculo^>^ listaVehiculos);
		void eliminarVehiculoFisico(String^ placa);
		void agregarVehiculo(Vehiculo^ objVehiculo);

		Vehiculo^ buscarVehiculoxPlaca(String^ placa);
		void actualizarVehiculo(Vehiculo^ objVehiculo);
		List <String^>^ getTiposVehiculos();
		List <String^>^ getMultas(List <String^>^ listaTipoVehiculos);

		/////////////////////////////////////////////////////
		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarVehiculoSQL(int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo);
		void eliminarVehiculoSQL(String^ placa);
		List<Vehiculo^>^ buscarVehiculosxPlacaSQL(String^ placa);
		List<Vehiculo^>^ buscarVehiculosxCodigoSQL(int codigo);
		List <Vehiculo^>^ buscarAllSQL();
		Vehiculo^ objbuscarVehiculoxPlacaSQL(String^ placa);
		Vehiculo^ objbuscarVehiculoxCodigoSQL(int codigo);
		void actualizarVehiculoSQL(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietario);
	};

}