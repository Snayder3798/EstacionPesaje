#include "EstacionPesaje.h"

using namespace EstacionPesajeModel;

EstacionPesaje::EstacionPesaje() {

}

EstacionPesaje::EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, int nroMultas, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, Tarjeta^ objTarjeta) {
	this->codigo = codigo;
	this->ubicacion = ubicacion;
	this->latitud = latitud;
	this->longitud = longitud;
	this->nroMultas = nroMultas;
	this->listaPantallaLCD = listaPantallaLCD;
	this->listaVascula = listaVascula;
	this->listaSensorBarras = listaSensorBarras;
	this->listaBarreraVehicular = listaBarreraVehicular;
	this->ObjUsuario = ObjUsuario;
	this->objPropietarioVehiculo = objPropietarioVehiculo;
	this->objTarjeta = objTarjeta;
}; 

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

Usuario^ EstacionPesaje::getUsuario() {
	return this->ObjUsuario;
}
void EstacionPesaje::setUsuario(Usuario^ objUsuario) {
	this->ObjUsuario = ObjUsuario;
}

PropietarioVehiculo^ EstacionPesaje::getPropietarioVehiculo() {
	return this->objPropietarioVehiculo;
}
void EstacionPesaje::setPropietarioVehiculo(PropietarioVehiculo^ objPropietarioVehiculo) {
	this->objPropietarioVehiculo = objPropietarioVehiculo;
}

Tarjeta^ EstacionPesaje::getTarjeta() {
	return this->objTarjeta;
}
void EstacionPesaje::setTarjeta(Tarjeta^ objTarjeta) {
	this->objTarjeta = objTarjeta;
}