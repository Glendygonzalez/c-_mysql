#pragma once
#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class Conexion_BD {
private: MYSQL* conectar;
public:
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "root", "device11", "db_productos", 3306, NULL, 0);

	}
	MYSQL* getconectar() {
		return conectar;
	}

	void cerrar_conexion() {
		mysql_close(conectar);

	}

};
