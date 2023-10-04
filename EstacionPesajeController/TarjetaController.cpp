#include <iostream>
#include "TarjetaController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


TarjetaController::TarjetaController() {

}

List<Tarjeta^>^ TarjetaController::buscarTarjeta(String^ numeroTarjeta) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Tarjeta^>^ listaTarjetasEncontrados = gcnew List<Tarjeta^>();
	array<String^>^ lineas = File::ReadAllLines("Tarjeta.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);
		bool estadoTarjeta = Convert::ToBoolean(datos[1]);
		String^ numeroTarjetaTarjeta = datos[2];

		if (numeroTarjetaTarjeta->Contains(numeroTarjeta)) {
			Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, estadoTarjeta, numeroTarjetaTarjeta);
			listaTarjetasEncontrados->Add(objTarjeta);
		}
	}
	return listaTarjetasEncontrados;
}


List<Tarjeta^>^ TarjetaController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Tarjeta^>^ listaTarjetasEncontrados = gcnew List<Tarjeta^>();
	array<String^>^ lineas = File::ReadAllLines("Tarjeta.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoTarjeta = Convert::ToInt32(datos[0]);
		bool estadoTarjeta = Convert::ToBoolean(datos[1]);
		String^ numeroTarjetaTarjeta = datos[2];

		Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, estadoTarjeta, numeroTarjetaTarjeta);
		listaTarjetasEncontrados->Add(objTarjeta);
	}
	return listaTarjetasEncontrados;
}

void TarjetaController::escribirArchivo(List <Tarjeta^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista->Count; i++) {

		Tarjeta^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getEstado() + ";" + objeto->getNumeroTarjeta();
	}

	File::WriteAllLines("Tarjeta.txt", lineasArchivo);
}

void TarjetaController::eliminarTarjetaFisico(String^ numeroTarjeta) {
	List <Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {

		if (listaTarjetas[i]->getNumeroTarjeta() == numeroTarjeta) {
			listaTarjetas->RemoveAt(i);
		}
	}
	escribirArchivo(listaTarjetas);
}


void TarjetaController::agregarTarjeta(Tarjeta^ objTarjeta) {
	List <Tarjeta^>^ listaTarjetas = buscarAll();
	listaTarjetas->Add(objTarjeta);
	escribirArchivo(listaTarjetas);
}