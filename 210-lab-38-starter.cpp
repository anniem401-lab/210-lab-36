// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// To Do: Milestone 1
// Project is set up and running using the provided files.

#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    IntBinaryTree tree;

    cout << "\n** Start of project **";
    // Values in the tree
    cout << "\nCreating a BST and inserting nodes...\n";
    tree.insertNode(3);
    tree.insertNode(6);
    tree.insertNode(9);
    tree.insertNode(12);

    // Value display
    cout << "Displaying initial values in the tree:\n";
    tree.displayInOrder();

    // Deleting a value
    cout << "\nDeleting 12...\n";
    tree.remove(12);

    cout << "\nDisplaying current values in the tree:\n";
    tree.displayInOrder(); cout << endl;

    // Checking file
    cout << "Finding file 'codes.txt' to access...\n";
    ifstream fin;
    fin.open("codes.txt");
    if (fin.good()) {
        cout << "File accessed.\n\n";
        fin.close();
    }
    else {
        cout << "File not found.\n";
    }

    cout << "Project is set up and running using the provided files.";
    return 0;
}