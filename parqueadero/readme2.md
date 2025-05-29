# Sistema de Parqueadero – Proyecto en Python

## Descripción

Este proyecto simula un sistema de administración básica de parqueadero. Permite al usuario gestionar la disponibilidad de espacios, registrar la entrada y salida de vehículos, calcular el tiempo de permanencia y el valor a pagar, todo desde la terminal, usando Python.

---

## ¿Para qué se implementó?

Este sistema fue implementado para cumplir con los requisitos del proyecto de programación propuesto en el parcial. Representa una aplicación simple pero funcional que simula un parqueadero real de manera textual.

---

## ¿Por qué se consideró necesario?

Porque es una oportunidad para aplicar conceptos fundamentales de programación como:

- Estructuras de datos (listas y diccionarios)
- Manejo de fechas y horas
- Visualización de datos en consola
- Control de flujo con condicionales y bucles

Además, permite desarrollar habilidades prácticas para representar y administrar información de forma ordenada y clara.

---

## ¿Cómo se llevó a cabo su implementación?

1. Se creó una **matriz 8x8** que representa el mapa del parqueadero.
   - `"L"` indica espacio libre.
   - `"X"` indica espacio ocupado.
   - `"E"` es la entrada.
   - `"S"` es la salida.

2. Se usó un **diccionario** llamado `vehiculos` para guardar:
   - La placa del carro
   - La hora de entrada
   - La posición en el mapa

3. Se implementaron dos funciones principales:
   - `ingresar()`: busca el primer espacio libre y registra el vehículo
   - `retirar()`: libera el espacio, calcula el tiempo transcurrido y muestra el total a pagar

4. El sistema cobra **1 unidad por cada 10 segundos** de permanencia (modo prueba).

5. Todo el programa se maneja desde un **menú de texto en consola**.

---

## Cómo ejecutar el programa

Este programa no se compila (como en C++), sino que se **ejecuta directamente** usando Python 3.

### Paso 1 – Abrir terminal y ubicarse en la carpeta del proyecto:
```bash
cd parqueadero
