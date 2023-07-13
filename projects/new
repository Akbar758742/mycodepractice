#include <iostream>
#include <string>

using namespace std;

// Node structure for storing contact information
struct Contact {
    string name;
    string phoneNumber;
    Contact* next;

    Contact(string name, string phoneNumber) {
        this->name = name;
        this->phoneNumber = phoneNumber;
        next = nullptr;
    }
};

// Phonebook class that manages the contact list
class Phonebook {
private:
    Contact* head;

public:
    Phonebook() {
        head = nullptr;
    }

    // Function to add a new contact to the phonebook
    void addContact(string name, string phoneNumber) {
        Contact* newContact = new Contact(name, phoneNumber);
        if (head == nullptr) {
            head = newContact;
        } else {
            Contact* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newContact;
        }
        cout << "Contact added successfully!" << endl;
    }

    // Function to search for a contact by name
    void searchContact(string name) {
        Contact* current = head;
        bool found = false;
        while (current != nullptr) {
            if (current->name == name) {
                cout << "Name: " << current->name << endl;
                cout << "Phone Number: " << current->phoneNumber << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "Contact not found!" << endl;
        }
    }

    // Function to delete a contact by name
    void deleteContact(string name) {
        if (head == nullptr) {
            cout << "Contact not found!" << endl;
            return;
        }

        if (head->name == name) {
            Contact* temp = head;
            head = head->next;
            delete temp;
            cout << "Contact deleted successfully!" << endl;
            return;
        }

        Contact* current = head;
        while (current->next != nullptr) {
            if (current->next->name == name) {
                Contact* temp = current->next;
                current->next = temp->next;
                delete temp;
                cout << "Contact deleted successfully!" << endl;
                return;
            }
            current = current->next;
        }

        cout << "Contact not found!" << endl;
    }

    // Function to display all contacts in the phonebook
    void displayContacts() {
        if (head == nullptr) {
            cout << "Phonebook is empty!" << endl;
            return;
        }

        Contact* current = head;
        while (current != nullptr) {
            cout << "Name: " << current->name << endl;
            cout << "Phone Number: " << current->phoneNumber << endl;
            cout << "-----------------------" << endl;
            current = current->next;
        }
    }
};

int main() {
    Phonebook phonebook;
    int choice;
    string name, phoneNumber;

    while (true) {
        cout << "Phonebook Application" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Delete Contact" << endl;
        cout << "4. Display Contacts" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> phoneNumber;
                phonebook.addContact(name, phoneNumber);
                break;
            case 2:
                cout << "Enter name to search: ";
                cin >> name;
                phonebook.searchContact(name);
                break;
            case 3:
                cout << "Enter name to delete: ";
                cin >> name;
                phonebook.deleteContact(name);
                break;
            case 4:
                phonebook.displayContacts();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}

