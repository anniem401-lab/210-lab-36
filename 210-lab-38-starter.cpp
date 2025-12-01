// COMSC-210 | Lab 36 | Annie Morales
// IDE used: Visual Studio Code

// To Do: Milestone 4
// Code's menu is functional.

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
        string codes;

        while (fin >> codes) {
            tree.insertNode(codes);
        }
        fin.close();
    }
    else {
        cout << "File not found.\n";
    }

    // Value display
    tree.displayInOrder();
    cout << "\nThe codes above are displayed by InOrder method.\n";
    cout << "Note: Codes are mixed numbers & letters, 8 characters long.\n";

    // Menu
    int sel = main_menu();
    string code;
    while (sel != 6) {
        switch (sel) {
        
            case 1:
                cout << "\nYou chose to add to the record.\n";
                cout << "Type in a code (Codes are 8 characters with letters & numbers): ";
                cin >> code;
                tree.insertNode(code); // uANq6eH7
                cout << code << " inserted!\n";
                break;
            case 2:
                cout << "\nYou chose to delete from the record.\n";
                cout << "Enter a code to delete (Codes are 8 characters with letters & numbers): ";
                cin >> code;
                if (tree.searchNode(code)) {
                    cout << code << " found!\n";
                    tree.remove(code);
                    cout << code << " removed!\n";
                }
                else {
                    cout << code << " doesn't exist in the record!\n";
                }
                break;
            case 3:
                cout << "\nYou chose to search the record.\n";
                cout << "Type in a code to search for (Codes are 8 characters with letters & numbers): ";
                cin >> code;
                if (tree.searchNode(code)) {
                cout << code << " has been found!\n";
                }
                else {
                    cout << code << " not found!\n";
                }
                break;
            case 4:
                cout << "You chose to modify the record.\n";
                // code
                break;
            case 5:
                cout << "You chose to display the record.\n";
                tree.displayInOrder();
                break;
            case 6:
                return 1;
        }
        sel = main_menu();
    }
    cout << "You have exited the program. See you next time!\n";
    return 0;
}

int main_menu() {
    cout << "\n** Main Menu **\n";
    cout << "[1] Add to the record\n";
    cout << "[2] Delete from the record\n";
    cout << "[3] Search the record\n";
    cout << "[4] Modify the record\n";
    cout << "[5] Display record\n";
    cout << "[6] Exit the program\n";
    cout << "Enter your choice -> ";
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 6) {
        cout << "Invalid input, only select a number between 1-6: ";
        cin >> choice;
        cin.ignore(1000, 10);
    }
    return choice;
}