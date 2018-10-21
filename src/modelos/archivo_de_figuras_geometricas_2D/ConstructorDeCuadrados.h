#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDECUADRADOS_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_CONSTRUCTORDECUADRADOS_H_

#include "ConstructorDeFigurasGeometricas2D.h"
#include "../figura_geometrica_2d/Cuadrado.h"

class ConstructorDeCuadrados : public ConstructorDeFigurasGeometricas2D{
public:
	ConstructorDeCuadrados();
	FiguraGeometrica2D* construir() override;
	virtual ~ConstructorDeCuadrados();
};

#endif
