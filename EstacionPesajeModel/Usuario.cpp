#include "Usuario.h"

using namespace EstacionPesajeModel;

Usuario::Usuario() :Persona() {

}

Usuario::Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int getMultasAcumuladas, String^ nombreUsuario, String^ contrasena, String^ cargo) :Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas) {
    this->nombreUsuario = nombreUsuario;
    this->contrasena = contrasena;
    this->cargo = cargo;
}

String^ Usuario::getNombreUsuario() {
    return this->nombreUsuario;
}
void Usuario::setNombreUsuario(String^ nombreUsuario) {
    this->nombreUsuario = nombreUsuario;
}

String^ Usuario::getContrasena() {
    return this->contrasena;
}
void Usuario::setContrasena(String^ contrasena) {
    this->contrasena = contrasena;
}

String^ Usuario::getCargo() {
    return this->cargo;
}
void Usuario::setCargo(String^ cargo) {
    this->cargo = cargo;
}