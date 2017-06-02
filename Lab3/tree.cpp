//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab3 - Tree

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	cout << "***===***===Lab3 - Tree===***===***" << endl;
	cout << "This program makes an ANSII tree with a height specified by the user." << endl << endl;

	int treeHeight;

	cout << "How tall should the tree be?: "; 
	cin >> treeHeight;

	if (treeHeight < 3 || treeHeight > 15) {
		cout << "Error. Tree dimensions are out of bounds." << endl;
		return 0;
	}

	for (int level = 0; level < treeHeight; level++) {
		for (int topSpaces = 0; topSpaces < treeHeight - level - 1; topSpaces++) {
			cout << " ";
		}

		cout << "/";

		for (int insideSpaces = 0; insideSpaces < 2 * level; insideSpaces++) {
			cout << " ";
		}

		cout << "\\";
		cout << endl;
	}

	for (int baseline = 0; baseline < (treeHeight * 2); baseline++) {
		cout << "-";
	}

	cout << endl;

	for (int level = 0; level < (treeHeight / 2); level++) {
		for (int leftSpace = 0; leftSpace < (treeHeight - 1); leftSpace++) {
			cout << " ";
		}

		cout << "||";
		cout << endl;
	}

	system ("pause");
	return 0;
}
