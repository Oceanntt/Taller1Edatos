CXX = g++
CXXFLAGS = -Wall -std=c++17 -I dominio -I logica -I main
EJECUTABLE = hospital

FUENTES = main/main.cpp \
          dominio/Paciente.cpp \
          dominio/Departamento.cpp \
          logica/ColeccionPacientes.cpp \
          logica/Cola.cpp \
          logica/ListaPacientes.cpp \
          logica/ListaDepartamentos.cpp \
          logica/Pila.cpp \
          logica/Hospital.cpp

$(EJECUTABLE): $(FUENTES)
	$(CXX) $(CXXFLAGS) $(FUENTES) -o $(EJECUTABLE)

clean:
	rm -f $(EJECUTABLE) $(EJECUTABLE).exe