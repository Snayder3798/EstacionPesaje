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
        int cantMultas;
        int codigoPropietarioVehiculo;

    public:
        Vehiculo();
        Vehiculo(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo);

        int getCodigo();
        void setCodigo(int pesoSinCarga);

        int getPesoSinCarga();
        void setPesoSinCarga(int pesoSinCarga);

        int getPesoConCarga();
        void setPesoConCarga(int pesoConCarga);

        int getPesoActual();
        void setPesoActual(int pesoConCarga);

        String^ getPlaca();
        void setPlaca(String^ placa);

        String^ getTipoVehiculo();
        void setTipoVehiculo(String^ tipoVehiculo);
        
        int getCantMultas();
        void setCantMultas(int cantMultas);

        int getcodigoPropietarioVehiculo();
        void setcodigoPropietarioVehiculo(int codigoPropietarioVehiculo);
    };
}