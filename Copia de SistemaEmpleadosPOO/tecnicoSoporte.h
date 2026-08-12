#pragma once

#include "Empleado.h"

class TecnicoSoporte : public Empleado
{
public:
    explicit TecnicoSoporte(const std::string& nombre);

    void trabajar() const override;
};
