#pragma once
#include "Empleado.h"

class TecnicoSoporte : public Empleado
{
public:
    TecnicoSoporte(std::string nombre, std::string correo);
    void trabajar() const override;
};