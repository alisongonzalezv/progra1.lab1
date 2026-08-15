#include "Desarrollador.h"
#include "TecnicoSoporte.h"
#include "Administrador.h"

int main()
{
    Desarrollador desarrollador("Ana", "C++", "ana@empresa.com");
    TecnicoSoporte tecnico("Carlos", "carlos@empresa.com");
    Administrador administrador("Beatriz", "beatriz@empresa.com");

    Empleado* equipo[] = {
        &desarrollador,
        &tecnico,
        &administrador
    };

    for (Empleado* empleado : equipo)
    {
        empleado->mostrarInformacion();
        empleado->trabajar();
    }

    return 0;
}