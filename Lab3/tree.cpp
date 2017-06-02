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

		//for (int fSlash = 0; fSlash <= (2 * level); fSlash++) {
			cout << "/";
		//}
		for (int spaces2 = 0; spaces2 < (2 * level); spaces2++) {
			cout << " ";
		}


		//for (int bSlash = 0; bSlash <= (treeHeight - level); bSlash++) {
			cout << "\\";
		//}

		/*for (int spaces2 = 0; spaces2 < (treeHeight - level - 1); spaces2++) {
			cout << " ";
		}*/

		//should be code for spaces inside the triangle. How do I get them in there?
		/*for (int baseline = 0; baseline < (level * 2); baseline++) {
			cout << "-";
		}*/

		cout << endl;
	}

	//prints the baseline of the triangle
	for (int baseline = 0; baseline < (treeHeight * 2); baseline++) {
		cout << "-";
	}
	cout << endl;

	

	system ("pause");
	return 0;
}
