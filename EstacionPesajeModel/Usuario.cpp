#include "Usuario.h"

using namespace EstacionPesajeModel;

Usuario::Usuario() :Persona() {

}

Usuario::Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int codigoUsuario, String^ contrasena) :Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni) {
    this->codigoUsuario = codigoUsuario;
    this->contrasena = contrasena;
}