#pragma once
#include <string>

class Empleado
{
private:
    std::string nombre;
    std::string area;
    std::string correo;

public:
    Empleado(std::string nombre, std::string area, std::string correo);

    std::string getNombre() const;
    std::string getArea() const;
    std::string getCorreo() const;

    void setNombre(std::string nuevoNombre);
    void setArea(std::string nuevaArea);
    void setCorreo(std::string nuevoCorreo);

    void mostrarInformacion() const;
    virtual void trabajar() const;
    virtual ~Empleado() = default;
};