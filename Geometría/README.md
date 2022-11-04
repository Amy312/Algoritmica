
# Geometría Computacional  

 
 ## Definición  

Geometría Computacional trata de aplicar conceptos geométricos a la programación para poder resolver problemas de esta materia por medio de una computadora.

   
Es decir, un punto y un vector serán definidos por sus coordenadas correspondientes y ambos tendrán acceso a un ángulo y un módulo.
Esto quiere decir que en geometría computacional podemos tratar a un punto como si en realidad fuera un vector. Las rectas serán la 
resta entre dos puntos de tal manera que la recta BA sea equivalente a A-B. Un vector también puede estar definido por la resta entre dos puntos.  
A continuación codificaremos las operaciones básicas entre vectores:  


Para las operaciones se realizarán modificaciones tales que se adapten a base de puntos.  

Para que dos rectas intersecten:  
  * Los puntos que las componen estarán en lados opuestos. Con esto queremos decir que los cuatro extremos se encontrarán alrededor de un punto.  
  * O, algún extremo de alguna de las rectas estará dentro de la otra.  
Así definimos que para que los cuatro extremos estén en lados opuestos, usando una recta como pivote, los productos cruz entre esta recta y los extremos de la otra deben tener signos opuestos. O, en todo caso, el área entre una recta y un extremo debe ser 0 y el extremo debe encontrarse dentro de la recta.  


 
Si queremos saber si un punto se encuentra dentro de un polígono convexo tan solo basta con verificar que las áreas que forma el punto con todos los pares de vértices [V<sub>i</sub>,V<sub>i+1</sub>] tienen el mismo signo. Este algoritmo tiene una complejidad de O(N).  

## Código
  * [Geometria](https://github.com/Amy312/Algoritmica/blob/main/Geometr%C3%ADa/geometria.cpp)  -C++

## Bibliografía  
A, A. (s. f.). [Scalar Product of Vectors](http://hyperphysics.phy-astr.gsu.edu/hbase/vsca.html). HyperPhysics.  
Easy Math. (2017). [10. Unit vectors, what are they and how to calculate them? With graphic | vector calculus](https://www.youtube.com/watch?v=cfe-IS-gNoU). YouTube.  
Lambers, J. (2009-2010). [Equations of Lines](https://www.math.usm.edu/lambers/mat169/fall09/lecture25.pdf). The University of Southern Mississippi: School of Mathematics and Natural Sciences.   
Math's Fun. (s. f.). [Cross Product](https://www.mathsisfun.com/algebra/vectors-cross-product.html). Rod Pierce.  
