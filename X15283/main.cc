#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

void sacar_pila (stack<char>& pila) {
    stack<char> aux;
    while (not pila.empty()) {
        aux.push(pila.top());
        pila.pop();
    }

    while (not aux.empty()) {
        cout << aux.top();
        aux.pop();
    }
    cout << endl;
    return;
}

/* NORMAS
() -> 
[] ->
(] -> ]
*/

int main () {
    string line;
    while (getline(cin, line)) {
        stringstream in(line);

        stack<char> pila;

        char c;
        while (in >> c) {
            if (c == '(' or c == '[') {
                pila.push(c);
            }
            else if (c == ')') {
                if (not pila.empty()) {
                    if (pila.top() == '(') {
                        pila.pop();
                    }
                    else {
                        pila.push(c);
                    }
                } 
                else {
                    pila.push(c);
                }
            }
            else {
                if (not pila.empty()) {
                    if( pila.top() == '[' ) {
                        pila.pop();
                    }
                    else if ( pila.top() == '(') {
                        pila.pop();
                        pila.push(c);
                    }
                } 
                else {
                    pila.push(c);
                }
            }
        }
        sacar_pila(pila);
    }
}