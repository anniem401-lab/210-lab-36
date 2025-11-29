// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// To Do: Milestone 4
// Your code's menu is functional.

#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

int main() {
    IntBinaryTree tree;

    // Checking file
    ifstream fin;
    fin.open("codes.txt");
    if (fin.good()) {
        string code;

        while (fin >> code) {
            tree.insertNode(code);
        }
        fin.close();
    }
    else {
        cout << "File not found.\n";
    }

    // Value display
    tree.displayInOrder();
    cout << "Display of initial codes in the tree.\n";

    /*
    // Adding a value
    cout << "\nAdding a code to the tree...\n";
    tree.insertNode("");

    // Deleting a value
    cout << "\nDeleting a code from the tree...\n";
    tree.remove("");

    // Search and modify records
    // Code

    cout << "\nDisplaying current codes in the tree:\n";
    tree.displayInOrder(); cout << endl;
    */

    cout << "\n1. Project is set up and running using the provided files.";
    cout << "\n2. Code modification from int to strings is complete, and code exercises this for testing.";
    cout << "\n3. Code successfully creates a BST from the records and outputs it using the method of my choosing.";
    return 0;
}