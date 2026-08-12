#include "Desarrollador.h"
#include <iostream>

Desarrollador::Desarrollador(const std::string& nombre, const std::string& lenguajePrincipal)
    : Empleado(nombre, "Desarrollo"), lenguajePrincipal(lenguajePrincipal) {}

void Desarrollador::trabajar() const {
    std::cout << getNombre() << " esta programando en " << lenguajePrincipal << ".\n";
}