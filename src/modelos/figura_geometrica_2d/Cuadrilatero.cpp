#include "Cuadrilatero.h"

const unsigned Cuadrilatero::CANTIDAD_DE_LADOS = 4;

Cuadrilatero::Cuadrilatero(std::string tipoDeFigura) :
		Cuadrilatero(tipoDeFigura, 1.1) {
}

Cuadrilatero::Cuadrilatero(std::string tipoDeFigura, double lado) :
		 FiguraGeometrica2D(tipoDeFigura), lado(lado) {
}
