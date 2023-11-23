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
		/*Metodos utiles*/
		//List <Vehiculo^>^ buscarAll();
		//List <Vehiculo^>^ VehiculoController::buscarxTipoVehiculo(String^ TipoVehiculo);
		//List<Vehiculo^>^ buscarVehiculo(String^ placa);
		/*void escribirArchivo(List <Vehiculo^>^ listaVehiculos);
		void eliminarVehiculoFisico(String^ placa);
		void agregarVehiculo(Vehiculo^ objVehiculo);
		Vehiculo^ buscarVehiculoxPlaca(String^ placa);
		void actualizarVehiculo(Vehiculo^ objVehiculo);*/
		List <String^>^ getTiposVehiculosSQL();
		List <String^>^ getMultasSQL(List <String^>^ listaTipoVehiculos);

		/////////////////////////////////////////////////////
		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarVehiculoSQL(int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo);
		void eliminarVehiculoSQL(int codigo);
		List<Vehiculo^>^ buscarVehiculosxPlacaSQL(String^ placa);
		List<Vehiculo^>^ buscarVehiculosxTipoSQL(String^ tipoVehiculo);
		List<Vehiculo^>^ buscarVehiculosxCodigoPropietarioSQL(int codigoPropietario);
		List <Vehiculo^>^ buscarAllSQL();
		Vehiculo^ objbuscarVehiculoxPlacaSQL(String^ placa);
		Vehiculo^ objbuscarVehiculoxCodigoSQL(int codigo);
		void actualizarVehiculoSQL(int codigo,int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo);
	};

}