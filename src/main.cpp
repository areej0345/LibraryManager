#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <string>
#include "../include/Library.hpp"

using namespace std;

// Data ko file mein save karne ka function
void saveToFile(const Library& lib) {
    // "../data/library.txt" ka matlab hai: 
    // Pehle 'src' folder se bahar niklo, phir 'data' folder mein jao.
    ofstream outFile("../data/library.txt"); 
    
    if (!outFile) {
        cerr << "Error: Data folder nahi mila! Please check folder structure." << endl;
        return;
    }

    for (const auto& item : lib.items) {
        outFile << item->getId() << "|" << item->getTitle() << "|" << item->getType() << endl;
    }
    
    outFile.close();
    cout << "\n[Success] Data saved to 'data/library.txt' successfully!\n";
}

int main() {
    Library myLibrary;
    int choice;

    while (true) {
        cout << "\n--- Smart Library System ---" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Exit & Save All Data" << endl;
        cout << "Enter Choice (1-2): ";
        cin >> choice;

        if (choice == 1) {
            string title, author;
            int id;
            cout << "Enter Book ID (e.g., 101): "; cin >> id;
            cout << "Enter Book Title: "; cin.ignore(); getline(cin, title);
            cout << "Enter Author Name: "; getline(cin, author);

            // STL vector mein item add karna
            myLibrary.addItem(make_shared<Book>(title, id, author));
            cout << "Book added to list!" << endl;

        } else if (choice == 2) {
            // Program band karne se pehle save karna
            saveToFile(myLibrary);
            cout << "Exiting program..." << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}