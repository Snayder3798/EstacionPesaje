#include <iostream>
#include "VehiculoController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


VehiculoController::VehiculoController() {

}

List<Vehiculo^>^ VehiculoController::buscarVehiculo(String^ placa) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Vehiculo^>^ listaVehiculosEncontrados = gcnew List<Vehiculo^>();
	array<String^>^ lineas = File::ReadAllLines("vehiculo.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ linea in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = linea->Split(separadores->ToCharArray());

		int codigoVehiculo = Convert::ToInt32(datos[0]);
		int pesoSinCargaVehiculo = Convert::ToInt32(datos[1]);
		int pesoConCargaVehiculo = Convert::ToInt32(datos[2]);
		int pesoActualVehiculo = Convert::ToInt32(datos[3]);
		String^ placaVehiculo = datos[4];
		String^ tipoVehiculoVehiculo = datos[5];

		if (placaVehiculo->Contains(placa)) {
			Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo);
			listaVehiculosEncontrados->Add(objVehiculo);
		}
	}
	return listaVehiculosEncontrados;
}


List <Vehiculo^>^ VehiculoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Vehiculo^>^ listaVehiculosEncontrados = gcnew List<Vehiculo^>();
	array<String^>^ lineas = File::ReadAllLines("vehiculo.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String^ linea in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = linea->Split(separadores->ToCharArray());

		int codigoVehiculo = Convert::ToInt32(datos[0]);
		int pesoSinCargaVehiculo = Convert::ToInt32(datos[1]);
		int pesoConCargaVehiculo = Convert::ToInt32(datos[2]);
		int pesoActualVehiculo = Convert::ToInt32(datos[3]);
		String^ placaVehiculo = datos[4];
		String^ tipoVehiculoVehiculo = datos[5];

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo);
		listaVehiculosEncontrados->Add(objVehiculo);
		
	}
	return listaVehiculosEncontrados;
}


void VehiculoController::escribirArchivo(List <Vehiculo^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista-> Count; i++) {

		Vehiculo^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getPesoSinCarga() + ";" + objeto->getPesoConCarga() + ";" + objeto->getPesoActual() + ";" + objeto->getPlaca() + ";" + objeto->getTipoVehiculo() + ";";
	}

	File::WriteAllLines("vehiculo.txt", lineasArchivo);
}

void VehiculoController::eliminarVehiculoFisico(String^ placa) {
	List <Vehiculo^>^ listaVehiculos = buscarAll();
	for (int i = 0; i < listaVehiculos->Count; i++) {
		
		if (listaVehiculos[i]->getPlaca() == placa) {
			listaVehiculos->RemoveAt(i);
		}
	}
	escribirArchivo(listaVehiculos);
}


void VehiculoController::agregarVehiculo(Vehiculo^ objVehiculo) {
	List <Vehiculo^>^ listaVehiculos = buscarAll();
	listaVehiculos->Add(objVehiculo);
	escribirArchivo(listaVehiculos);
}


Vehiculo^ VehiculoController::buscarVehiculoxPlaca(String^ placa) {
	List <Vehiculo^>^ listaVehiculos = buscarAll();
	for (int i = 0; i < listaVehiculos->Count; i++) {
		if (listaVehiculos[i]->getPlaca() == placa) {
			return listaVehiculos[i];
		}
	}
}


void VehiculoController::actualizarVehiculo(Vehiculo^ objVehiculo) {
	List <Vehiculo^>^ listaVehiculos = buscarAll();
	for (int i = 0; listaVehiculos->Count; i++) {
		listaVehiculos[i]->setCodigo(objVehiculo->getCodigo());
		listaVehiculos[i]->setPesoSinCarga(objVehiculo->getPesoSinCarga());
		listaVehiculos[i]->setPesoConCarga(objVehiculo->getPesoConCarga());
		listaVehiculos[i]->setPesoActual(objVehiculo->getPesoActual());
		listaVehiculos[i]->setPlaca(objVehiculo->getPlaca());
		listaVehiculos[i]->setTipoVehiculo(objVehiculo->getTipoVehiculo());
		break;
	}
	escribirArchivo(listaVehiculos);
}