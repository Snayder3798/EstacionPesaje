#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Vehiculo {
    private:
        int codigo;
        int pesoSinCarga;
        int pesoConCarga;
        int pesoActual;
        String^ placa;
        String^ tipoVehiculo;

    public:
        Vehiculo();
        Vehiculo(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo);

        int getCodigo();
        void setCodigo(int pesoSinCarga);

        String^ getPlaca();
        void setPlaca(String^ placa);

        String^ getTipoVehiculo();
        void setTipoVehiculo(String^ tipoVehiculo);

        int getPesoSinCarga();
        void setPesoSinCarga(int pesoSinCarga);

        int getPesoConCarga();
        void setPesoConCarga(int pesoConCarga);

        int getPesoActual();
        void setPesoActual(int pesoConCarga);
        

    };
}