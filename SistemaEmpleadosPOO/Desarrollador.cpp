#include "Desarrollador.h"
#include <iostream>

Desarrollador::Desarrollador(std::string nombre, std::string lenguajePrincipal, std::string correo)
    : Empleado(nombre, "Desarrollo", correo), lenguajePrincipal(lenguajePrincipal)
{
}

void Desarrollador::trabajar() const
{
    std::cout << getNombre() << " esta programando en " << lenguajePrincipal << ".\n";
}