# parcial.3

# Proyecto: Sistema de Parqueadero

## Nombre del estudiante
Thomas Santiago Guzman Paez 

---

## Descripción

Este proyecto simula el funcionamiento básico de un parqueadero utilizando el lenguaje de programación Python.

El sistema permite al usuario registrar vehículos, llevar el control del tiempo de permanencia y calcular el valor a pagar al salir. Además, muestra el estado del parqueadero en tiempo real mediante una matriz.

---

## Requisitos mínimos implementados

- Lenguaje de programación: Python
- Mapa del parqueadero de 8x8
- Entrada y salida claramente definidas
- Registro de vehículos con placa y hora de entrada
- Sistema de cobro por tiempo de permanencia
- Visualización del parqueadero en tiempo real (espacios libres y ocupados)

---

## Instrucciones de uso

1. Ejecutar el archivo en consola con Python 3:


2. El sistema mostrará un menú con opciones:
   - Ingresar vehículo
   - Retirar vehículo
   - Salir

3. Para probar el sistema de cobro, se utiliza una tarifa ficticia de 1 unidad por cada 10 segundos de permanencia .

---










# Batalla de Pokémon – Proyecto en C++



## Descripción

Este proyecto implementa una simulación de combate por turnos entre dos Pokémon utilizando el lenguaje C++. Se incluyeron características adicionales como tipos de Pokémon y un sistema de experiencia y niveles para enriquecer la lógica del juego.

---

## Requisitos mínimos cumplidos

- Lenguaje obligatorio: C++
- Sistema de combate por turnos
- Menú textual con impresión por consola
- Cada Pokémon tiene al menos dos ataques distintos
- El combate finaliza cuando uno queda sin vida
- Se anuncia el ganador correctamente

---

## Desarrollo adicional

### ¿Para qué se implementó?

Se implementaron las siguientes funcionalidades adicionales:
- Sistema de tipos (Fuego, Agua, Planta)
- Sistema de experiencia y niveles

Estas características se añadieron para simular mejor la lógica original de los juegos de Pokémon, y para demostrar la posibilidad de extender el sistema básico hacia una experiencia más completa y escalable.

---

### ¿Por qué se consideró necesario?

Porque los requisitos mínimos solo permiten un sistema simple. Con estas mejoras:
- El daño ahora depende de la efectividad del tipo de ataque.
- El Pokémon que gana puede subir de nivel y aumentar su HP.
- Se demuestra una mejor comprensión del diseño orientado a objetos y lógica de juego.

---

### ¿Cómo se llevó a cabo su implementación?

1. **Sistema de tipos:**  
   Se agregó una función llamada `calcularMultiplicador` que determina el daño adicional o reducido según el tipo del ataque y del defensor (ej: fuego es fuerte contra planta).

2. **Experiencia y niveles:**  
   Se agregaron atributos `experiencia` y `nivel` a la clase `Pokemon`.  
   El ganador de una batalla recibe 100 puntos de experiencia. Si llega a 100, sube de nivel y gana +10 HP automáticamente.

3. **Lógica de combate adaptada:**  
   Se modificó la función `batalla` para integrar estas mejoras y mostrar mensajes adicionales al subir de nivel.

---

## Cómo compilar y ejecutar

```bash
g++ pokemon.cpp -o batalla
./batalla

