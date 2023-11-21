//#include <iostream>
#include "PersonaController.h"

using namespace EstacionPesajeController;
//using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PersonaController::PersonaController() {
	this->objConexion = gcnew SqlConnection();
}
//
//List<Persona^>^ PersonaController::buscarPersonaDNI(String^ dni) {
//
//	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
//	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
//	array<String^>^ lineas = File::ReadAllLines("Persona.txt");
//
//	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
//
//	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
//	for each (String ^ lineaCarrera in lineas) {
//
//		/*Voy a separar cada elemento del String por ; con el split*/
//		array<String^>^ datos = lineaCarrera -> Split(separadores->ToCharArray());
//
//		int codigoPersona = Convert::ToInt32(datos[0]);
//		String^ nombrePersona = datos[1];
//		String^ apellidoPaternoPersona = datos[2];
//		String^ apellidoMaternoPersona = datos[3];
//		String^ dniPersona = datos[4];
//
//
//		if (dniPersona->Contains(dni) ) {
//			Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
//			listaPersonasEncontrados->Add(objPersona);
//		}
//
//	}
//	return listaPersonasEncontrados;
//}
//
//List<Persona^>^ PersonaController::buscarPersonaApellido(String^ apellidoPaterno) {
//	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
//	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
//	array<String^>^ lineas = File::ReadAllLines("Persona.txt");
//	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
//	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
//	for each (String ^ lineaCarrera in lineas) {
//		/*Voy a separar cada elemento del String por ; con el split*/
//		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
//
//		int codigoPersona = Convert::ToInt32(datos[0]);
//		String^ nombrePersona = datos[1];
//		String^ apellidoPaternoPersona = datos[2];
//		String^ apellidoMaternoPersona = datos[3];
//		String^ dniPersona = datos[4];
//		if (apellidoPaternoPersona->Contains(apellidoPaterno)) {
//			Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
//			listaPersonasEncontrados->Add(objPersona);
//		}
//	}
//	return listaPersonasEncontrados;
//}
//
//
//List<Persona^>^ PersonaController::buscarAll() {
//
//	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
//	List<Persona^>^ listaPersonasEncontrados = gcnew List<Persona^>();
//	array<String^>^ lineas = File::ReadAllLines("Persona.txt");
//
//	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
//
//	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
//	for each (String ^ lineaCarrera in lineas) {
//
//		/*Voy a separar cada elemento del String por ; con el split*/
//		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
//
//		int codigoPersona = Convert::ToInt32(datos[0]);
//		String^ nombrePersona = datos[1];
//		String^ apellidoPaternoPersona = datos[2];
//		String^ apellidoMaternoPersona = datos[3];
//		String^ dniPersona = datos[4];
//
//		Persona^ objPersona = gcnew Persona(codigoPersona, nombrePersona, apellidoPaternoPersona, apellidoMaternoPersona, dniPersona);
//		listaPersonasEncontrados->Add(objPersona);
//	}
//	return listaPersonasEncontrados;
//}
//
//
//void PersonaController::escribirArchivo(List <Persona^>^ lista) {
//	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
//
//	for (int i = 0; i < lista->Count; i++) {
//
//		Persona^ objeto = lista[i];
//
//		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getNombre() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni();
//	}
//
//	File::WriteAllLines("Persona.txt", lineasArchivo);
//}
//
//
//void PersonaController::eliminarPersonaFisico(String^ dni) {
//	List <Persona^>^ listaPersonas = buscarAll();
//	for (int i = 0; i < listaPersonas->Count; i++) {
//
//		if (listaPersonas[i]->getDni() == dni) {
//			listaPersonas->RemoveAt(i);
//		}
//	}
//	escribirArchivo(listaPersonas);
//}
//
//
//void PersonaController::agregarPersona(Persona^ objPersona) {
//	List <Persona^>^ listaPersonas = buscarAll();
//	listaPersonas->Add(objPersona);
//	escribirArchivo(listaPersonas);
//}
//
//Persona^ PersonaController::buscarPersonaxDni(String^ dni) {
//	List <Persona^>^ listaPersonas = buscarAll();
//	for (int i = 0; i < listaPersonas->Count; i++) {
//		if (listaPersonas[i]->getDni() == dni) {
//			return listaPersonas[i];
//		}
//	}
//}
//
//
//void PersonaController::actualizarPersona(Persona^ objPersona) {
//	List <Persona^>^ listaPersonas = buscarAll();
//	for (int i = 0; i < listaPersonas->Count; i++) {
//		if (listaPersonas[i]->getCodigo() == objPersona->getCodigo()) {
//			/*Actualizaremos cada dato*/
//			listaPersonas[i]->setCodigo(objPersona->getCodigo());
//			listaPersonas[i]->setNombre(objPersona->getNombre());
//			listaPersonas[i]->setApellidoPaterno(objPersona->getApellidoPaterno());
//			listaPersonas[i]->setApellidoMaterno(objPersona->getApellidoMaterno());
//			listaPersonas[i]->setDni(objPersona->getDni());
//			break;
//		}
//	}
//	escribirArchivo(listaPersonas);
//}

/*Metodos propios del manejo de Base de Datos*/
void  PersonaController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  PersonaController::cerrarConexionBD() {
	this->objConexion->Close();
}

void PersonaController::registrarPersonaSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into Persona(nombre,apellidoPaterno,apellidoMaterno,dni,multasAcumuladas) values ('" + nombre + "','" + apellidoPaterno + "','" + apellidoMaterno + "','" + dni + "'," + multasAcumuladas + ")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void PersonaController::eliminarPersonaSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete Persona where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
void PersonaController::actualizarPersonaSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update Persona set nombre='" + nombre + "', apellidoPaterno='" + apellidoPaterno + "', apellidoMaterno='" + apellidoMaterno + "', dni='" + dni + "', multasAcumuladas=" + multasAcumuladas +" where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

Persona^ PersonaController::buscarPersonaxCodigoSQL(int codigo) {
	Persona^ objPersona;
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Persona where codigo=" + codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		objPersona = gcnew Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
	}
	cerrarConexionBD();
	return objPersona;
}

List <Persona^>^ PersonaController::buscarPersonaxApellidoPaternoSQL(String^ informacion) {
	List<Persona^>^ listaPersonas = gcnew List<Persona^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Persona where apellidoPaterno collate SQL_Latin1_General_CP1_CI_AS like '%" + informacion + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		Persona^ objPersona = gcnew Persona(codigo, nombres, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		listaPersonas->Add(objPersona);
	}
	cerrarConexionBD();
	return listaPersonas;
}

List <Persona^>^ PersonaController::buscarPersonaxDniSQL(String^ informacion) {
	List<Persona^>^ listaPersonas = gcnew List<Persona^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Persona where dni like '" + informacion + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombres = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		Persona^ objPersona = gcnew Persona(codigo, nombres, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		listaPersonas->Add(objPersona);
	}
	cerrarConexionBD();
	return listaPersonas;
}