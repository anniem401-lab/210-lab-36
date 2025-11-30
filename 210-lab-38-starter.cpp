// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// To Do: Milestone 4
// Your code's menu is functional.

#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

// Function prototype
int main_menu();

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

    // Menu
    int sel = main_menu();
    while (sel != 5) {
        switch (sel) {
            case 1:
                cout << "You chose to add to the record.\n";
                //tree.insertNode();
                break;
            case 2:
                cout << "You chose to delete from the record.\n";

                break;
        }
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

int main_menu() {
    cout << "\n** Main Menu **\n";
    cout << "[1] Add to the record\n";
    cout << "[2] Delete from the record\n";
    cout << "[3] Search the record\n";
    cout << "[4] Modify the record\n";
    cout << "Enter your choice -> ";
    int choice;
    cin >> choice; cout << endl;
    while (choice < 0 || choice > 4) {
        cout << "Invalid input, only select a number between 1-4: ";
        cin >> choice;
    }
    return choice;
}