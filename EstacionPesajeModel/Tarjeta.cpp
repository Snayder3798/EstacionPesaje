#include "Tarjeta.h"
using namespace EstacionPesajeModel;

Tarjeta::Tarjeta() {

}

Tarjeta::Tarjeta(int codigo, String^ estado, String^ numeroTarjeta) {
	this->codigo = codigo;
	this->estado = estado;
	this->numeroTarjeta = numeroTarjeta;
}

int Tarjeta::getCodigo() {
	return this->codigo;
}
void Tarjeta::setCodigo(int codigo) {
	this->codigo = codigo;
}


String^ Tarjeta::getEstado() {
	return this->estado;
}
void Tarjeta::setEstado(String^ estado) {
	this->estado = estado;
}


String^ Tarjeta::getNumeroTarjeta() {
	return this->numeroTarjeta;
}
void Tarjeta::setNumeroTarjeta(String^ numeroTarjeta) {
	this->numeroTarjeta = numeroTarjeta;
}