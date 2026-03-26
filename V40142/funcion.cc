#include "BinTree.hh"

using namespace std;

int aux (const vector<char>& word, int n, BinTree<char> t) {
    if (t.empty()) return 0;
    if (t.value() != word[n]) return 0;
    if (t.value() == word[n] && n == word.size()-1) return 1;
    else {
        n += 1;
        int izq = aux (word, n, t.left());
        int der = aux (word, n, t.right());
        return izq + der;
    }

}

/**
 * @pre  `word` tiene almenos una letra
 * @post se retorna el número de caminos que contienen la palabra `word`
 *       desde la raíz
 */
int count_word_in_paths(const vector<char>& word, const BinTree<char>& T) {
    return aux (word, 0, T);
}