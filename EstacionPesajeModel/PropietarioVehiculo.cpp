#include "PropietarioVehiculo.h"

using namespace EstacionPesajeModel;

PropietarioVehiculo::PropietarioVehiculo() :Persona() {

}
PropietarioVehiculo::PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, Usuario^ objUsuario) {
	this->multasAcumuladas = multasAcumuladas;
	this->objUsuario = objUsuario;
}

PropietarioVehiculo::PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni) {
	this->multasAcumuladas = multasAcumuladas;
}

int PropietarioVehiculo::getMultasAcumuladas() {
	return this->multasAcumuladas;
}
void PropietarioVehiculo::setMultasAcumuladas(int multasAcumuladas) {
	this->multasAcumuladas = multasAcumuladas;
}

Usuario^ PropietarioVehiculo::getUsuario() {
	return this->objUsuario;
}

void PropietarioVehiculo::setUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}

List<Vehiculo^>^ PropietarioVehiculo::getListaVehiculos() {
	return this->listaVehiculos;
}

void PropietarioVehiculo::setListaVehiculos(List<Vehiculo^>^ listaVehiculos) {
	this->listaVehiculos = listaVehiculos;
}
