#include "RegistroVehiculo.h"
using namespace EstacionPesajeModel;

RegistroVehiculo::RegistroVehiculo() {

}
RegistroVehiculo::RegistroVehiculo(int codigo, int pesoRegistrado, int multaAplicada,String^ fechaHora) {
	this->codigo = codigo;
	this->pesoRegistrado = pesoRegistrado;
	this->multaAplicada = multaAplicada;
	this->fechaHora = fechaHora;
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

int RegistroVehiculo::getMultaAplicada() {
	return this->multaAplicada;
}
void RegistroVehiculo::setMultaAplicada(int multaAplicada) {
	this->multaAplicada = multaAplicada;
}

String^ RegistroVehiculo::getFechaHora() {
	return this->fechaHora;
}
void RegistroVehiculo::setFechaHora(String^ fechaHora) {
	this->fechaHora = fechaHora;
}