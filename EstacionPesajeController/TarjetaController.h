#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;
using namespace System::Data::SqlClient;

namespace EstacionPesajeController {

	public ref class TarjetaController {
	private:
		SqlConnection^ objConexion;

	public:
		TarjetaController();
		List<Tarjeta^>^ buscarTarjeta(String^ numeroTarjeta);

		/*Metodos utiles*/
		List <Tarjeta^>^ buscarAll();
		void escribirArchivo(List <Tarjeta^>^ listaTarjetas);
		void eliminarTarjetaFisico(String^ numeroTarjeta);
		void agregarTarjeta(Tarjeta^ objTarjeta);

		Tarjeta^ buscarTarjetaxNumero(String^ numeroTarjeta);
		void actualizarTarjeta(Tarjeta^ objTarjeta);

		/////////////////////////////////////////////////////
		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarTarjetaSQL(String^ estado, String^ numeroTarjeta, int codigoPropietario);
		void eliminarTarjetaSQLxCodigo(int codigo);
		void actualizarTarjetaSQL(Tarjeta^ objTarjeta);
		List <Tarjeta^>^ buscarAllSQL();
		List <Tarjeta^>^ buscarListaxNumeroSQL(String^ numeroTarjeta);
		Tarjeta^ buscarTarjetaxCodigoSQL(int codigo);
		Tarjeta^ buscarTarjetaxNumeroSQL(String^ numeroTarjeta);

		//Proximos a implementar
		void AgregarTarjetaSQL(String^ estado, String^ numeroTarjeta);


	};


}
