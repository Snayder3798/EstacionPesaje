#include "frmPrincipal.h"
#include "frmLogIn.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace EstacionPesajeView;

[STAThread]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmLogIn ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}