#include "PropietarioVehiculo.h"

using namespace EstacionPesajeModel;

PropietarioVehiculo::PropietarioVehiculo() :Persona() {

}

PropietarioVehiculo::PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas) : Persona(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, multasAcumuladas) {

}
