#include "Persona.h"
using namespace EstacionPesajeModel;

Persona::Persona() {

}

Persona::Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->apellidoPaterno = apellidoPaterno;
    this->apellidoMaterno = apellidoMaterno;
    this->dni = dni;
    this->multasAcumuladas = multasAcumuladas;
}


int Persona::getCodigo() {
    return this->codigo;
}
void Persona::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ Persona::getNombre() {
    return this->nombre;
}
void Persona::setNombre(String^ nombre) {
    this->nombre = nombre;
}

String^ Persona::getApellidoPaterno() {
    return this->apellidoPaterno;
}
void Persona::setApellidoPaterno(String^ apellidoPaterno) {
    this->apellidoPaterno = apellidoPaterno;
}

String^ Persona::getApellidoMaterno() {
    return this->apellidoMaterno;
}
void Persona::setApellidoMaterno(String^ apellidoMaterno) {
    this->apellidoMaterno = apellidoMaterno;
}

String^ Persona::getDni() {
    return this->dni;
}
void Persona::setDni(String^ dni) {
    this->dni = dni;
}

int Persona::getMultasAcumuladas() {
    return this->multasAcumuladas;
}
void Persona::setMultasAcumuladas(int multasAcumuladas) {
    this->multasAcumuladas = multasAcumuladas;
}