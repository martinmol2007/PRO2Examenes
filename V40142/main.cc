#include <cassert>
#include <iostream>
#include <list>
#include <sstream>
#include "BinTree.hh"
using namespace std;

/**
 * @pre  `word` tiene almenos una letra
 * @post se retorna el número de caminos que contienen la palabra `word`
 *       desde la raíz
 */
int count_word_in_paths(const vector<char>& word, const BinTree<char>& T);

int main() {
	string line;
	while (getline(cin, line)) {
		istringstream iss(line);
		string word;
		BinTree<char> tree;
		iss >> word >> tree;
		vector<char> vword(word.begin(), word.end());
		cout << count_word_in_paths(vword, tree) << endl;
	}
	return 0;
}
