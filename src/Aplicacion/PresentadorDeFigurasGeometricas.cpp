#include "PresentadorDeFigurasGeometricas.h"

PresentadorDeFigurasGeometricas::PresentadorDeFigurasGeometricas() {
	ArchivoDeFigurasGeometricas2D archivoDeFigurasGeometricas;
	archivoDeFigurasGeometricas.convertirArchivoHaciaLista(figuras);
	menu.agnadir(new ConsultaDeFiguraGeometrica());
	menu.agnadir(new BajaDeFiguraGeometrica());
	menu.agnadir(new AltaDeFiguraGeometrica());
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
		menu.irOpcion(posicion)->ejecutar(figuras);
	}
}

PresentadorDeFigurasGeometricas::~PresentadorDeFigurasGeometricas() {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		delete figuras[i];
	}
}

