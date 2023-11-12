#include <iostream>
#include "PropietarioVehiculoController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PropietarioVehiculoController::PropietarioVehiculoController() {
	this->objConexion = gcnew SqlConnection();
}


/*Metodos propios del manejo de Base de Datos*/
void  PropietarioVehiculoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  PropietarioVehiculoController::cerrarConexionBD() {
	this->objConexion->Close();
}


List<PropietarioVehiculo^>^ PropietarioVehiculoController::buscarPropietarioDNI(String^ dni) {

	List<PropietarioVehiculo^>^ listaPropietarios = gcnew List<PropietarioVehiculo^>();
	abrirConexionBD();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();

	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;

	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from PropietarioVehiculo where dni like '%"+dni+"%' ";

	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader ^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		int multaActual = safe_cast<int>(objData[6]);
		int codigoVehiculo = safe_cast<int>(objData[6]);
		PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas, multaActual, codigoVehiculo);
		listaPropietarios->Add(objPropietario);
	}
	cerrarConexionBD();
	return listaPropietarios;
}


List<PropietarioVehiculo^>^ PropietarioVehiculoController::buscarPropietarioApellido(String^ apellido) {
	List<PropietarioVehiculo^>^ listaPropietarios = gcnew List<PropietarioVehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from PropietarioVehiculo where dni like '%" + apellido + "%' ";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		int multaActual = safe_cast<int>(objData[6]);
		int codigoVehiculo = safe_cast<int>(objData[6]);
		PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas, multaActual, codigoVehiculo);
		listaPropietarios->Add(objPropietario);
	}
	cerrarConexionBD();
	return listaPropietarios;
}


void PropietarioVehiculoController::AgregarPropietarioVehiculo(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, int multaActual, int codigoVehiculo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into PropietarioVehiculo(nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas, multaActual) values ('"+nombre+"', '"+apellidoPaterno+"', '"+apellidoMaterno+"', '"+dni+"', "+multasAcumuladas+", "+multaActual+")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}