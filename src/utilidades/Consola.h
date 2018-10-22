#ifndef CONSOLA_H_
#define CONSOLA_H_

#include <string>
#include <iostream>
#include <sstream>
typedef int Entero;

class Consola {
public:
	Consola();
	Entero leerEntero(std::string mensaje);
	template <typename T>
	void escribir(T mensaje);
	virtual ~Consola();
};

template<typename T>
void Consola::escribir(T mensaje) {
	std::cout << mensaje << std::endl;
}

template<typename T>
std::string toString(const T &value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

#endif
