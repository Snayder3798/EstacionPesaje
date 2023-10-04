#include <iostream>
#include "PersonaController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PersonaController::PersonaController() {

}

List<Persona^>^ PersonaController::buscarPersonaDNI(String^ dni) {

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

List<Persona^>^ PersonaController::buscarPersonaApellido(String^ apellidoPaterno) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
	array<String^>^ lineas = File::ReadAllLines("Persona.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoPersona = Convert::ToInt32(datos[0]);
		String^ nombrePersona = datos[1];
		String^ apellidoPaternoPersona = datos[2];
		String^ apellidoMaternoPersona = datos[3];
		String^ dniPersona = datos[4];
		if (apellidoPaternoPersona->Contains(apellidoPaterno)) {
			Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
			listaPersonasEncontrados->Add(objPersona);
		}
	}
	return listaPersonasEncontrados;
}


List<Persona^>^ PersonaController::buscarAll() {

	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
	array<String^>^ lineas = File::ReadAllLines("Persona.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {

		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoPersona = Convert::ToInt32(datos[0]);
		String^ nombrePersona = datos[1];
		String^ apellidoPaternoPersona = datos[2];
		String^ apellidoMaternoPersona = datos[3];
		String^ dniPersona = datos[4];

		Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
		listaPersonasEncontrados->Add(objPersona);
	}
	return listaPersonasEncontrados;
}


void PersonaController::escribirArchivo(List <Persona^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista->Count; i++) {

		Persona^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getNombre() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni();
	}

	File::WriteAllLines("Persona.txt", lineasArchivo);
}


void PersonaController::eliminarPersonaFisico(String^ dni) {
	List <Persona^>^ listaPersonas = buscarAll();
	for (int i = 0; i < listaPersonas->Count; i++) {

		if (listaPersonas[i]->getDni() == dni) {
			listaPersonas->RemoveAt(i);
		}
	}
	escribirArchivo(listaPersonas);
}


void PersonaController::agregarPersona(Persona^ objPersona) {
	List <Persona^>^ listaPersonas = buscarAll();
	listaPersonas->Add(objPersona);
	escribirArchivo(listaPersonas);
}