// crud_poo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "productos_2.h"
#include <iostream>

using namespace std;

int main() {
	string producto,descripcion, fecha_ingreso,marcas;
	int idmarca,existencia, precio_costo, precio_venta;

	cout << "ingrese Marca:\n";
	cin >> marcas;
	system("pause");
	system("cls");
	cout << "Ingresar Producto:\n";
	cin >> producto;
	cout << "Ingrese Id Marca:\n";
	cin >> idmarca;
	cout << "Ingresar Descripcion de Producto:\n";
	cin >> descripcion;
	cout << "Ingresar Precio costo:\n";
	cin >> precio_costo;
	cout << "Ingrese Precio Venta:\n";
	cin >> precio_venta;
	cout << "Existencias:\n";
	cin >> existencia;
	cout << "Ingrese Fecha de Ingreso:\n ";
	cin >> fecha_ingreso;

	//instancia de un objeto
	Producto_2 c = Producto_2(producto,idmarca,descripcion, precio_costo, precio_venta, existencia, fecha_ingreso,marcas);
	c.crear_1();
	c.crear();
	c.leer();



}