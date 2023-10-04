#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class VehiculoController {
	public:
		VehiculoController();
		List<Vehiculo^>^ buscarVehiculo(String^ placa);
		
		/*Metodos utiles*/
		List <Vehiculo^>^ buscarAll();
		void escribirArchivo(List <Vehiculo^>^ listaVehiculos);
		void eliminarVehiculoFisico(String^ placa);
		void agregarVehiculo(Vehiculo^ objVehiculo);

		Vehiculo^ buscarVehiculoxPlaca(String^ placa);
		void actualizarVehiculo(Vehiculo^ objVehiculo);
	};


}
