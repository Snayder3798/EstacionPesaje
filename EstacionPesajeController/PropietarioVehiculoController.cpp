#include <iostream>
#include "PropietarioVehiculoController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


PropietarioVehiculoController::UsuarioController() {
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

void PropietarioVehiculoController::AgregarPropietarioSQL(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into PropietarioVehiculo(nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas) values ('" + nombre + "', '" + apellidoPaterno + "', '" + apellidoMaterno + "', '" + dni + "', " + multasAcumuladas +")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void PropietarioVehiculoController::eliminarPropietarioSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete PropietarioVehiculo where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void PropietarioVehiculoController::actualizarPropietarioSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update PropietarioVehiculo set nombre='" + nombre + "', apellidoPaterno='" + apellidoPaterno + "', apellidoMaterno='" + apellidoMaterno + "', dni='" + dni + "', multasAcumuladas=" + multasAcumuladas + "where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<PropietarioVehiculo^>^ PropietarioVehiculoController::buscarPropietarioxDniSQL(String^ dni) {
	List<PropietarioVehiculo^>^ listaPropietarios = gcnew List<PropietarioVehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from PropietarioVehiculo where dni like '%"+dni+"%'";
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
		PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		listaPropietarios->Add(objPropietario);
	}
	cerrarConexionBD();
	return listaPropietarios;
}

List<PropietarioVehiculo^>^ PropietarioVehiculoController::buscarPropietarioxApellidoSQL(String^ apellidoPaterno) {
	List<PropietarioVehiculo^>^ listaPropietarios = gcnew List<PropietarioVehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from PropietarioVehiculo where apellidoPaterno like '%" + apellidoPaterno + "%' ";
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
		PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		listaPropietarios->Add(objPropietario);
	}
	cerrarConexionBD();
	return listaPropietarios;
}


List <PropietarioVehiculo^>^ PropietarioVehiculoController::buscarAllSQL() {
	List<PropietarioVehiculo^>^ listaPropietarios = gcnew List<PropietarioVehiculo^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from PropietarioVehiculo";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		int multasAcumuladas = safe_cast<int>(objData[5]);
		PropietarioVehiculo^ objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
		listaPropietarios->Add(objPropietario);
	}
	cerrarConexionBD();
	return listaPropietarios;
}

PropietarioVehiculo^ PropietarioVehiculoController::objbuscarPropietarioxCodigoSQL(int codigo) {
	PropietarioVehiculo^ objPropietario;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from PropietarioVehiculo where codigo =" + codigo;
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
		objPropietario = gcnew PropietarioVehiculo(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas);
	}
	cerrarConexionBD();
	return objPropietario;
}