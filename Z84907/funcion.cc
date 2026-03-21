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
bool is_correct_html(istream& in) { 
    string word; int cont = 0; stack<string> pila; 
    // Llegeix cada paraula del canal d'entrada in mentre es pugui 
    while (in >> word) { 
        if (is_tag(word) && not is_close_tag(word)) { 
            if (tag_name(word) == "html") cont++; 
            if (cont >= 2) return false; 
            pila.push(word); 
        } 
        else if (is_tag(word) && is_close_tag(word) && not pila.empty()) { 
            string tag = tag_name(pila.top()); 
            if (tag_name(word) == tag) pila.pop(); 
            else return false; 
        } 
        else if (is_tag(word) && is_close_tag(word) && pila.empty()) { 
            return false; 
        } 
    } 
    bool bien; 
    if (cont == 1 && pila.empty()) bien = true; 
    else bien = false; 
    return bien; 
}