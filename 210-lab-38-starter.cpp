// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// To Do: Milestone 3
// Your code successfully creates a BST from the records 
// and outputs it using the method of your choosing. 

#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

int main() {
    IntBinaryTree tree;

    cout << "\n** Start of project **";
    // Values in the tree
    cout << "\nCreating a BST and inserting nodes...\n";
    tree.insertNode("Test1");
    tree.insertNode("Test2");
    tree.insertNode("Test3");
    tree.insertNode("Test5");

    // Value display
    cout << "Displaying initial values in the tree:\n";
    tree.displayInOrder();

    /*
    // Adding a value
    cout << "\nAdding Test4...\n";
    tree.insertNode("Test4");

    // Deleting a value
    cout << "\nDeleting Test5...\n";
    tree.remove("Test5");

    // Search and modify records
    // Code

    cout << "\nDisplaying current values in the tree:\n";
    tree.displayInOrder(); cout << endl;
    */

    // Checking file
    cout << "\nFinding file 'codes.txt' to access...\n";
    ifstream fin;
    fin.open("codes.txt");
    if (fin.good()) {
        cout << "File accessed.\n";
        fin.close();
    }
    else {
        cout << "File not found.\n";
    }
    cout << "\n1. Project is set up and running using the provided files.";
    cout << "\n2. Code modification from int to strings is complete, and code exercises this for testing.";
    return 0;
}