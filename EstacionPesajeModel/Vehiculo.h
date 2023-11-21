#pragma once
#include "PropietarioVehiculo.h"
#include "Usuario.h"
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

        PropietarioVehiculo^ objPropietarioVehiculo;
        Usuario^ objUsuario;
        List<RegistroVehiculo^>^ listaRegistroVehiculos;

    public:
        Vehiculo();
        Vehiculo(int codigo, int pesoLimite, String^ placa, String^ tipoVehiculo, int cantMultas);

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

        PropietarioVehiculo^ getPropietarioVehiculo();
        void setPropietarioVehiculo (PropietarioVehiculo^ objPropietarioVehiculo);

        Usuario^ getUsuario();
        void setUsuario(Usuario^ objUsuario);

        List<RegistroVehiculo^>^ getListaRegistroVehiculos();
        void setListaRegistroVehiculos(List<RegistroVehiculo^>^ listaRegistroVehiculos);
    };
}