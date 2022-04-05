# Respuestas

## 1. Encapsulamiento
### ¿Está de acuerdo con esa decisión de diseño? Justifique su respuesta
si ya que sera eredado por las clases hijas y al ser virtual puro tambien sera obligatorio en estas y podra ser sobreescrito, y solo las clases hijas podran tener acceso a este metodo lo que nos brinda una mayor seguridad para el proyecto.

## 2. Contenedoras
### En la clase casino los jugadores se guardan en un mapa no ordenado. * ¿Está de acuerdo con esa decisión de diseño? Justifique su respuesta
si ya que no hay inportancia en que jugador esta por encima de otro ademas a casda uno se le asigna un identificador dentro de la clase y ademas este id se asigna a la llave del mapa que a su bes nos facilita mucho la manipulacion de este haciendo que sea mas facil ubicar un jugador dentro del mapa.

## 3. CLASES ABSTRACTAS
### La clase Juego es una clase abstracta.
en primer lugar sabemos que es abstracta ya que no se instancia esa clase en ningun lado ademas de que contiene metodos virtuales puros como lo pueden ser Jugar y calcularResultados que no se desarroyan dentro de esta clase pero si se sobreescriben dentro de las classes hijas que eredan este metodo.

el hecho de que sean abstractas nos permite hacer que las clases hijas tengan esas mismas funciones que compartiran entre si, un ejemplo seria el metodo jugar que es necesario en todos los juegos pero cada juego tiene una forma de jugar diferente por lo que en cada clase hoja se sobreescribe para lograr eso.
ademas de indicar methodos que deben ser creados de manera obligatoria (metodos virtuales puros) que como ya dijimos son Jugar y calcularResultados.

