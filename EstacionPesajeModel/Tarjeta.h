#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Tarjeta {
    private:
        int codigo;
        bool estado;
        String^ numeroTarjeta;


    public:
        Tarjeta();
        Tarjeta(int codigo, bool estado, String^ numeroTarjeta);

        int getCodigo();
        void setCodigo(int codigo);

        bool getEstado();
        void setEstado(int estado);

        String^ getNumeroTarjeta();
        void setNumeroTarjeta(String^ numeroTarjeta);
    };

}
