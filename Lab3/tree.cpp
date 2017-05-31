//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab3 - Tree

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	cout << "***===***===Lab3 - Tree===***===***\n";
	cout << "This program makes an ANSII tree with a height specified by the user.\n\n";

	int treeHeight;

	cout << "How tall should the tree be?: "; 
	cin >> treeHeight; cout << endl;

	//limits of the tree
	if (treeHeight < 3 || treeHeight > 15) {
		cout << "Error. Tree dimensions are out of bounds.\n";
		return 0;
	}

	//Height of tree
	for (int level = 0; level <= treeHeight; level++) {
		//prints spaces above tree, leading spaces
		for (int outerSpaces = 0; outerSpaces < treeHeight - level - 1; outerSpaces++) {
			cout << " ";
		}
		for (int edge = 0; edge <= (2 * level - 1); edge++) {
			if (level == treeHeight || edge == 1|| edge == (2 * level+1)) {
				cout << "X";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	system ("pause");
	return 0;
}
