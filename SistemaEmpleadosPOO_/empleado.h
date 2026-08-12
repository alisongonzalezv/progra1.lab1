#pragma once

#include <string>

class Empleado
{
private:
    std::string nombre;
    std::string area;

public:
    Empleado(const std::string& nombre, const std::string& area);
    virtual ~Empleado() = default;

    std::string getNombre() const;
    std::string getArea() const;

    void setNombre(const std::string& nuevoNombre);
    void setArea(const std::string& nuevaArea);

    void mostrarInformacion() const;
    virtual void trabajar() const;
};