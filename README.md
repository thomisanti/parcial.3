
---

## 📁 `parqueadero/README.md`

```markdown
# Sistema de Parqueadero – Proyecto en Python

## Nombre del estudiante
Thomas Santiago Guzmán Páez

---

## Descripción

Este proyecto simula el funcionamiento de un parqueadero básico utilizando una matriz de 8x8 y programación en Python. El sistema permite registrar vehículos, controlar el tiempo de permanencia y calcular el valor a pagar al momento de la salida.

---

## Requisitos mínimos cumplidos

- Lenguaje obligatorio: Python
- Mapa de al menos 8x8
- Entrada y salida visibles en el mapa
- Registro de vehículos con placa y hora de entrada
- Sistema de cobro por tiempo
- Visualización del estado del parqueadero (libres y ocupados)

---

## Desarrollo adicional

No se implementaron desarrollos adicionales en este proyecto. Solo se desarrollaron los requisitos mínimos solicitados.

---

## Cómo ejecutar

```bash
python parqueadero.py

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

