all: compilar
compilar: propietario mascota administracion main
	g++ -o Salida Propietario.o Mascota.o Main.o administracion.o
propietario: Propietario.cpp Propietario.h 
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h Administracion.h
	g++ -c Mascota.cpp
administracion: Administracion.cpp Administracion.h 
	g++ -c Administracion.cpp
main: Main.cpp Mascota.cpp Propietario.cpp Administracion.cpp
	g++ -c Main.cpp
clean:
	@echo "Cleaning copilation..."
	del *.o