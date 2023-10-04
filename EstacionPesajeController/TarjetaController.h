#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class TarjetaController {
	public:
		TarjetaController();
		List<Tarjeta^>^ buscarTarjeta(String^ numeroTarjeta);
	};


}
