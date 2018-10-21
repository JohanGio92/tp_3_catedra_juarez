#ifndef MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_ARCHIVOFIGURASGEOMETRICAS2D_H_
#define MODELOS_ARCHIVO_DE_FIGURAS_GEOMETRICAS_2D_ARCHIVOFIGURASGEOMETRICAS2D_H_

#include <string>
#include <cassert>
#include "../../utilidades/ListaEnlazada.h"
#include "../figura_geometrica_2d/Circulo.h"
#include "../figura_geometrica_2d/Cuadrado.h"
#include "../figura_geometrica_2d/Rectangulo.h"

class ArchivoFigurasGeometricas2D {
private:
	static const std::string NOMBRE_DEL_ARCHIVO;
	static std::string TIPOS_DE_FIGURAS;
	std::ifstream rutaDeEntrada;
	ConstructorDeFigurasGeometricas2D **constructorDeFiguras;
public:
	ArchivoFigurasGeometricas2D();
	void convertirArchivoHaciaLista(ListaEnlazada<FiguraGeometrica2D*>& figuras);
	virtual ~ArchivoFigurasGeometricas2D();
private:
	unsigned obtenerPosicion(char tipoDeFigura);
};

#endif
