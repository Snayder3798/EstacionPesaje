#pragma once

namespace EstacionPesajeModel {

    public ref class TipoVehiculo {
    private:
        int pesoSinCarga;
        int pesoConCarga;
        int pesoActual;

    public:
        TipoVehiculo();
        TipoVehiculo(int pesoSinCarga, int pesoConCarga, int pesoActual);
    };

}
