//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab3 - Tree

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	cout << "***===***===Lab3 - Tree===***===***\n";
	cout << "This program makes an ANSII tree with a height specified by the user.\n\n";

	double treeHeight = 0.0;

	cout << "How tall should the tree be?: "; 
	cin >> treeHeight; cout << endl;

	if (treeHeight < 3 || treeHeight > 15) {
		cout << "Error. Tree dimensions are out of bounds.\n";
		exit (0);
	}

	system ("pause");
	return 0;
}
