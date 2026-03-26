#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main () {
    string comando;
    map<string, int> nom_edad;
    map<int, set<string>> edad_lista;

    while (cin >> comando) {
        if (comando == "NEWPERSON") {
            string nombre;
            int edad;

            cin >> nombre >> edad;

            nom_edad.insert({nombre, edad});
            edad_lista[edad].insert(nombre);
        } 
        else if (comando == "BIRTHDAY") {
            string nombre;
            cin >> nombre;

            int antes = nom_edad[nombre];
            nom_edad[nombre]++;
            int despues = nom_edad[nombre];

            auto it = edad_lista[antes].find(nombre);
            edad_lista[antes].erase(it);
            edad_lista[despues].insert(nombre);
        }
        else if (comando == "NUMBERWITHAGE" ) {
            int num;
            cin >> num;

            cout << edad_lista[num].size() << endl;
        }
        else if (comando == "PEOPLEWITHAGE") {
            int num;
            cin >> num;
            
            int i = 0;
            int n = edad_lista[num].size();

            for (auto it = edad_lista[num].begin(); it != edad_lista[num].end(); it++) {
                cout << (*it);
                if (i < n-1) cout << " ";
                i++;
            }
            cout << endl;
        }
    }
    return 0;
}
