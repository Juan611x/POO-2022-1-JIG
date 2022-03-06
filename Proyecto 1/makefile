all: compillar
compillar: propietario mascota main
	g++ -o Salida Propietario.o Mascota.o Main.o
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h 
	g++ -c Mascota.cpp
main: Main.cpp Mascota.cpp Propietario.cpp
	g++ -c Main.cpp
clean:
	@echo "Cleaning copilation..."
	del *.o