#include "Vehiculo.h"

using namespace EstacionPesajeModel;

Vehiculo::Vehiculo() {

}

Vehiculo::Vehiculo(int codigo, int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas) {
    this->codigo = codigo;
    this->pesoLimite = pesoLimite;
    this->placa = placa;
    this->tipoVehiculo = tipoVehiculo;
    this->cantMultas = cantMultas;
}

int Vehiculo::getCodigo() {
    return this->codigo;
}
void Vehiculo::setCodigo(int codigo) {
    this->codigo = codigo;
}

int Vehiculo::getPesoLimite() {
    return this->pesoLimite;
}
void Vehiculo::setPesoLimite(int pesoLimite) {
    this->pesoLimite = pesoLimite;
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

int Vehiculo::getCantMultas() {
    return this->cantMultas;
}
void Vehiculo::setCantMultas(int cantMultas) {
    this->cantMultas = cantMultas;
}

List<RegistroVehiculo^>^ Vehiculo::getListaRegistroVehiculos() {
    return this->listaRegistroVehiculos;
}
void Vehiculo::setListaRegistroVehiculos(List<RegistroVehiculo^>^ listaRegistroVehiculos) {
    this->listaRegistroVehiculos = listaRegistroVehiculos;
}
