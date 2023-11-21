#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace EstacionPesajeModel {

    public ref class EstacionPesaje {
    private:
        int codigo;
        String^ ubicacion;
        double latitud;
        double longitud;
        int nroMultas;

    public:
        EstacionPesaje();
        EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, int nroMultas);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);

        double getLatitud();
        void setLatitud(double latitud);

        double getLongitud();
        void setLongitud(double longitud);

        int getNroMultas();
        void setNroMultas(int nroMultas);
    };
    
}