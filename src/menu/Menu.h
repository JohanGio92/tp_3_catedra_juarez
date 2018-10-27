#ifndef MENU_MENU_H_
#define MENU_MENU_H_

#include "Opcion.h"
#include "../modelos/archivo_de_figuras_geometricas_2D/ArchivoDeFigurasGeometricas2D.h"
#include "BajaDeFiguraGeometrica.h"
#include "CalculadorDePerimetroMaximo.h"
#include "CalculadorDePerimetroMinimo.h"
#include "CalculadorDeSuperficieMaxima.h"
#include "CalculadorDeSuperficieMinima.h"
#include "ConsultaDeFiguraGeometrica.h"
#include "ListadorDeFiguraGeometrica.h"
#include "Salida.h"

class Menu {
private:
	static const unsigned LONGITUD;
	unsigned cantidad;
	Opcion **opciones;
	Salida *salida;
public:
	Menu();
	void mostrar();
	void agnadir(Opcion* opcion);
	void cerrar();
	Opcion* irOpcion(unsigned posicion);
	unsigned leerPosicion();
	bool terminado();
	virtual ~Menu();
private:
	void destruir();
	bool estaEnElRango(unsigned posicion);
};

#endif
