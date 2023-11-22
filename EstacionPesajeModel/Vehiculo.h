#pragma once
#include "RegistroVehiculo.h"
using namespace System;
using namespace System::Collections::Generic;

namespace EstacionPesajeModel {

    public ref class Vehiculo {
    private:
        int codigo;
        int pesoLimite;
        String^ placa;
        String^ tipoVehiculo;
        int cantMultas;
        int codigoPropietarioVehiculo;

        List<RegistroVehiculo^>^ listaRegistroVehiculos;


    public:
        Vehiculo();
        Vehiculo(int codigo, int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas, int codigoPropietarioVehiculo);

        int getCodigo();
        void setCodigo(int codigo);

        int getPesoLimite();
        void setPesoLimite(int pesoLimite);

        String^ getPlaca();
        void setPlaca(String^ placa);

        String^ getTipoVehiculo();
        void setTipoVehiculo(String^ tipoVehiculo);

        int getCantMultas();
        void setCantMultas(int cantMultas);

        int getCodigoPropietarioVehiculo();
        void setCodigoPropietarioVehiculo(int codigoPropietarioVehiculo);

        List<RegistroVehiculo^>^ getListaRegistroVehiculos();
        void setListaRegistroVehiculos(List<RegistroVehiculo^>^ listaRegistroVehiculos);
    };
}