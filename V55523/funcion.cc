#include <list>

using namespace std;

/**
 * @pre  cierto
 * @post se devuelve si l1 y l2 son iguales de forma circular
 */
bool circularly_equal(const list<int>& L1, const list<int>& L2) {
    if (L1.empty() && L2.empty()) return true;
    if (L1.size() != L2.size()) return false;

    int n = L1.size();
    list<int> lista = L1;


    for (int i = 0; i < n; i++) {
        if (lista == L2) {
            return true;
        } else {
            auto it = lista.begin();
            int num = *it;
            lista.erase(it);
            lista.insert(lista.end(), num);
        }
    }

    return false;
}