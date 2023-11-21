#include "RegistroVehiculo.h"
using namespace EstacionPesajeModel;

RegistroVehiculo::RegistroVehiculo() {

}
RegistroVehiculo::RegistroVehiculo(int codigo, int pesoRegistrado, bool multaAplicada) {
	this->codigo = codigo;
	this->pesoRegistrado = pesoRegistrado;
	this->multaAplicada = multaAplicada;
}