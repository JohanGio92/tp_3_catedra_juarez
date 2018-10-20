#ifndef MODELOS_FIGURA_GEOMETRICA_2D_FIGURAGEOMETRICA2D_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_FIGURAGEOMETRICA2D_H_

class FiguraGeometrica2D{
public:
	FiguraGeometrica2D(){};
	virtual double calcularSuperficie() = 0;
	virtual double calcularPerimetro() = 0;
	virtual ~FiguraGeometrica2D(){};
};

#endif
