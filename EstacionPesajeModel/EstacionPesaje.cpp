#include "EstacionPesaje.h"
using namespace EstacionPesajeModel;

EstacionPesaje::EstacionPesaje() {

}

EstacionPesaje::EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, int nroMultas) {
	this->codigo = codigo;
	this->ubicacion = ubicacion;
	this->latitud = latitud;
	this->longitud = longitud;
	this->nroMultas = nroMultas;
};


int EstacionPesaje::getCodigo() {
	return this->codigo;
}
void EstacionPesaje::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ EstacionPesaje::getUbicacion() {
	return this->ubicacion;
}
void EstacionPesaje::setUbicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}

double EstacionPesaje::getLatitud() {
	return this->latitud;
}
void EstacionPesaje::setLatitud(double latitud) {
	this->latitud = latitud;
}

double EstacionPesaje::getLongitud() {
	return this->longitud;
}
void EstacionPesaje::setLongitud(double longitud) {
	this->longitud = longitud;
}

int EstacionPesaje::getNroMultas() {
	return this->nroMultas;
}
void EstacionPesaje::setNroMultas(int nroMultas) {
	this->nroMultas = nroMultas;
}