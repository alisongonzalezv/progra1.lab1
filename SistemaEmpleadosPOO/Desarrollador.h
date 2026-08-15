#pragma once
#include "Empleado.h"
#include <string>

class Desarrollador : public Empleado
{
private:
    std::string lenguajePrincipal;

public:
    Desarrollador(std::string nombre, std::string lenguajePrincipal, std::string correo);
    void trabajar() const override;
};
