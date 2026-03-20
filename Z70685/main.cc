#include <algorithm>
#include <iostream>

#include <vector>
#include <map>
#include <set>

using namespace std;

/**
 * @brief Retorna un nou string amb les lletres de
 *        `s` ordenades
 *
 * @param  s  un `string`
 * @returns Un nou string amb les lletres de `s` ordenades
 */
string sort_chars(string s) {
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    return sorted;
}

int main() {
    string s;

    // first -> palabra ordenada
    // second -> palabras que tienen esa misma firma
    map<string, vector<string>> mapa; 

    while (cin >> s) {
        string ordenat = sort_chars(s);
        mapa[ordenat].push_back(s);
    }

    for (auto it = mapa.begin(); it != mapa.end(); ++it) {
        set<string> unicas(it->second.begin(), it->second.end());

        if (unicas.size() > 1) {
            int i = 0;
            for (auto it2 = unicas.begin(); it2 != unicas.end(); ++it2) {
                cout << *it2;
                if (i != (int)unicas.size() - 1) cout << " ";
                ++i;
            }
            cout << endl;
        }
    }
}