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
		int nroMultasEstacionPesaje = Convert::ToInt32(datos[4]);

		if (ubicacionEstacionPesaje->Contains(ubicacion)) {
			EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje, nroMultasEstacionPesaje);
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
		int nroMultasEstacionPesaje = Convert::ToInt32(datos[4]);
	
		EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje, nroMultasEstacionPesaje);
		listaEstacionPesajeEncontrados->Add(objEstacionPesaje);
		
	}
	return listaEstacionPesajeEncontrados;
}

void EstacionController::escribirArchivo(List <EstacionPesaje^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		EstacionPesaje^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getUbicacion() + ";" + objeto->getLatitud() + ";" + objeto->getLongitud() + ";" + objeto->getNroMultas();
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
			listaEstaciones[i]->setNroMultas(objEstacionPesaje->getNroMultas());
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

List <String^>^ EstacionController::getMultas(List <String^>^ listaUbicaciones) {
	List <String^>^ listaMultas = gcnew List <String^>();
	for (int i = 0; i < listaUbicaciones->Count; i++) {
		List <EstacionPesaje^>^ listaEstacion = buscarEstacionPesaje(listaUbicaciones[i]);
		int cantidad = 0;
		for (int i = 0; i < listaEstacion->Count; i++) {
			cantidad = cantidad + listaEstacion[i]->getNroMultas();
		}
		listaMultas->Add(Convert::ToString(cantidad));
	}
	return listaMultas;
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/*Metodos propios del manejo de Base de Datos*/
void  EstacionController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  EstacionController::cerrarConexionBD() {
	this->objConexion->Close();
}

void EstacionController::AgregarEstacionSQL(String^ ubicacion, double latitud, double longitud, int nroMultas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into EstacionPesaje(ubicacion, latitud, longitud, nroMultas) values ('" + ubicacion + "'," + latitud + "," + longitud + "," + nroMultas + ")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void EstacionController::eliminarEstacionSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete EstacionPesaje where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<EstacionPesaje^>^ EstacionController::buscarEstacionxUbicacionSQL(String^ ubicacion) {
	List<EstacionPesaje^>^ listaEstacion = gcnew List<EstacionPesaje^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from EstacionPesaje where ubicacion like '%" + ubicacion + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		double latitud = safe_cast<double>(objData[2]);
		double longitud = safe_cast<double>(objData[3]);
		int nroMultas = safe_cast<int>(objData[4]);
		EstacionPesaje^ objEstacion = gcnew EstacionPesaje(codigo, ubicacion, latitud, longitud, nroMultas);
		listaEstacion->Add(objEstacion);
	}
	cerrarConexionBD();
	return listaEstacion;
}

EstacionPesaje^ EstacionController::objbuscarEstacionxUbicacionSQL(String^ ubicacion) {
	EstacionPesaje^ objEstacion;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from EstacionPesaje where ubicacion like '%" + ubicacion + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		double latitud = safe_cast<double>(objData[2]);
		double longitud = safe_cast<double>(objData[3]);
		int nroMultas = safe_cast<int>(objData[4]);
		objEstacion = gcnew EstacionPesaje(codigo, ubicacion, latitud, longitud, nroMultas);
	}
	cerrarConexionBD();
	return objEstacion;
}

void EstacionController::actualizarEstacionSQL(String^ ubicacion, double latitud, double longitud, int nroMultas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update EstacionPesaje set ubicacion='" + ubicacion + "', latitud=" + latitud + ", longitud=" + longitud + ", nroMultas=" + nroMultas;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List <EstacionPesaje^>^ EstacionController::buscarAllSQL() {
	List<EstacionPesaje^>^ listaPropietarios = gcnew List<EstacionPesaje^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from EstacionPesaje";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ ubicacion = safe_cast<String^>(objData[1]);
		double latitud = safe_cast<double>(objData[2]);
		double longitud = safe_cast<double>(objData[3]);
		int nroMultas = safe_cast<int>(objData[4]);
		EstacionPesaje^ objEstacion = gcnew EstacionPesaje(codigo, ubicacion, latitud, longitud, nroMultas);
		listaPropietarios->Add(objEstacion);
	}
	cerrarConexionBD();
	return listaPropietarios;
}