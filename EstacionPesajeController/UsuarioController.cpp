#include <iostream>
#include "UsuarioController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();
}


/*Metodos propios del manejo de Base de Datos*/
void  UsuarioController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  UsuarioController::cerrarConexionBD() {
	this->objConexion->Close();
}

void UsuarioController::AgregarUsuarioSQL(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreUsuario, String^ contrasena, String^ cargo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into Usuario(nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo) values ('" + nombre + "', '" + apellidoPaterno + "', '" + apellidoMaterno + "', '"+ dni+"' , '"+ nombreUsuario +"' , '" + contrasena + "', '" + cargo+ "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void UsuarioController::eliminarUsuarioSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete Usuario where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void UsuarioController::actualizarUsuarioSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreUsuario, String^ contrasena, String^ cargo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update Usuario set nombre='" + nombre + "', apellidoPaterno='" + apellidoPaterno + "', apellidoMaterno='" + apellidoMaterno + "', dni='" + dni + "', nombreUsuario='" + nombreUsuario + "', contrasena='" + contrasena + "', cargo='" + cargo + "' where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<Usuario^>^ UsuarioController::buscarUsuarioxDniSQL(String^ dni) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Usuario where dni like '%" + dni + "%'";
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
		String^ nombreUsuario = safe_cast<String^>(objData[5]);
		String^ contrasena = safe_cast<String^>(objData[6]);
		String^ cargo = safe_cast<String^>(objData[7]);
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexionBD();
	return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarUsuarioxApellidoSQL(String^ apellidoPaterno) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Usuario where apellidoPaterno like '%" + apellidoPaterno + "%' ";
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
		String^ nombreUsuario = safe_cast<String^>(objData[5]);
		String^ contrasena = safe_cast<String^>(objData[6]);
		String^ cargo = safe_cast<String^>(objData[7]);
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexionBD();
	return listaUsuarios;
}

List <Usuario^>^ UsuarioController::buscarAllSQL() {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Usuario";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ nombreUsuario = safe_cast<String^>(objData[5]);
		String^ contrasena = safe_cast<String^>(objData[6]);
		String^ cargo = safe_cast<String^>(objData[7]);
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexionBD();
	return listaUsuarios;
}

Usuario^ UsuarioController::objbuscarUsuarioxCodigoSQL(int codigo) {
	Usuario^ objUsuario;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Usuario where codigo =" + codigo;
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
		String^ nombreUsuario = safe_cast<String^>(objData[5]);
		String^ contrasena = safe_cast<String^>(objData[6]);
		String^ cargo = safe_cast<String^>(objData[7]);
		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
	}
	cerrarConexionBD();
	return objUsuario;
}

Usuario^ UsuarioController::objbuscarUsuarioxNombreUsuarioSQL(String^ nombreUsuario) {
	Usuario^ objUsuario;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Usuario where nombreUsuario ='" + nombreUsuario + "'";
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
		String^ nombreUsuario = safe_cast<String^>(objData[5]);
		String^ contrasena = safe_cast<String^>(objData[6]);
		String^ cargo = safe_cast<String^>(objData[7]);
		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreUsuario, contrasena, cargo);
	}
	cerrarConexionBD();
	return objUsuario;
}