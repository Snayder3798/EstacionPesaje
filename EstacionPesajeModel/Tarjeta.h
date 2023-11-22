#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Tarjeta {
    private:
        int codigo;
        String^ estado;
        String^ numeroTarjeta;

    public:
        Tarjeta();
        Tarjeta(int codigo, String^ estado, String^ numeroTarjeta);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getEstado();
        void setEstado(String^ estado);

        String^ getNumeroTarjeta();
        void setNumeroTarjeta(String^ numeroTarjeta);
    };

}
