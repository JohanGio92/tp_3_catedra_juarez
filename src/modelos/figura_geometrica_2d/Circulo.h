#ifndef MODELOS_FIGURA_GEOMETRICA_2D_CIRCULO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_CIRCULO_H_

#include "../archivo_de_figuras_geometricas_2D/ConstructorDeFigurasGeometricas2D.h"
#include "FiguraGeometrica2D.h"

class Circulo : public FiguraGeometrica2D, public ConstructorDeFigurasGeometricas2D {
private:
	double radio;
	static const double PI;
public:
	Circulo();
	Circulo(double radio);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	FiguraGeometrica2D* construir(std::ifstream& rutaDeEntrada) override;
	virtual ~Circulo();
};

#endif
