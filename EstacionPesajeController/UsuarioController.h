#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

using namespace System::Data::SqlClient;

namespace EstacionPesajeController {

	public ref class UsuarioController {

	private:
		SqlConnection^ objConexion;		/*Atributo que permite hacer la conexion a la base de datos*/

	public:
		UsuarioController();

		/*Metodos propios del manejo de Base de Datos*/
		void abrirConexionBD();
		void cerrarConexionBD();

		void AgregarUsuarioSQL(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreUsuario, String^ contrasena, String^ cargo);
		void eliminarUsuarioSQL(int codigo);
		void actualizarUsuarioSQL(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreUsuario, String^ contrasena, String^ cargo);
		List<Usuario^>^ buscarUsuarioxDniSQL(String^ dni);
		List<Usuario^>^ buscarUsuarioxApellidoSQL(String^ apellidoPaterno);
		List <Usuario^>^ buscarAllSQL();
		Usuario^ objbuscarUsuarioxCodigoSQL(int codigo);

	};

}