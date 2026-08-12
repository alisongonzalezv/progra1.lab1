#pragma once

#include "Empleado.h"
#include <string>

class Desarrollador : public Empleado
{
private:
    std::string lenguajePrincipal;

public:
    Desarrollador(const std::string& nombre, const std::string& lenguajePrincipal);

    void trabajar() const override;
};
