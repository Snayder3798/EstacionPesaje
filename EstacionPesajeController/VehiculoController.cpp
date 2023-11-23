#include <iostream>
#include "VehiculoController.h"

using namespace EstacionPesajeController;
using namespace System::Collections::Generic;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


VehiculoController::VehiculoController() {
	this->objConexion = gcnew SqlConnection();
}

/*List<Vehiculo^>^ VehiculoController::buscarVehiculo(String^ placa) {
	List<Vehiculo^>^ listaVehiculosEncontrados = gcnew List<Vehiculo^>();
	array<String^>^ lineas = File::ReadAllLines("vehiculo.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());

		int codigoVehiculo = Convert::ToInt32(datos[0]);
		int pesoSinCargaVehiculo = Convert::ToInt32(datos[1]);
		int pesoConCargaVehiculo = Convert::ToInt32(datos[2]);
		int pesoActualVehiculo = Convert::ToInt32(datos[3]);
		String^ placaVehiculo = datos[4];
		String^ tipoVehiculoVehiculo = datos[5];
		int cantMultas = Convert::ToInt32(datos[6]);
		int codigoPropietarioVehiculo = Convert::ToInt32(datos[7]);

		if (placaVehiculo->Contains(placa)) {
			Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas,codigoPropietarioVehiculo);
			listaVehiculosEncontrados->Add(objVehiculo);
		}
	}
	return listaVehiculosEncontrados;
}

List <Vehiculo^>^ VehiculoController::buscarxTipoVehiculo(String^ TipoVehiculo) {
	List<Vehiculo^>^ listaVehiculosEncontrados = gcnew List<Vehiculo^>();
	array<String^>^ lineas = File::ReadAllLines("vehiculo.txt");
	String^ separadores = ";"; 
	for each (String^ linea in lineas) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		int codigoVehiculo = Convert::ToInt32(datos[0]);
		int pesoSinCargaVehiculo = Convert::ToInt32(datos[1]);
		int pesoConCargaVehiculo = Convert::ToInt32(datos[2]);
		int pesoActualVehiculo = Convert::ToInt32(datos[3]);
		String^ placaVehiculo = datos[4];
		String^ tipoVehiculoVehiculo = datos[5];
		int cantMultas = Convert::ToInt32(datos[6]);
		int codigoPropietarioVehiculo = Convert::ToInt32(datos[7]);
		if (tipoVehiculoVehiculo == TipoVehiculo) {
			Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas,codigoPropietarioVehiculo);
			listaVehiculosEncontrados->Add(objVehiculo);
		}		
	}
	return listaVehiculosEncontrados;
}

List <Vehiculo^>^ VehiculoController::buscarAll() {
	List<Vehiculo^>^ listaVehiculosEncontrados = gcnew List<Vehiculo^>();
	array<String^>^ lineas = File::ReadAllLines("vehiculo.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());

		int codigoVehiculo = Convert::ToInt32(datos[0]);
		int pesoSinCargaVehiculo = Convert::ToInt32(datos[1]);
		int pesoConCargaVehiculo = Convert::ToInt32(datos[2]);
		int pesoActualVehiculo = Convert::ToInt32(datos[3]);
		String^ placaVehiculo = datos[4];
		String^ tipoVehiculoVehiculo = datos[5];
		int cantMultas = Convert::ToInt32(datos[6]);
		int codigoPropietarioVehiculo = Convert::ToInt32(datos[7]);

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigoVehiculo, pesoSinCargaVehiculo, pesoConCargaVehiculo, pesoActualVehiculo, placaVehiculo, tipoVehiculoVehiculo, cantMultas,codigoPropietarioVehiculo);
		listaVehiculosEncontrados->Add(objVehiculo);
	}
	return listaVehiculosEncontrados;
 }

void VehiculoController::escribirArchivo(List <Vehiculo^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

	for (int i = 0; i < lista-> Count; i++) {

		Vehiculo^ objeto = lista[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getPesoSinCarga() + ";" + objeto->getPesoConCarga() + ";" + objeto->getPesoActual() + ";" + objeto->getPlaca() + ";" + objeto->getTipoVehiculo() + ";" + objeto->getCantMultas() + ";"+ objeto->getcodigoPropietarioVehiculo() + ";";
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
		if (listaVehiculos[i]->getCodigo() == objVehiculo->getCodigo()) {
			listaVehiculos[i]->setCodigo(objVehiculo->getCodigo());
			listaVehiculos[i]->setPesoSinCarga(objVehiculo->getPesoSinCarga());
			listaVehiculos[i]->setPesoConCarga(objVehiculo->getPesoConCarga());
			listaVehiculos[i]->setPesoActual(objVehiculo->getPesoActual());
			listaVehiculos[i]->setPlaca(objVehiculo->getPlaca());
			listaVehiculos[i]->setTipoVehiculo(objVehiculo->getTipoVehiculo());
			listaVehiculos[i]->setCantMultas(objVehiculo->getCantMultas());
			listaVehiculos[i]->setcodigoPropietarioVehiculo(objVehiculo->getcodigoPropietarioVehiculo());
			break;
		}
	}
	escribirArchivo(listaVehiculos);
}*/
List <String^>^ VehiculoController::getTiposVehiculosSQL() {
	List <Vehiculo^>^ listaVehiculos = buscarAllSQL();
	List <String^>^ listaTipoVehiculos = gcnew List <String^>();
	for (int i = 0; i < listaVehiculos->Count; i++) {
		if (!(listaTipoVehiculos->Contains(listaVehiculos[i]->getTipoVehiculo()))) {
			listaTipoVehiculos->Add(listaVehiculos[i]->getTipoVehiculo());
		}
	}
	return listaTipoVehiculos;
}
List <String^>^ VehiculoController::getMultasSQL(List <String^>^ listaTipoVehiculos) {
	
	List <String^>^ listaMultas = gcnew List <String^>();
	for (int i = 0; i < listaTipoVehiculos->Count; i++) {
		List <Vehiculo^>^ listaVehiculos = buscarVehiculosxTipoSQL(listaTipoVehiculos[i]);
		int cantidad = 0;
		for (int i = 0; i < listaVehiculos->Count; i++) {
			cantidad = cantidad + listaVehiculos[i]->getCantMultas();
		}
		listaMultas->Add(Convert::ToString(cantidad));
	}
	return listaMultas;
}

