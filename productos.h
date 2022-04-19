#pragma once
#include <iostream>

using namespace std;
class Productos {

protected: string producto, descripcion,fecha_ingreso,marcas;
		 int existencia,id_marca,precio_costo,precio_venta;
		 


protected:
	Productos() {
	}
	
	Productos(string prod, int marc, string des,int pre_costo, int pre_venta, int exist, string fech, string mar) {

		producto = prod;
		id_marca = marc;
		descripcion = des;
		precio_costo = pre_costo;
		precio_venta = pre_venta;
		existencia = exist;
		fecha_ingreso = fech;
		marcas = mar;
		
	}
};

