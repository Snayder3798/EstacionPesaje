#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class EstacionController {
	public:
		EstacionController();
		List<EstacionPesaje^>^ buscarEstacionPesaje(String^ ubicacion);

		/*Metodos utiles*/
		List <EstacionPesaje^>^ buscarAll();
		void escribirArchivo(List <EstacionPesaje^>^ listaEstaciones);
		void eliminarEstacionFisico(String^ ubicacion);
		void agregarEstacion(EstacionPesaje^ objEstacionPesaje);

		EstacionPesaje^ buscarEstacionxUbicacion(String^ ubicacion);
		void actualizarEstacion(EstacionPesaje^ objEstacionPesaje);

		/*Obtener lista de Ubicaciones para ponerlos en el filtro de Ubicaciones*/
		List <String^>^ obtenerUbicaciones();
		List <String^>^ getMultas(List <String^>^ listaUbicaciones);
		
		//FUNCIONES PROXIMAS A IMPLEMENTAR
		void registrarEstacionPesaje(String^ ubicacionEstacionPesaje, double latitudEstacionPesaje, double longitudEstacionPesaje, int nroMultas);
		void actualizarEstacion(int codigoEstacionPesaje, String^ ubicacion, String^ latitud, String^ longitud, int nroMultas)
	};

}