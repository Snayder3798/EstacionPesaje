#pragma once
#include "Persona.h"

namespace EstacionPesajeModel {

    public ref class Usuario : Persona {
    private:
        String^ nombreUsuario;
        String^ contrasena;
        String^ cargo;

    public:
        Usuario();
        Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int getMultasAcumuladas, String^ nombreUsuario, String^ contrasena, String^ cargo);

        String^ getNombreUsuario();
        void setNombreUsuario(String^ nombreUsuario);

        String^ getContrasena();
        void setContrasena(String^ contrasena);

        String^ getCargo();
        void setCargo(String^ cargo);


    };

}