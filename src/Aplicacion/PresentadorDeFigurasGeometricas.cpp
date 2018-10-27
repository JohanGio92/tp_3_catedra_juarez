#include "PresentadorDeFigurasGeometricas.h"

PresentadorDeFigurasGeometricas::PresentadorDeFigurasGeometricas() {
	menu.agnadir(new ConsultaDeFiguraGeometrica());
	menu.agnadir(new BajaDeFiguraGeometrica());
	menu.agnadir(new ListadorDeFiguraGeometrica());
	menu.agnadir(new CalculadorDeSuperficieMaxima());
	menu.agnadir(new CalculadorDeSuperficieMinima());
	menu.agnadir(new CalculadorDePerimetroMaximo());
	menu.agnadir(new CalculadorDePerimetroMinimo());
	menu.cerrar();
}

void PresentadorDeFigurasGeometricas::presentar(){
	while (!menu.terminado()) {
		menu.mostrar();
		Entero posicion = menu.leerPosicion();
		menu.irOpcion(posicion)->ejecutar();
	}
}

PresentadorDeFigurasGeometricas::~PresentadorDeFigurasGeometricas() {

}

