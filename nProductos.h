#pragma once
#include"productos.h"
# include <iostream>
#include "Conexion_DB.h"
#include "mysql.h"
#include <string>

using namespace std;

class Producto_2 : Productos {

	//constructor
public:
	Producto_2() {

	}

	Producto_2(string prod, int marc, string des, int pre_costo, int pre_venta, int exist, string fech,string mar) : Productos(prod, marc, des, pre_costo, pre_venta, exist, fech,mar) {


	}

	//metodos
	//set(modificar)
	void setProducto(string prod) { producto = prod; }
	void setDescripcion(string des) { descripcion = des; }
	void setPrecio_costo(int pre_costo) { precio_costo = pre_costo; }
	void setPrecio_venta(int pre_venta) { precio_venta = pre_venta; }
	void setExistencia(int exist) { existencia = exist; }
	void setFecha_ingreso(string fech) { fecha_ingreso = fech; }


	//get (mostrar)
	string getProducto() { return producto; }
	int getIdmarca() { return id_marca; }
	string getDescripcion() { return descripcion; }
	int getPrecio_costo() { return precio_costo; }
	int getPrecio_venta() { return precio_venta; }
	int getExistencia() { return existencia; }
	string getFecha_ingreso() { return fecha_ingreso; }
	//metodos
	void crear_1() {
		int q_estado;
		Conexion_BD cn = Conexion_BD();
		cn.abrir_conexion();
		if (cn.getconectar()){
			string insert = "INSERT INTO marcas(marca)VALUES('" + marcas + "');";
			const char* i = insert.c_str();                               //esta linea ejecuta el insert into.
			q_estado = mysql_query(cn.getconectar(), i);                         //esta linea ejecuta el insert into.
			if (!q_estado) {
				cout << "Ingreso Exitoso..." << endl;

			}
			else {
				cout << "xxxxError al Ingresar Informacion xxxx" << endl;
			}

		}
		else {
			cout << "xxxxError al Ingresar Informacion xxxx" << endl;
		}
		cn.cerrar_conexion();

	}
	void crear() {
		int q_estado;
		Conexion_BD cn = Conexion_BD();
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string e = to_string(existencia);  //pasar int a un string
			string id = to_string(id_marca);
			string pre = to_string(precio_costo);
			string prev = to_string(precio_venta);
			string insert = "INSERT INTO productos(producto,idmarca,descripcion,precio_costo,precio_venta,existencia,fecha_ingreso)VALUES('" + producto + "'," + id + ",'" + descripcion + "'," + pre + "," + prev + "," + e + ",'" + fecha_ingreso + "');";
			const char* i = insert.c_str();                               //esta linea ejecuta el insert into.
			q_estado = mysql_query(cn.getconectar(), i);                         //esta linea ejecuta el insert into.
			if (!q_estado) {
				cout << "Ingreso Exitoso..." << endl;

			}
			else {
				cout << "xxxxError al Ingresar Informacion xxxx" << endl;
			}

		}
		else {
			cout << "xxxxError al Ingresar Informacion xxxx" << endl;
		}
		cn.cerrar_conexion();

	}
	
	void leer() {
		int q_estado;
		Conexion_BD cn = Conexion_BD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string consulta = "select * from productos";          // select, muestra los puestos _ endl while fila
			                                                     //UPDATE `db_productos`.`marcas` SET `marca` = NULL WHERE(`idmarca` = '5');
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				cout << "--------------Productos-------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "," << fila[1] << ";" << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << ";" << "," << fila[7] << ";" << endl;
				}

			}
		}
		else {
			cout << "xxxxError al Ingresar Informacion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}
	

};


