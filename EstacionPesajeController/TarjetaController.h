#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class TarjetaController {
	public:
		TarjetaController();
		List<Tarjeta^>^ buscarTarjeta(String^ numeroTarjeta);

		/*Metodos utiles*/
		List <Tarjeta^>^ buscarAll();
		void escribirArchivo(List <Tarjeta^>^ listaTarjetas);
		void eliminarTarjetaFisico(String^ numeroTarjeta);
		void agregarTarjeta(Tarjeta^ objTarjeta);
	};


}
