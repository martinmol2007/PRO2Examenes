#include <cassert>
#include <iostream>
#include <list>
#include <sstream>
using namespace std;

/**
 * @pre  cierto
 * @post se devuelve si l1 y l2 son iguales de forma circular
 */
bool circularly_equal(const list<int>& L1, const list<int>& L2);

list<int> read_list(string line) {
	list<int> result;
	istringstream iss(line);
	int elem;
	while (iss >> elem) {
		result.push_back(elem);
	}
	return result;
}

void read_comment() { // read comment line (starting with #)
	string line;
	if (getline(cin, line)) {
		assert(line[0] == '#');
	}
}

int main() {
	string line1, line2;
	read_comment();
	// Ensure we read two consecutive lines, one for each list
	while (getline(cin, line1) && getline(cin, line2)) {
		const list<int> L1 = read_list(line1);
		const list<int> L2 = read_list(line2);
		if (circularly_equal(L1, L2)) {
			cout << "Iguales" << endl;
		} else {
			cout << "Diferentes" << endl;
		}
		read_comment();
	}
	return 0;
}
