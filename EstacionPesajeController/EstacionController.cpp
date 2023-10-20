#include <iostream>
#include "EstacionController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


EstacionController::EstacionController() {

}

List<EstacionPesaje^>^ EstacionController::buscarEstacionPesaje(String^ ubicacion) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<EstacionPesaje^>^ listaEstacionPesajeEncontrados = gcnew List<EstacionPesaje^>();
	array<String^>^ lineas = File::ReadAllLines("EstacionPesaje.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoEstacionPesaje = Convert::ToInt32(datos[0]);
		String^ ubicacionEstacionPesaje = datos[1];
		double latitudEstacionPesaje = Convert::ToDouble(datos[2]);
		double longitudEstacionPesaje = Convert::ToDouble(datos[3]);

		if (ubicacionEstacionPesaje->Contains(ubicacion)) {
			EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje);
			listaEstacionPesajeEncontrados->Add(objEstacionPesaje);
		}
	}
	return listaEstacionPesajeEncontrados;
}


List<EstacionPesaje^>^ EstacionController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<EstacionPesaje^>^ listaEstacionPesajeEncontrados = gcnew List<EstacionPesaje^>();
	array<String^>^ lineas = File::ReadAllLines("EstacionPesaje.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoEstacionPesaje = Convert::ToInt32(datos[0]);
		String^ ubicacionEstacionPesaje = datos[1];
		double latitudEstacionPesaje = Convert::ToDouble(datos[2]);
		double longitudEstacionPesaje = Convert::ToDouble(datos[3]);

	
		EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje);
		listaEstacionPesajeEncontrados->Add(objEstacionPesaje);
		
	}
	return listaEstacionPesajeEncontrados;
}


void EstacionController::escribirArchivo(List <EstacionPesaje^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista->Count; i++) {

		EstacionPesaje^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getUbicacion() + ";" + objeto->getLatitud() + ";" + objeto->getLongitud();
	}

	File::WriteAllLines("EstacionPesaje.txt", lineasArchivo);
}

void EstacionController::eliminarEstacionFisico(String^ ubicacion) {
	List <EstacionPesaje^>^ listaEstaciones = buscarAll();
	for (int i = 0; i < listaEstaciones->Count; i++) {

		if (listaEstaciones[i]->getUbicacion() == ubicacion) {
			listaEstaciones->RemoveAt(i);
		}
	}
	escribirArchivo(listaEstaciones);
}

void EstacionController::agregarEstacion(EstacionPesaje^ objEstacionPesaje) {
	List <EstacionPesaje^>^ listaEstaciones = buscarAll();
	listaEstaciones->Add(objEstacionPesaje);
	escribirArchivo(listaEstaciones);
}

EstacionPesaje^ EstacionController::buscarEstacionxUbicacion(String^ ubicacion) {
	List <EstacionPesaje^>^ listaEstaciones = buscarAll();
	for (int i = 0; i < listaEstaciones->Count; i++) {
		if (listaEstaciones[i]->getUbicacion() == ubicacion) {
			return listaEstaciones[i];
		}
	}
}

void EstacionController::actualizarEstacion(EstacionPesaje^ objEstacionPesaje) {
	List <EstacionPesaje^>^ listaEstaciones = buscarAll();
	for (int i = 0; i < listaEstaciones->Count; i++) {
		if (listaEstaciones[i]->getCodigo() == objEstacionPesaje->getCodigo()) {
			/*Actualizaremos cada dato*/
			listaEstaciones[i]->setCodigo(objEstacionPesaje->getCodigo());
			listaEstaciones[i]->setUbicacion(objEstacionPesaje->getUbicacion());
			listaEstaciones[i]->setLatitud(objEstacionPesaje->getLatitud());
			listaEstaciones[i]->setLongitud(objEstacionPesaje->getLongitud());
			break;
		}
	}
	escribirArchivo(listaEstaciones);
}


List <String^>^ EstacionController::obtenerUbicaciones() {
	List <EstacionPesaje^>^ listaEstaciones = buscarAll();
	List<String^>^ listaUbicaciones = gcnew List<String^>();
	for (int i = 0; i < listaEstaciones->Count; i++) {
		/*Aqui se busca cada Ubicacion si es que ya se encuentra en la lista de ubicaciones*/
		String^ ubicacion = listaEstaciones[i]->getUbicacion();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaUbicaciones->Count; j++) {
			if (listaUbicaciones[j]->Contains(ubicacion)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaUbicaciones->Add(ubicacion);
		}
	}
	return listaUbicaciones;
}