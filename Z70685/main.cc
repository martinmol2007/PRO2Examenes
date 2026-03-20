#include <algorithm>
#include <iostream>

#include <vector>
#include <map>

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

    // first-> Palabra ordenada. second-> Vector con la misma palabra ordenada
    map<string, vector<string>> mapa; 

    while (cin >> s) {
        string ordenat = sort_chars(s);
        auto it = mapa.find(ordenat);
        if (it != mapa.end()) {
            (*it).second.push_back(s);
        } else {
            vector<string> v;
            v.push_back(s);
            mapa.insert({ordenat, v});
        }
    }

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        vector<string> res;
        if ((*it).second.size() > 1) {
            res = it->second;

            map<string, bool> mapa2;
            for (int j = 0; j < res.size(); j++) {
                mapa2.insert({res[j], false});
            }

            for (auto it2 = mapa2.begin(); it2 != mapa2.end(); it2++) {
                cout << it2->first;
                if (it2 != mapa2.end()--) {
                    cout <<  " ";
                }
            }
            cout << endl;
        }
    }
}