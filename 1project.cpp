#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Contact {
    string name;
    string phone_number;
};

int main() {
    vector<Contact> phonebook;
    int choice;

    while (true) {
        cout << "\nPhonebook Menu:\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
          
            Contact new_contact;
            cout << "Enter name: ";
            cin >> new_contact.name;
            cout << "Enter phone number: ";
            cin >> new_contact.phone_number;
            phonebook.push_back(new_contact);
            cout << "Contact added.\n";
        } else if (choice == 2) {
            
            if (phonebook.empty()) {
                cout << "No contacts to display.\n";
            } else {
                for (const auto& contact : phonebook) {
                    cout << "Name: " << contact.name << ", Phone: " << contact.phone_number << endl;
                }
            }
        } else if (choice == 3) {
           
            string search_name;
            cout << "Enter name to search: ";
            cin >> search_name;
            bool found = false;
            for (const auto& contact : phonebook) {
                if (contact.name == search_name) {
                    cout << "Found contact: Name: " << contact.name << ", Phone: " << contact.phone_number << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found.\n";
            }
        } else if (choice == 4) {
            
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
