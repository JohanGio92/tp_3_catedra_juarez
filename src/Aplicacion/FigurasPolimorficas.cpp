#include "FigurasPolimorficas.h"

FigurasPolimorficas::FigurasPolimorficas() {
	ArchivoDeFigurasGeometricas2D archivoDeFigurasGeometricas;
	archivoDeFigurasGeometricas.convertirArchivoHaciaLista(figuras);
	menu.agnadir(new ConsultaDeFiguraGeometrica(figuras));
	menu.agnadir(new BajaDeFiguraGeometrica(figuras));
	menu.agnadir(new ListadorDeFiguraGeometrica(figuras));
	menu.agnadir(new CalculadorDeSuperficieMaxima(figuras));
	menu.agnadir(new CalculadorDeSuperficieMinima(figuras));
	menu.agnadir(new CalculadorDePerimetroMaximo(figuras));
	menu.agnadir(new CalculadorDePerimetroMinimo(figuras));
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
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		delete figuras[i];
	}
}

