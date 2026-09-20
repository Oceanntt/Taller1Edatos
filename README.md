Taller 1: Sistema de Gestión de Pacientes - Hospital Marmaja

Sistema de gestión de pacientes de un hospital desarrollado en C++ para el curso de Estructura de Datos. El programa lee los pacientes desde un archivo de texto, los atiende en orden de llegada, los deriva a su departamento y guarda cada atención en un historial. Las estructuras de datos (cola, listas enlazadas y pila) están implementadas manualmente con nodos y punteros, sin usar la STL.

Integrantes
Nombre: Sebastian Parada
RUT: 22312246-9
Nombre en GitHub: Oceanntt
Carrera: ICCI
Estructura del proyecto
dominio/: las entidades del hospital (Paciente, Departamento).
logica/: las estructuras de datos y el control del sistema (Cola, ListaPacientes, ListaDepartamentos, Pila, Hospital).
main/: el menú de consola (main.cpp).
Diseño
Estructuras: una Cola (FIFO) para los pacientes en espera, una lista enlazada de departamentos donde cada uno tiene su propia lista de pacientes, y una Pila (LIFO) para el historial de atenciones.
Herencia: Cola y ListaPacientes derivan de la clase base ColeccionPacientes, que concentra lo que comparten (los nodos, el conteo, la búsqueda por ID y la liberación de memoria).
Punteros y memoria: todas las estructuras usan memoria dinámica y cada una libera sus nodos en su destructor. La aritmética de punteros se usa al crear los departamentos fijos, recorriendo un arreglo de nombres con *(puntero + i).
Responsabilidades: Hospital coordina el flujo Archivo → Atención → Derivación → Historial, y main.cpp solo muestra el menú.
Instrucciones de compilación y ejecución

Requisito: compilador g++ (MinGW-w64 en Windows). Los comandos se ejecutan desde la carpeta raíz del proyecto, donde están este README y pacientes.txt.

-Compilación

    mingw32-make

Si make no funciona, compilar con este comando (en una sola línea):

    g++ -Wall -std=c++17 -I dominio -I logica -I main main/main.cpp dominio/Paciente.cpp dominio/Departamento.cpp logica/ColeccionPacientes.cpp logica/Cola.cpp logica/ListaPacientes.cpp logica/ListaDepartamentos.cpp logica/Pila.cpp logica/Hospital.cpp -o hospital

-Ejecución

    .\hospital.exe
