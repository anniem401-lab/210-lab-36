// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// Header files
#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
#include <string>
using namespace std;

// Function prototype
int main_menu();

int main() {
    IntBinaryTree tree; // BST initialized

    // Checking file
    ifstream fin;
    fin.open("codes.txt"); // File opened
    if (fin.good()) {
        string codes;

        while (fin >> codes) {
            tree.insertNode(codes);
        }
        fin.close(); // File closed
    }
    else { // Error handling
        cout << "\nERROR: File not found! Check the file and try again.";
        return 1; // Exits out the program entirely
    }

    // Value display
    tree.displayInOrder();
    cout << "\nNote:\n";
    cout << "-The codes above are displayed by InOrder method.\n";
    cout << "-Codes are mixed numbers & letters, 8 characters long.\n";

    // Menu
    int sel = main_menu();
    string code;
    while (sel != 6) {
        switch (sel) {
        
            case 1:
                cout << "\nYou chose to add to the record.\n";
                cout << "Type in a code (Codes are 8 characters long with letters & numbers): ";
                cin >> code;
                if (code.size() == 8) { // Input validation
                    tree.insertNode(code);
                    cout << code << " inserted!\n";
                }
                else {
                    cout << "Code must be 8 characters long with letters & numbers. Try again.";
                }
                break;
            case 2:
                cout << "\nYou chose to delete from the record.\n";
                cout << "Enter a code to delete (Codes are 8 characters long with letters & numbers): ";
                cin >> code;
                if (tree.searchNode(code)) { // Input validation
                    cout << code << " found!\n";
                    tree.remove(code);
                    cout << code << " removed!\n";
                }
                else {
                    cout << code << " doesn't exist in the record! Try again.\n";
                }
                break;
            case 3:
                cout << "\nYou chose to search the record.\n";
                cout << "Type in a code to search for (Codes are 8 characters long with letters & numbers): ";
                cin >> code;
                if (tree.searchNode(code)) { // Input validation
                cout << code << " has been found!\n";
                }
                else {
                    cout << code << " not found! Try again.\n";
                }
                break;
            case 4:
                cout << "\nYou chose to modify the record.\n";
                cout << "Type in a code to modify (Codes are 8 characters long with letters & numbers): ";
                cin >> code;
                if (tree.searchNode(code)) { // Input validation
                    cout << code << " has been found!\n";
                    cout << "Rewrite the code: ";
                    cin >> code;
                    tree.insertNode(code);
                    cout << "The code has been modified and " << code << " has been inserted!\n";
                }
                else {
                    cout << code << " not found! Try again.\n";
                }
                break;
            case 5:
                tree.displayInOrder();
                cout << "You chose to display the record.\n";
                break;
            case 6:
                return 1; // Exits out the program entirely
        }
        sel = main_menu(); // Returns back to main_menu after selection
    }
    cout << "\nYou have exited the program. See you next time!\n";
    return 0;
}

// main_menu displays the numbers of choices
// arguments: none
// returns: int of user's choice
int main_menu() {
    cout << "\n** Main Menu **\n";
    cout << "[1] Add to the record\n";
    cout << "[2] Delete from the record\n";
    cout << "[3] Search the record\n";
    cout << "[4] Modify the record\n";
    cout << "[5] Display record\n";
    cout << "[6] Exit the program\n";
    cout << "Enter your choice -> "; // users input
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 6) { // Input validation
        cout << "Invalid input, only select a number between 1-6: ";
        cin >> choice;
        cin.ignore(1000, 10);
    }
    return choice;
}