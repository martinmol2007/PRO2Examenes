#include <iostream>
#include <sstream>
#include "html_elem.hh"

#include <stack>
#include <string>

using namespace std;

// Corespondecnia con los tags
// Un sol tag html
// NOO dos secuencias html seguidas

/**
 * @brief Determina si una seqüència de paraules és una pàgina HTML correcta
 * 
 * @param in Un `stream` d'entrada d'on llegir les paraules
 * @returns `true` si la seqüència llegida de `in` és una pàgina HTML, `false` altrament.
 */
bool is_correct_html(istream& in) ;


int main() {
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        cout << (is_correct_html(iss) ? "HTML" : "text") << endl;
    }
    return 0;
}
