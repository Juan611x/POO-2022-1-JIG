all: compilar
compilar: figurasgeo circulo cuadrado rectangulo administracion main
	g++ -o Salida Main.o figurasgeo.o circulo.o cuadrado.o administracion.o  
figurasgeo: Figurasgeo.cpp Figurasgeo.h
	g++ -c Figurasgeo.cpp
circulo: Circulo.cpp Circulo.h Figurasgeo.h
	g++ -c Circulo.cpp
cuadrado: Cuadrado.cpp Cuadrado.h Figurasgeo.h
	g++ -c Cuadrado.cpp
rectangulo: Rectangulo.cpp Rectangulo.h Figurasgeo.h
	g++ -c Rectangulo.cpp
administracion: Administracion.cpp Administracion.h Circulo.h Cuadrado.h Rectangulo.h Figurasgeo.h 
	g++ -c Administracion.cpp
main: Main.cpp Administracion.h
	g++ -c Main.cpp
clean:
	@echo "Cleaning copilation..."
	del *.o