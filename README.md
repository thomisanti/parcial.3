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

Este proyecto simula una batalla por turnos entre dos Pokémon. El jugador puede elegir los ataques durante el combate a través de un menú textual en consola. El sistema permite visualizar la vida restante de los Pokémon y termina el combate correctamente cuando uno de ellos pierde todos sus puntos de vida.

---

## Requisitos mínimos cumplidos

- Lenguaje obligatorio: C++
- Sistema de combate por turnos
- Menú textual para elegir ataques
- Cada Pokémon tiene dos ataques diferentes
- El combate finaliza correctamente cuando uno pierde
- Se anuncia el ganador al final

---

## Desarrollo adicional

No se implementaron desarrollos adicionales. Este proyecto cumple exclusivamente con los requisitos mínimos establecidos en el parcial.

---

## ¿Para qué se implementó?

Este sistema se implementó como una simulación básica de un combate de Pokémon. Su propósito es demostrar la lógica de turnos, el manejo de estructuras de datos simples (`struct`) y el control de flujo mediante condiciones y ciclos.

---

## ¿Por qué se consideró necesario?

Porque es una forma directa y comprensible de representar el concepto de un videojuego por turnos. También permite practicar estructuras de datos, entrada/salida por consola y funciones básicas en C++.

---

## ¿Cómo se llevó a cabo su implementación?

- Se definieron estructuras (`struct`) para representar ataques y Pokémon.
- Se programó una función que muestra los ataques disponibles y permite al jugador elegir.
- El combate se realiza en un ciclo `while` que alterna los turnos entre dos Pokémon hasta que uno queda sin vida.
- Se imprime en consola quién gana la batalla.

---

## Compilación y ejecución

Compilar en consola con:
