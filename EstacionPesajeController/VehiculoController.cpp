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
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

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