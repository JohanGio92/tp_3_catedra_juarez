#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_ARCHIVODEFIGURASGEOMETRICAS2D_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_ARCHIVODEFIGURASGEOMETRICAS2D_H_

#include <string>
#include <cassert>
#include "../../utilidades/ListaEnlazada.h"
#include "../figura_geometrica_2d/Circulo.h"
#include "../figura_geometrica_2d/Cuadrado.h"
#include "../figura_geometrica_2d/Rectangulo.h"

class ArchivoDeFigurasGeometricas2D {
private:
	static const std::string NOMBRE_DEL_ARCHIVO;
	std::ifstream rutaDeEntrada;
	ConstructorDeFigurasGeometricas2D **constructorDeFiguras;
public:
	static std::string TIPOS_DE_FIGURAS;
	ArchivoDeFigurasGeometricas2D();
	void convertirArchivoHaciaLista(ListaEnlazada<FiguraGeometrica2D*>& figuras);
	virtual ~ArchivoDeFigurasGeometricas2D();
private:
	unsigned obtenerPosicion(char tipoDeFigura);
};

#endif
