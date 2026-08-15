#include "Empleado.h"
#include <iostream>

Empleado::Empleado(std::string nombre, std::string area, std::string correo)
    : nombre(nombre), area(area), correo(correo)
{
}

std::string Empleado::getNombre() const { return nombre; }
std::string Empleado::getArea() const { return area; }
std::string Empleado::getCorreo() const { return correo; }

void Empleado::setNombre(std::string nuevoNombre)
{
    if (!nuevoNombre.empty()) nombre = nuevoNombre;
}

void Empleado::setArea(std::string nuevaArea)
{
    if (!nuevaArea.empty()) area = nuevaArea;
}

void Empleado::setCorreo(std::string nuevoCorreo)
{
    if (!nuevoCorreo.empty()) correo = nuevoCorreo;
}

void Empleado::mostrarInformacion() const
{
    std::cout << "Nombre: " << nombre
              << " | Area: " << area
              << " | Correo: " << correo << '\n';
}

void Empleado::trabajar() const
{
    std::cout << getNombre() << " esta realizando una tarea general.\n";
}