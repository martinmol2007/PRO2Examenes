#include <iostream>
#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"

using namespace std;
using namespace pro2;

bool tree_all_leaves_equal_aux (BinTree<int> t, int& val) {
    // Estamos en una hoja
    if (t.left().empty() && t.right().empty()) {
        val = t.value();
        return true;
    }

    int val_izq, val_der;

    if (not tree_all_leaves_equal_aux(t.left(), val_izq)) return false;

    if (not tree_all_leaves_equal_aux(t.right(), val_der)) return false;

    if (val_izq != val_der) return false;

    val = val_izq;
    return true;
}

/**
 * @brief Determina si totes les fulles d'un arbre tenen 
 *        el mateix valor.
 * 
 * @param  t  Un arbre binari d'enters
 * @returns  `true` si totes les fulles són iguals, 
 *           `false` altrament.
 *
 * @pre  En tots els subarbres de `t` es compleix: o bé són 
 *       fulles, o bé les dues branques són no buides.
 */
bool tree_all_leaves_equal(BinTree<int> t) {
    if (t.empty()) return true;
    int val;
    return tree_all_leaves_equal_aux(t, val);
}
