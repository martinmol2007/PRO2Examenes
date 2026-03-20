#include "fruit.hh"
#include <iostream>
#include <sstream>
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
list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b);

list<Fruit> read_fruits() {
    list<Fruit> fruits;
    string line;
    while (getline(cin, line) && !line.empty()) {
        string name;
        int price;
        istringstream iss(line);
        iss >> name >> price;
        fruits.push_back(Fruit(name, price));
    }
    return fruits;
}

int main() {
    list<Fruit> a = read_fruits();
    list<Fruit> b = read_fruits();
    list<Fruit> result = fusio_ordenada(a, b);
    for (const Fruit& f : result) {
        cout << f.name() << " " << f.price() << endl;
    }
}