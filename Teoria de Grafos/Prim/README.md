# PRIM
Al igual que el algoritmo de Kruskal, el algoritmo de Prim también es un algoritmo Greedy. El algoritmo de Prim siempre comienza con un solo nodo y se mueve
a través de múltiples nodos adyacentes para explorar todos los bordes conectados a lo largo del camino. Comienza con un árbol de expansión vacío. La idea es
mantener dos conjuntos de vértices. El primer conjunto contiene los vértices ya incluidos en el MST, el otro conjunto contiene los vértices aún no incluidos.
En cada paso, considera todos los bordes que conectan los dos conjuntos y selecciona el borde de peso mínimo entre estos bordes. Con el borde seleccionado,
arrastre el otro extremo del borde al ensamblaje que contiene MST. Un grupo de aristas que conecta dos conjuntos de vértices en un gráfico se llama corte en
la teoría de grafos. Entonces, en cada paso del algoritmo de Prim, encuentra un corte (de dos conjuntos, uno contiene los vértices ya incluidos en MST y el
otro contiene el resto de los vértices), elige el borde de peso mínimo del corte e incluye este vértice para el MST conjunto 
(el conjunto que contiene los vértices ya incluidos).
![PRIM](https://raw.githubusercontent.com/xibsked/menka/master/books/design-analysis-of-algorithm/706a6a0a86851e378f23c49a3464baf41.png)
## Código base
-  [PRiM](prim.cpp) - _C++_

## Problemas
-  [PRIM example](https://www.gatevidyalay.com/prims-algorithm-prim-algorithm-example/)


## Referencias 
-  [Prim’s Minimum Spanning Tree ](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/)
## Videos
-  [Algoritmo de Prim en 2 minutos](https://www.youtube.com/watch?v=cplfcGZmX7I)
