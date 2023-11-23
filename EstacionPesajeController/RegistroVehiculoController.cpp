#include "RegistroVehiculoController.h"

using namespace EstacionPesajeController;

RegistroVehiculoController::RegistroVehiculoController() {
	this->objConexion = gcnew SqlConnection();
}

/*Metodos propios del manejo de Base de Datos*/
void  RegistroVehiculoController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213798;User Id=a20213798;Password=HHnALnyd";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void  RegistroVehiculoController::cerrarConexionBD() {
	this->objConexion->Close();
}

void RegistroVehiculoController::AgregarRegistroSQL(int pesoRegistrado, int multaAplicada, String^ fechaHora, int codigoVehiculo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into RegistroVehiculo(pesoRegistrado, multaAplicada, fechaHora, codigoVehiculo) values (" + pesoRegistrado + ", " + multaAplicada + ", '" + fechaHora + "', " + codigoVehiculo +")";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void RegistroVehiculoController::eliminarRegistroSQL(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete RegistroVehiculo where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void RegistroVehiculoController::actualizarRegistroSQL(int codigo, int pesoRegistrado, int multaAplicada, String^ fechaHora, int codigoVehiculo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update RegistroVehiculo set pesoRegistrado=" + pesoRegistrado + ", multaAplicada=" + multaAplicada + ", fechaHora='" + fechaHora + "', codigoVehiculo=" + codigoVehiculo + " where codigo =" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

List<RegistroVehiculo^>^ RegistroVehiculoController::buscarRegistroxCodigoVehiculoSQL(int codigoVehiculo) {
	List<RegistroVehiculo^>^ listaRegistro = gcnew List<RegistroVehiculo^>();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from RegistroVehiculo where codigoVehiculo=" + codigoVehiculo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoRegistrado = safe_cast<int>(objData[1]);
		int multaAplicada = safe_cast<int>(objData[2]);
		String^ fechaHora = safe_cast<String^>(objData[3]);
		int codigoVehiculo = safe_cast<int>(objData[4]);

		RegistroVehiculo^ objRegistroVehiculo = gcnew RegistroVehiculo(codigo, pesoRegistrado, multaAplicada, fechaHora, codigoVehiculo);
		listaRegistro->Add(objRegistroVehiculo);
	}
	cerrarConexionBD();
	return listaRegistro;
}

RegistroVehiculo^ RegistroVehiculoController::objbuscarRegistroxCodigoSQL(int codigoRegistro) {
	RegistroVehiculo^ objRegistroVehiculo;
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select * from RegistroVehiculo where codigo=" + codigoRegistro;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int pesoRegistrado = safe_cast<int>(objData[1]);
		int multaAplicada = safe_cast<int>(objData[2]);
		String^ fechaHora = safe_cast<String^>(objData[3]);
		int codigoVehiculo = safe_cast<int>(objData[4]);

		objRegistroVehiculo = gcnew RegistroVehiculo(codigo, pesoRegistrado, multaAplicada, fechaHora, codigoVehiculo);
	}
	cerrarConexionBD();
	return objRegistroVehiculo;
}
void ActualizarMultasAcumuladas() {

}