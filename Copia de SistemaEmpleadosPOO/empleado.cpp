#include "Empleado.h"
#include <iostream>

Empleado::Empleado(const std::string& nombre, const std::string& area)
    : nombre(nombre), area(area) {}

std::string Empleado::getNombre() const {
    return nombre;
}

std::string Empleado::getArea() const {
    return area;
}

void Empleado::setNombre(const std::string& nuevoNombre) {
    if (!nuevoNombre.empty()) {
        nombre = nuevoNombre;
    }
}

void Empleado::setArea(const std::string& nuevaArea) {
    if (!nuevaArea.empty()) {
        area = nuevaArea;
    }
}

void Empleado::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << " | Area: " << area << '\n';
}

void Empleado::trabajar() const {
    std::cout << getNombre() << " esta realizando una tarea general.\n";
}