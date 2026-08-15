#include "TecnicoSoporte.h"
#include <iostream>

TecnicoSoporte::TecnicoSoporte(std::string nombre, std::string correo)
    : Empleado(nombre, "Soporte", correo)
{
}

void TecnicoSoporte::trabajar() const
{
    std::cout << getNombre() << " esta resolviendo un incidente tecnico.\n";
}