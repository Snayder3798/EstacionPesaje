#pragma once
#include "PantallaLCD.h"
#include "Vascula.h"
#include "SensorBarras.h"
#include "BarreraVehicular.h"

#include "Usuario.h"
#include "PropietarioVehiculo.h"
#include "Tarjeta.h"

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

        List<PantallaLCD^>^ listaPantallaLCD; //Así se representa la composición o agregación
        List<Vascula^>^ listaVascula;
        List<SensorBarras^>^ listaSensorBarras;
        List<BarreraVehicular^>^ listaBarreraVehicular;

        Usuario^ ObjUsuario;
        PropietarioVehiculo^ objPropietarioVehiculo;
        Tarjeta^ objTarjeta;

    public:
        EstacionPesaje();
        EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, int nroMultas, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, Tarjeta^ objTarjeta);
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

        Usuario^ getUsuario();
        void setUsuario(Usuario^ objUsuario);

        PropietarioVehiculo^ getPropietarioVehiculo();
        void setPropietarioVehiculo(PropietarioVehiculo^ objPropietarioVehiculo);

        Tarjeta^ getTarjeta();
        void setTarjeta(Tarjeta^ objTarjeta);
    };
    
}