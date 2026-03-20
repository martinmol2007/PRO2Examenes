#include "fruit.hh"
#include <list>

using namespace std;

/**
 * @brief Fusiona dues llistes ordenades preservant l'ordre.
 * 
 * @param a Llista ordenada.
 * @param b Llista ordenada.
 * 
 * @return Llista ordenada amb els elements d'a i b.
 */
list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b) {
    list<Fruit> lista;

    list<Fruit>::const_iterator it1 = a.begin();
    list<Fruit>::const_iterator it2 = b.begin();
    

    while (it1 != a.end() && it2 != b.end()) {
        if ((*it1).is_greater_than((*it2))) {
            lista.push_back((*it1));
            it1++;
        } else {
            lista.push_back((*it2));
            it2++;
        }
    }

    while (it1 != a.end()) {
        lista.push_back((*it1));
        it1++;
    }

    while (it2 != b.end()) {
        lista.push_back((*it2));
        it2++;
    }

    return lista;
}