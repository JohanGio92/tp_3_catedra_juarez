#ifndef MODELOS_FIGURA_GEOMETRICA_2D_CUADRADO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_CUADRADO_H_

#include "../archivo_de_figuras_geometricas_2D/ConstructorDeFigurasGeometricas2D.h"
#include "Cuadrilatero.h"

class Cuadrado : public Cuadrilatero, public ConstructorDeFigurasGeometricas2D {
public:
	Cuadrado();
	Cuadrado(double lado);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	FiguraGeometrica2D* construir(std::ifstream& rutaDeEntrada) override;
	virtual ~Cuadrado();
};

#endif
