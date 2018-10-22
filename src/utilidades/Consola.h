#ifndef CONSOLA_H_
#define CONSOLA_H_

#include <string>
#include <iostream>
#include <sstream>
typedef int Entero;

class Console {
public:
	Console();
	Entero leerEntero(std::string mensaje);
	template <typename T>
	void Escribir(T mensaje);
	template <typename T>
	std::string toString(const T &value);
	virtual ~Console();
};

template<typename T>
void Console::Escribir(T mensaje) {
	std::cout << mensaje << std::endl;
}

template<typename T>
std::string Console::toString(const T &value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

#endif
