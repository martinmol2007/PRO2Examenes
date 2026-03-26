#include "BinTree.hh"

int aux (BinTree<int> t, int n) {
    if (t.empty()) return 0;
    if (t.left().empty() && t.right().empty()) return t.value();
    
    int izq = aux (t.left(), n + t.value()); // Devuelve la suma del hijo izq
    int der = aux (t.right(), n + t.value()); // Devuelve la suma del hijo der
    
    return t.value() + max(izq, der);

   
}

/**
 * @pre:  t conté naturals positius en els seus nodes.
 * @post: Retorna la suma màxima que es pot obtenir sumant els valors que 
 *        es troben en un camí descendent des de l'arrel fins a alguna fulla.
 */ 
int maxSumDescPath(BinTree<int> t) {
    return aux (t, 0);
}