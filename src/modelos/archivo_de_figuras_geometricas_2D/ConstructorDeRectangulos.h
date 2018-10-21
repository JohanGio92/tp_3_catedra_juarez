#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDERECTANGULOS_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDERECTANGULOS_H_

#include "ConstructorDeFigurasGeometricas2D.h"
#include "../figura_geometrica_2d/Rectangulo.h"


class ConstructorDeRectangulos : public ConstructorDeFigurasGeometricas2D {
public:
	ConstructorDeRectangulos();
	FiguraGeometrica2D* construir();
	virtual ~ConstructorDeRectangulos();
};

#endif
