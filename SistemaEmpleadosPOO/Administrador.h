#pragma once
#include "Empleado.h"

class Administrador : public Empleado
{
public:
    Administrador(std::string nombre, std::string correo);
    void trabajar() const override;
};