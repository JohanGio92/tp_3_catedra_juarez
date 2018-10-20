#include "Cuadrilatero.h"

const unsigned Cuadrilatero::CANTIDAD_DE_LADOS = 4;

Cuadrilatero::Cuadrilatero() :
		Cuadrilatero(0.0) {
}

Cuadrilatero::Cuadrilatero(double lado) :
		lado(lado) {
}
