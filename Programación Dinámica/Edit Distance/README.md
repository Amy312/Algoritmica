# Edit Distance
Dadas dos cadenas str1 y str2 y por debajo de las operaciones que se pueden realizar en str1.
Encuentre el número mínimo de ediciones (operaciones) requeridas para convertir 'str1' en 'str2'.
• Insertar
• Remover
• Reemplazar
Todas las operaciones anteriores son de igual costo.
La idea es procesar todos los caracteres uno por uno comenzando desde el lado izquierdo o derecho
de ambas cadenas.
Para atravesar desde la esquina derecha, hay dos posibilidades para cada par de caracteres que se
atraviesan.


![Solved Problem](https://www.researchgate.net/publication/337461648/figure/fig3/AS:828225206902784@1574475685125/An-example-of-the-minimum-edit-distance-algorithm-The-left-sub-figure-show-the-F-matrix.ppm)

## Algoritmo Base
### Código
-  [Edit Distance](editDistance.cpp) - _C++

## Problemas
-  [Edit Distance](https://leetcode.com/problems/edit-distance/)

## Referencias
### Sitios Web 
-  [implementation](https://www.geeksforgeeks.org/edit-distance-dp-5/)


