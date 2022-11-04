
# Geometría Computacional  

 
 ### Definición  

Geometría Computacional se refiere a la aplicación de conceptos geométricos a la programación para poder resolver problemas de esta materia por medio de una computadora.  
En esta materia el enfoque estará en el plano cartesiano de dos dimensiones e interacciones entre puntos, rectas y vectores.  
Para empezar, un punto y un vector, a pesar de ser dos objetos distintos, pueden ser representados de la misma manera en código:  
  
   
Es decir, un punto y un vector serán definidos por sus coordenadas correspondientes y ambos tendrán acceso a un ángulo y un módulo.
Esto quiere decir que en geometría computacional podemos tratar a un punto como si en realidad fuera un vector. Las rectas serán la 
resta entre dos puntos de tal manera que la recta BA sea equivalente a A-B. Un vector también puede estar definido por la resta entre dos puntos.  
A continuación codificaremos las operaciones básicas entre vectores:  


La adición y la substracción son simples. Simplemente la aplicaremos entre las coordenadas x y y por separado para obtener un nuevo punto/vector.  
  
  
  
Si un punto se encuentra en una recta, entonces:  
   * No podrá formar un triángulo con ella, porque no se puede tener un triángulo con área 0.  
   * No podrá ser más grande o más pequeño que ninguno de los dos extremos de la recta. Con esto queremos decir que sus coordenadas se encontrarán en un rango específico. Es decir: A.x||B.x<=P.x<=A.x||B.x && A.y||B.y<=P.y<=A.y||B.y  


Para que dos rectas intersecten:  
  * Los puntos que las componen estarán en lados opuestos. Con esto queremos decir que los cuatro extremos se encontrarán alrededor de un punto.  
  * O, algún extremo de alguna de las rectas estará dentro de la otra.  
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Así definimos que para que los cuatro extremos estén en lados opuestos, usando una recta como pivote, los productos cruz entre esta recta y los extremos de la otra deben tener signos opuestos. O, en todo caso, el área entre una recta y un extremo debe ser 0 y el extremo debe encontrarse dentro de la recta.  


Teniendo un conjunto de puntos P, queremos saber qué puntos forman el polígono convexo que engloba a todos los demás. Para esto deberemos ir tomando puntos de menor a mayor (lo que implica un ordenamiento de complejidad O(NlogN)) y empezaremos a evaluar si es que el rote de un vértice V<sub>k-1</sub> a un vértice V<sub>i</sub> con el vértice V<sub>k-2</sub> como pivote es positivo, donde k es el número de puntos que ya han sido posicionados en el polígono e i es el punto que está siendo evaluado. Si es que el rote no fuera positivo, se reduciría k para ver qué vértice debe ser reemplazado. Este proceso se repetirá para la parte superior del polígono, donde simplemente emplearemos una variable t para asegurarnos que estamos armando la parte correcta y no se tienene vértices repetidos.  
Debido al ordeamiento de los puntos este algoritmo es de complejidad O(NlogN), porque los bucles que le siguen al ordenamiento son de complejidad O(N) y no tienen efecto en la complejidad final.  
 
Si queremos saber si un punto se encuentra dentro de un polígono convexo tan solo basta con verificar que las áreas que forma el punto con todos los pares de vértices [V<sub>i</sub>,V<sub>i+1</sub>] tienen el mismo signo. Este algoritmo tiene una complejidad de O(N).  
   ### Código
  * [Código](https://github.com/marinovivianUPB/Algoritmica/blob/main/Geometria%20Computacional/main.cpp)  

## Bibliografía  
A, A. (s. f.). [Scalar Product of Vectors](http://hyperphysics.phy-astr.gsu.edu/hbase/vsca.html). HyperPhysics.  
Easy Math. (2017). [10. Unit vectors, what are they and how to calculate them? With graphic | vector calculus](https://www.youtube.com/watch?v=cfe-IS-gNoU). YouTube.  
Lambers, J. (2009-2010). [Equations of Lines](https://www.math.usm.edu/lambers/mat169/fall09/lecture25.pdf). The University of Southern Mississippi: School of Mathematics and Natural Sciences.   
Math's Fun. (s. f.). [Cross Product](https://www.mathsisfun.com/algebra/vectors-cross-product.html). Rod Pierce.  
