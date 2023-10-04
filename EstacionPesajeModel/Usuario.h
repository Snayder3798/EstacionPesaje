#pragma once
#include "Persona.h"

namespace EstacionPesajeModel {

    public ref class Usuario : Persona {
    private:
        int codigoUsuario;
        String^ contrasena;

    public:
        Usuario();
        Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int codigoUsuario, String^ contrasena);
    };

}