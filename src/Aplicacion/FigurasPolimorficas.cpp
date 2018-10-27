#include "FigurasPolimorficas.h"

FigurasPolimorficas::FigurasPolimorficas() {
	menu.agnadir(new ConsultaDeFiguraGeometrica());
	menu.agnadir(new BajaDeFiguraGeometrica());
	menu.agnadir(new ListadorDeFiguraGeometrica());
	menu.agnadir(new CalculadorDeSuperficieMaxima());
	menu.agnadir(new CalculadorDeSuperficieMinima());
	menu.agnadir(new CalculadorDePerimetroMaximo());
	menu.agnadir(new CalculadorDePerimetroMinimo());
	menu.cerrar();
}

void FigurasPolimorficas::comenzar(){
	while (!menu.terminado()) {
		menu.mostrar();
		Entero posicion = menu.leerPosicion();
		menu.irOpcion(posicion)->ejecutar();
	}
}

FigurasPolimorficas::~FigurasPolimorficas() {

}

