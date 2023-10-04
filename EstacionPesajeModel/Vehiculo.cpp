#include "Vehiculo.h"

using namespace EstacionPesajeModel;

Vehiculo::Vehiculo() {

}

Vehiculo::Vehiculo(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo) {
	this->codigo = codigo;
	this->pesoSinCarga = pesoSinCarga;
	this->pesoConCarga = pesoConCarga;
	this->pesoActual = pesoActual;
	this->placa = placa;
	this->tipoVehiculo = tipoVehiculo;
}


int Vehiculo::getCodigo() {
    return this->codigo;
}
void Vehiculo::setCodigo(int codigo) {
    this->codigo = codigo;
}

int Vehiculo::getPesoSinCarga() {
    return this->pesoSinCarga;
}
void Vehiculo::setPesoSinCarga(int pesoSinCarga) {
    this->pesoSinCarga = pesoSinCarga;
}

int Vehiculo::getPesoConCarga() {
    return this->pesoConCarga;
}
void Vehiculo::setPesoConCarga(int pesoConCarga) {
    this->pesoConCarga = pesoConCarga;
}

int Vehiculo::getPesoActual() {
    return this->pesoActual;
}
void Vehiculo::setPesoActual(int pesoActual) {
    this->pesoActual = pesoActual;
}

String^ Vehiculo::getPlaca() {
    return this->placa;
}
void Vehiculo::setPlaca(String^ placa) {
    this->placa = placa;
}

String^ Vehiculo::getTipoVehiculo() {
    return this->tipoVehiculo;
}
void Vehiculo::setTipoVehiculo(String^ tipoVehiculo) {
    this->tipoVehiculo = tipoVehiculo;
}



