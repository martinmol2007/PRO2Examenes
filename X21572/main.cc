#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string comando;

    map<string, int> deben;     // aquí guardamos saldo NEGATIVO
    map<string, int> no_deben;  // aquí guardamos saldo >= 0

    while (cin >> comando) {
        if (comando == "TRANSACTION") {
            string nombre;
            cin >> nombre;

            int num;
            cin >> num;

            auto it = no_deben.find(nombre);
            auto it2 = deben.find(nombre);

            if (it == no_deben.end() && it2 == deben.end()) {
                if (num >= 0) {
                    no_deben.insert({nombre, num});
                } else {
                    deben.insert({nombre, num});
                }
            }
            else if (it != no_deben.end()) {
                if (num >= 0) {
                    no_deben[nombre] += num;
                }
                else {
                    int saldo = no_deben[nombre] + num;
                    no_deben.erase(it);

                    if (saldo >= 0) no_deben.insert({nombre, saldo});
                    else deben.insert({nombre, saldo});
                }
            } else {
                if (num >= 0) {
                    int saldo = deben[nombre] + num;
                    deben.erase(it2);

                    if (saldo >= 0) no_deben.insert({nombre, saldo});
                    else deben.insert({nombre, saldo});
                } else {
                    deben[nombre] += num;
                }
            }
        }
        else if (comando == "NUMBERINRED") {
            cout << deben.size() << endl;
        } 
        else {  // PEOPLEINRED
            bool primero = true;
            for (auto it = deben.begin(); it != deben.end(); ++it) {
                if (!primero) cout << " ";
                cout << it->first;
                primero = false;
            }
            cout << endl;
        }
    }
    return 0;
}