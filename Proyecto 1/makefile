all: compilar
compilar: propietario mascota administracion enlace main
	g++ -o Salida Main.o Administracion.o Enlace.o Propietario.o Mascota.o  
propietario: Propietario.cpp Propietario.h
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
administracion: Administracion.cpp Administracion.h Enlace.h 
	g++ -c Administracion.cpp
enlace: Enlace.cpp Enlace.h Propietario.h Mascota.h
	g++ -c Enlace.cpp
main: Main.cpp Administracion.h
	g++ -c Main.cpp
clean:
	@echo "Cleaning copilation..."
	del *.o