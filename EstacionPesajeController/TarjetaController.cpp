#include <iostream>
#include "TarjetaController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


TarjetaController::TarjetaController() {
	this->objConexion = gcnew SqlConnection();
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
		String^ estadoTarjeta = datos[1];
		String^ numeroTarjetaTarjeta = datos[2];
		int codigoPropietario = Convert::ToInt32(datos[3]);

		if (numeroTarjetaTarjeta->Contains(numeroTarjeta)) {
			Tarjeta^ objTarjeta = gcnew Tarjeta(codigoTarjeta, estadoTarjeta, numeroTarjetaTarjeta, codigoPropietario);
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

		int codigo = Convert::ToInt32(datos[0]);
		String^ estadoTarjeta = datos[1];
		String^ numeroTarjeta = datos[2];
		int codigoPropietario = Convert::ToInt32(datos[3]);

		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo, estadoTarjeta, numeroTarjeta, codigoPropietario);
		listaTarjetasEncontrados->Add(objTarjeta);
	}
	return listaTarjetasEncontrados;
}

void TarjetaController::escribirArchivo(List <Tarjeta^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista->Count; i++) {

		Tarjeta^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getEstado() + ";" + objeto->getNumeroTarjeta()+ ";" + objeto->getCodigoPropietarioVehiculo();
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


Tarjeta^ TarjetaController::buscarTarjetaxNumero(String^ numeroTarjeta) {
	List <Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getNumeroTarjeta() == numeroTarjeta) {
			return listaTarjetas[i];
		}
	}

}


void TarjetaController::actualizarTarjeta(Tarjeta^ objTarjeta) {
	List <Tarjeta^>^ listaTarjetas = buscarAll();
	for (int i = 0; i < listaTarjetas->Count; i++) {
		if (listaTarjetas[i]->getCodigo() == objTarjeta->getCodigo()) {
			listaTarjetas[i]->setCodigo(objTarjeta->getCodigo());
			listaTarjetas[i]->setEstado(objTarjeta->getEstado());
			listaTarjetas[i]->setNumeroTarjeta(objTarjeta->getNumeroTarjeta());
			break;
		}
	}
}


/////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

/*Metodos propios del manejo de Base de Datos*/
void  TarjetaController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  TarjetaController::cerrarConexionBD() {
	this->objConexion->Close();
}

void TarjetaController::AgregarTarjetaSQL(String^ estado, String^ numeroTarjeta, int codigoPropietario) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into Tarjeta(estado, numeroTarjeta, codigoPropietarioVehiculo) values ('" + estado+ "', '"+numeroTarjeta+"', "+codigoPropietario+")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
void TarjetaController::eliminarTarjetaSQLxCodigo(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete Tarjeta where codigo="+codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
void TarjetaController::actualizarTarjetaSQL(Tarjeta^ objTarjeta) {
	int codigo = objTarjeta->getCodigo();
	String^ estado = objTarjeta->getEstado();
	String^ numeroTarjeta = objTarjeta->getNumeroTarjeta();
	int codigoPropietario = objTarjeta->getCodigoPropietarioVehiculo();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update Tarjeta set estado='" + estado + "', numeroTarjeta='" + numeroTarjeta + "', codigoPropietarioVehiculo=" + codigoPropietario + " where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}
Tarjeta^ TarjetaController::buscarTarjetaxCodigoSQL(int codigo) {
	Tarjeta^ objTarjeta;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Tarjeta where codigo=" + codigo ;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ estado = safe_cast<String^>(objData[1]);
		String^ numeroTarjeta = safe_cast<String^>(objData[2]);
		int codigoPropietario = safe_cast<int>(objData[3]);	

		objTarjeta = gcnew Tarjeta(codigo, estado, numeroTarjeta, codigoPropietario);
	}
	cerrarConexionBD();
	return objTarjeta;
}
Tarjeta^ TarjetaController::buscarTarjetaxNumeroSQL(String^ numeroTarjeta) {
	Tarjeta^ objTarjeta;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Tarjeta where numeroTarjeta='"+numeroTarjeta+"'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ estado = safe_cast<String^>(objData[1]);
		String^ numeroTarjeta = safe_cast<String^>(objData[2]);
		int codigoPropietario = safe_cast<int>(objData[3]);

		objTarjeta = gcnew Tarjeta(codigo, estado, numeroTarjeta, codigoPropietario);
	}
	cerrarConexionBD();
	return objTarjeta;
}

List <Tarjeta^>^ TarjetaController::buscarAllSQL() {
	List<Tarjeta^>^ listaTarjetas = gcnew List<Tarjeta^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Tarjeta";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ estado = safe_cast<String^>(objData[1]);
		String^ numeroTarjeta = safe_cast<String^>(objData[2]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[3]);
		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo,estado,numeroTarjeta,codigoPropietarioVehiculo);
		listaTarjetas->Add(objTarjeta);
	}
	cerrarConexionBD();
	return listaTarjetas;
}
List <Tarjeta^>^ TarjetaController::buscarListaxNumeroSQL(String^ numeroTarjeta) {
	List<Tarjeta^>^ listaTarjetas = gcnew List<Tarjeta^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Tarjeta where numeroTarjeta like '%"+numeroTarjeta+"%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ estado = safe_cast<String^>(objData[1]);
		String^ numeroTarjeta = safe_cast<String^>(objData[2]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[3]);


		Tarjeta^ objTarjeta = gcnew Tarjeta(codigo, estado, numeroTarjeta, codigoPropietarioVehiculo);
		listaTarjetas->Add(objTarjeta);
	}
	cerrarConexionBD();
	return listaTarjetas;
}
