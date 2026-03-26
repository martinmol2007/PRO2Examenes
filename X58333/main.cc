#include <iostream>
using namespace std;

#include "maxSumDescPath.hh"

int main() {
	string format;
	getline(cin, format);

	BinTree<int> tree;
	tree.setInputOutputFormat(format == "INLINEFORMAT" ? BinTree<int>::INLINEFORMAT
													   : BinTree<int>::VISUALFORMAT);

	while (cin >> tree and not tree.empty()) {
		cout << maxSumDescPath(tree) << endl;
	}
}
