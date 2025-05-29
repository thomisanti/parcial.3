# Simulador de Batalla Pokémon en C++

Este proyecto es un pequeño simulador de combate por turnos entre dos Pokémon utilizando el lenguaje C++. Incluye funcionalidades como ataques con daño, reducción de puntos de vida (HP) y un sistema de turnos básico hasta que uno de los Pokémon pierda todos sus puntos de vida.

---

## ¿Para qué se implementaron las herramientas utilizadas?

Se utilizaron herramientas básicas del lenguaje C++ con el fin de:

- Representar de forma estructurada los datos del juego, como los Pokémon y sus ataques.
- Simular un sistema de combate simple mediante turnos.
- Permitir la interacción del usuario a través de la consola.

---

## ¿Por qué se consideraron necesarias estas herramientas?

- `struct`: Para definir objetos personalizados como Pokémon y ataques, lo que permite agrupar datos relacionados.
- Funciones (`mostrarPokemon`, `atacar`): Para mantener el código modular, organizado y reutilizable.
- Entradas y salidas (`cin` y `cout`): Para que el jugador pueda interactuar con el programa fácilmente.
- Arreglos: Para almacenar múltiples ataques por cada Pokémon de manera ordenada.

---

## ¿Cómo se llevó a cabo su implementación?

1. Se definieron las estructuras `Ataque` y `Pokemon` para almacenar los datos principales.
2. Se crearon funciones que permiten mostrar la información de los Pokémon y realizar ataques.
3. En la función principal (`main`), se inicializaron dos Pokémon con sus respectivos ataques.
4. Se implementó un ciclo de turnos en el que ambos Pokémon se atacan alternadamente hasta que uno de ellos llegue a 0 HP.
5. Al finalizar, se imprime en pantalla el ganador de la batalla.

---

## Cómo compilar y ejecutar

### Compilación

Asegúrate de tener instalado un compilador como `g++`. Luego abre una terminal y escribe:

bash
g++ -o batalla main.cpp

## ¿como ejecutarlo ?

./batalla
