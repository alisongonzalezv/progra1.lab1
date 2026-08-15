#include "Administrador.h"
#include <iostream>

Administrador::Administrador(std::string nombre, std::string correo)
    : Empleado(nombre, "Administracion", correo)
{
}

void Administrador::trabajar() const
{
    std::cout << getNombre() << " esta coordinando las tareas del equipo.\n";
}