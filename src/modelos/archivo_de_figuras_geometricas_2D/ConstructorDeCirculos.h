#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDECIRCULOS_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDECIRCULOS_H_

#include "ConstructorDeFigurasGeometricas2D.h"
#include "../figura_geometrica_2d/Circulo.h"

class ConstructorDeCirculos: public ConstructorDeFigurasGeometricas2D {
public:
	ConstructorDeCirculos();
	FiguraGeometrica2D* construir() override;
	virtual ~ConstructorDeCirculos();
};

#endif
