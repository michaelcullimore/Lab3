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
	cin >> treeHeight;

	//limits of the tree
	if (treeHeight < 3 || treeHeight > 15) {
		cout << "Error. Tree dimensions are out of bounds.\n";
		return 0;
	}

	//Height of tree
	for (int level = 0; level < treeHeight; level++) {
		//prints spaces above tree, leading spaces
		for (int spaces = 0; spaces < treeHeight - level - 1; spaces++) {//good
			cout << " ";
		}

		//prints the forward slashes
		cout << "/";

		//spaces inside the "triangle"
		for (int spaces2 = 0; spaces2 < (2 * level); spaces2++) {
			cout << " ";
		}

		//prints the back slashes
		cout << "\\";

		cout << endl;
	}

	//prints the baseline of the triangle
	for (int baseline = 0; baseline < (treeHeight * 2); baseline++) {
		cout << "-";
	}

	cout << endl;

	for (int underSpace = 0; underSpace < (treeHeight - 1); underSpace++) {
		cout << "x";
	}

	system ("pause");
	return 0;
}
