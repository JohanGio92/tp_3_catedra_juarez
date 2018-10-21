#ifndef MODELOS_FIGURA_GEOMETRICA_2D_RECTANGULO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_RECTANGULO_H_

#include "../archivo_de_figuras_geometricas_2D/ConstructorDeFigurasGeometricas2D.h"
#include "Cuadrilatero.h"

class Rectangulo : public Cuadrilatero, public ConstructorDeFigurasGeometricas2D{
private:
	double base;
public:
	Rectangulo();
	Rectangulo(double altura, double base);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	FiguraGeometrica2D* construir(std::ifstream& rutaDeEntrada);
	virtual ~Rectangulo();
};

#endif
