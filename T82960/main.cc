#include <cassert>
#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

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
bool tree_all_leaves_equal(BinTree<int> t);

//

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << (tree_all_leaves_equal(t) ? "true" : "false") << endl;
    }
}

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<int>(line);
        cout << (tree_all_leaves_equal(t) ? "true" : "false") << endl;
    }
}

int main() {
    string line;
    getline(cin, line);
    if (line == "visual") {
        main_visual();
    } else if (line == "inline") {
        main_inline();
    } else {
        assert(false);
    }
    return 0;
}