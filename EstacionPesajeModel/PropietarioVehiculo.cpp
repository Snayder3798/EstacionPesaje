#include "PropietarioVehiculo.h"

using namespace EstacionPesajeModel;

PropietarioVehiculo::PropietarioVehiculo() :Persona() {

}

PropietarioVehiculo::PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, int multaActual, Vehiculo^ objVehiculo) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni) {
	this->multasAcumuladas = multasAcumuladas;
	this->multaActual = multaActual;
	this->objVehiculo = objVehiculo;
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

int PropietarioVehiculo::getMultaActual() {
	return this->multaActual;
}
void PropietarioVehiculo::setMultaActual(int multaActual) {
	this->multaActual = multaActual;
}