/////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

/*Metodos propios del manejo de Base de Datos*/
void  VehiculoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  VehiculoController::cerrarConexionBD() {
	this->objConexion->Close();
}


void VehiculoController::AgregarVehiculoSQL(int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into Vehiculo(pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo) values (" + pesoLimite + ",'" + placa + "','" + tipoVehiculo + "','" + cantMultas + "',"+ codigoPropietarioVehiculo+")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void VehiculoController::eliminarVehiculoSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete Vehiculo where codigo = '" + codigo +"'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List <Vehiculo^>^ VehiculoController::buscarVehiculosxPlacaSQL(String^ placa) {
	List<Vehiculo^>^ listaVehiculo = gcnew List<Vehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Vehiculo where placa like '%" + placa + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
		listaVehiculo->Add(objVehiculo);
	}
	cerrarConexionBD();
	return listaVehiculo;
}


List <Vehiculo^>^ VehiculoController::buscarVehiculosxTipoSQL(String^ tipoVehiculo) {
	List<Vehiculo^>^ listaVehiculo = gcnew List<Vehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Vehiculo where tipoVehiculo= '" + tipoVehiculo+"'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
		listaVehiculo->Add(objVehiculo);
	}
	cerrarConexionBD();
	return listaVehiculo;
}
List<Vehiculo^>^ VehiculoController::buscarVehiculosxCodigoPropietarioSQL(int codigoPropietario) {
	List<Vehiculo^>^ listaVehiculo = gcnew List<Vehiculo^>();
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Vehiculo where codigoPropietarioVehiculo= '" + codigoPropietario + "'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
		listaVehiculo->Add(objVehiculo);
	}
	cerrarConexionBD();
	return listaVehiculo;
}

Vehiculo^ VehiculoController::objbuscarVehiculoxPlacaSQL(String^ placa) {
	Vehiculo^ objVehiculo;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Vehiculo where placa like '%" + placa + "%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
	}
	cerrarConexionBD();
	return objVehiculo;
}

Vehiculo^ VehiculoController::objbuscarVehiculoxCodigoSQL(int codigo) {
	Vehiculo^ objVehiculo;
	abrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Vehiculo where codigo=" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
	}
	cerrarConexionBD();
	return objVehiculo;
}

void VehiculoController::actualizarVehiculoSQL(int codigo, int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update Vehiculo set pesoLimite=" + pesoLimite + ", placa='" + placa + "', tipoVehiculo='" + tipoVehiculo + "', cantMultas=" + cantMultas+", codigoPropietarioVehiculo="+ codigoPropietarioVehiculo+" where codigo="+codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List <Vehiculo^>^ VehiculoController::buscarAllSQL() {
	List<Vehiculo^>^ listaVehiculo = gcnew List<Vehiculo^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from Vehiculo";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoLimite = safe_cast<int>(objData[1]);
		String^ placa = safe_cast<String^>(objData[2]);
		String^ tipoVehiculo = safe_cast<String^>(objData[3]);
		int cantMultas = safe_cast<int>(objData[4]);
		int codigoPropietarioVehiculo = safe_cast<int>(objData[5]);

		Vehiculo^ objVehiculo = gcnew Vehiculo(codigo, pesoLimite, placa, tipoVehiculo, cantMultas, codigoPropietarioVehiculo);
		listaVehiculo->Add(objVehiculo);
	}
	cerrarConexionBD();
	return listaVehiculo;
}
void VehiculoController::actualizarCantMultasVehiculoxCodigoSQL(int codigo, int cantMultas) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update Vehiculo set cantMultas=" + cantMultas + " where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}