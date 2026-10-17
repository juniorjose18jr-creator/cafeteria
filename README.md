# Asistencia y examen final

Programa en C++ que determina si un estudiante puede presentar el examen final según su porcentaje de asistencia.

## Funcionamiento
1. El programa pide el porcentaje de asistencia con `cin`.
2. Usa `if – else` con el operador de comparación `>=`:
   - Si la asistencia es 80 % o más, muestra que puede presentar el examen.
   - De lo contrario, muestra que debe reponer clases.

## Pruebas
- 80  -> Puede presentar el examen final
- 79  -> Debe reponer clases
- 100 -> Puede presentar el examen final

## Compilación
g++ asistencia.cpp -o asistencia
./asistencia
