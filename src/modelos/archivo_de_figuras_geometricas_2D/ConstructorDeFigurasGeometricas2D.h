#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDEFIGURASGEOMETRICAS2D_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDEFIGURASGEOMETRICAS2D_H_

#include "../figura_geometrica_2d/FiguraGeometrica2D.h"
#include <fstream>

class ConstructorDeFigurasGeometricas2D {
public:
	ConstructorDeFigurasGeometricas2D(){};
	virtual FiguraGeometrica2D* construir(std::ifstream& rutaDeEntrada) = 0;
	virtual ~ConstructorDeFigurasGeometricas2D(){};
};

#endif
