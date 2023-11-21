#include "TipoVehiculo.h"

using namespace EstacionPesajeModel;

TipoVehiculo::TipoVehiculo() {

}

TipoVehiculo::TipoVehiculo(int pesoSinCarga, int pesoConCarga, int pesoActual) {
	this->pesoSinCarga = pesoSinCarga;
	this->pesoConCarga = pesoConCarga;
	this->pesoActual = pesoActual;
}