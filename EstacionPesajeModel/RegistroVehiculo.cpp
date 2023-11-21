#include "RegistroVehiculo.h"
using namespace EstacionPesajeModel;

RegistroVehiculo::RegistroVehiculo() {

}
RegistroVehiculo::RegistroVehiculo(int codigo, int pesoRegistrado, bool multaAplicada) {
	this->codigo = codigo;
	this->pesoRegistrado = pesoRegistrado;
	this->multaAplicada = multaAplicada;
}

int RegistroVehiculo::getCodigo() {
	return this->codigo;
}
void RegistroVehiculo::setCodigo(int codigo) {
	this->codigo = codigo;
}

int RegistroVehiculo::getPesoRegistrado() {
	return this->pesoRegistrado;
}
void RegistroVehiculo::setPesoRegistrado(int pesoRegistrado) {
	this->pesoRegistrado = pesoRegistrado;
}

bool RegistroVehiculo::getMultaAplicada() {
	return this->multaAplicada;
}
void RegistroVehiculo::setMultaAplicada(bool multaAplicada) {
	this->multaAplicada = multaAplicada;
}