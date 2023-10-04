#include <iostream>
#include "PersonaController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PersonaController::PersonaController() {

}

List<Persona^>^ PersonaController::buscarPersona(String^ dni) {

	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
	array<String^>^ lineas = File::ReadAllLines("Persona.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {

		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera -> Split(separadores->ToCharArray());

		int codigoPersona = Convert::ToInt32(datos[0]);
		String^ nombrePersona = datos[1];
		String^ apellidoPaternoPersona = datos[2];
		String^ apellidoMaternoPersona = datos[3];
		String^ dniPersona = datos[4];


		if (dniPersona->Contains(dni) ) {
			Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
			listaPersonasEncontrados->Add(objPersona);
		}

	}
	return listaPersonasEncontrados;
}