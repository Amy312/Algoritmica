# Trie
En ciencias de la computación se conoce como trie, digital tree o prefix tree a un árbol de busqueda. Se usa para guardar un set dinamico o un array asociativo en el que las llaves son usualmente strings.
Para ponerlo en palabras simples, podemos usar el Trie como un diccionario, en el que cuardamos palabras en base a prefijos.
![Trie](https://1.bp.blogspot.com/_kRev2kjeMro/S7Xtql_DlfI/AAAAAAAACKI/8pQFTiifsk0/s1600/TRIE+ADT.png)

# Suffix Trie
Un Árbol de sufijos T es una mejora natural sobre el trie utilizado en el problema de coincidencia de patrones, el que se define sobre un conjunto de subcadenas de una cadena s. La idea es muy simple aquí. Tal trie puede tener largos caminos sin ramas. Si solo podemos reducir estos caminos largos en un solo salto, reduciremos significativamente el tamaño del trie, por lo que este es un gran primer paso para mejorar la complejidad de las operaciones en dicho árbol. Este trie reducido definido sobre un subconjunto de sufijos de una cadena s se denomina árbol de sufijos de s 

Para una mejor comprensión, consideremos el árbol de sufijos T para una cadena s = abakan. Una palabra abakan tiene 6 sufijos {abakan , bakan, akan, kan, an, n} y su árbol de sufijos se ve así: 


![Suffix Trie](https://he-s3.s3.amazonaws.com/media/uploads/fa2b26c.jpg)

Los árboles de sufijos pueden resolver muchos problemas complicados, porque contienen mucha información sobre la cadena en sí. Por ejemplo, para saber cuántas veces ocurre un patrón P en s, es suficiente encontrar P en T y devolver el tamaño de un subárbol correspondiente a su nodo. Otra aplicación bien conocida es encontrar el número de subcadenas distintas de s, y se puede resolver fácilmente con el árbol de sufijos, aunque el problema parece muy complicado a primera vista.


## Código base
-  [Trie](ArrayTrie.cpp) - _C++_
-  [Trie con mapa](mapTrie.cpp) - _C++_
-  [Suffix Tree](SuffixTree.cpp) - _C++_


## Implementación Delete
-  [Delete](DeleteWord.cpp) . _C++_

## Referencias 
-  [Trie data structure cheat sheet for coding interviews](https://medium.com/quick-code/trie-data-structure-cheat-sheet-for-coding-interviews-a828fd374b84)
-  [The Trie Data Structure: A Neglected Gem](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
-  [Trie](https://www.interviewcake.com/concept/java/trie)
-  [SuffixTrie](https://www.hackerearth.com/practice/notes/trie-suffix-tree-suffix-array/)
-  [SuffixTree code](https://www.sanfoundry.com/cpp-program-implement-suffix-tree/)
-  [SuffixTree code2](https://kalkicode.com/suffix-tree-implementation-in-cpp)

