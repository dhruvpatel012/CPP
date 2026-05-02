#include <iostream>
using namespace std;

#define MAX 100

// ================= BASE CLASS =================
class LibraryItem {
private:
    string title, author, dueDate;
    bool issued;

public:
    LibraryItem(string t, string a, string d) {
        title = t;
        author = a;
        dueDate = d;
        issued = false;
    }

    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    void setIssued(bool val) { issued = val; }
    bool isIssued() { return issued; }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;
};

// ================= BOOK =================
class Book : public LibraryItem {
public:
    Book(string t, string a, string d) : LibraryItem(t, a, d) {}

    void checkOut() {
        if (isIssued()) cout << "Already issued!\n";
        else {
            setIssued(true);
            cout << "\nBook issued successfully\n";
        }
    }

    void returnItem() {
        if (!isIssued()) cout << "Not issued yet!\n";
        else {
            setIssued(false);
            cout << "\nBook returned\n";
        }
    }

    void displayDetails() {
        cout << "[Book] " <<"Name: "<<getTitle() << " | " <<"Author: "<< getAuthor()
             << " | Due: " << getDueDate() << endl;
    }
};

// ================= DVD =================
class DVD : public LibraryItem {
public:
    DVD(string t, string a, string d) : LibraryItem(t, a, d) {}

    void checkOut() {
        if (isIssued()) cout << "\nAlready issued!\n";
        else {
            setIssued(true);
            cout << "\nDVD issued\n";
        }
    }

    void returnItem() {
        if (!isIssued()) cout << "\nNot issued!\n";
        else {
            setIssued(false);
            cout << "\nDVD returned\n";
        }
    }

    void displayDetails() {
         cout << "[DVD] " <<"Name: "<<getTitle() << " | " <<"Author: "<< getAuthor()
             << " | Due: " << getDueDate() << endl;
    }
};

// ================= MAGAZINE =================
class Magazine : public LibraryItem {
public:
    Magazine(string t, string a, string d) : LibraryItem(t, a, d) {}

    void checkOut() {
        if (isIssued()) cout << "\nAlready issued!\n";
        else {
            setIssued(true);
            cout << "\nMagazine issued\n";
        }
    }

    void returnItem() {
        if (!isIssued()) cout << "Not issued!\n";
        else {
            setIssued(false);
            cout << "\nMagazine returned\n";
        }
    }

    void displayDetails() {
        cout << "[Magazine] " <<"Name: "<<getTitle() << " | " <<"Author: "<< getAuthor()
             << " | Due: " << getDueDate() << endl;
    }
};

string inputString(string msg) {
    string value;
    while (true) {
        cout << msg;
        getline(cin, value);

        if (value.empty()) {
            cout << "\nInput cannot be empty!\n";
        } else {
            return value;
        }
    }
}

// ================= MAIN =================
int main() {
    LibraryItem* items[MAX];
    int count = 0;
    int choice;

    cout << "\n||------- LIBRARY MANAGEMENT SYSTEM ------- ||\n";

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Check Out\n";
        cout << "5. Return Item\n";
        cout << "6. Exit\n";
        cout << "\nEnter Your Choice: ";

        try {
            cin >> choice;

            if (cin.fail()) throw "\nInvalid input!";
            if (choice < 1 || choice > 6) throw "\nInvalid choice!";
        }
        catch (const char* msg) {
            cout << msg << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        cin.ignore();

        // ===== ADD =====
        if (choice == 1) {
            if (count >= MAX) {
                cout << "\nStorage full!\n";
                continue;
            }

            int type;

            try {
                cout << "\n1.Book 2.DVD 3.Magazine: ";
                cin >> type;

                if (cin.fail()) throw "\nInvalid type!";
                if (type < 1 || type > 3) throw "\nOnly 1-3 allowed!";
            }
            catch (const char* msg) {
                cout << msg << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            cin.ignore();

            string t = inputString("\nEnter title: ");
            string a = inputString("Enter author: ");
            string d = inputString("Enter due date: ");

            cout<<"\nIteam added succesfully!!\n";

            if (type == 1)
                items[count++] = new Book(t, a, d);
            else if (type == 2)
                items[count++] = new DVD(t, a, d);
            else
                items[count++] = new Magazine(t, a, d);
        }

        // ===== DISPLAY =====
        else if (choice == 2) {
            if (count == 0) {
                cout << "No items available\n";
                continue;
            }

            cout << "\n===== LIBRARY ITEMS =====\n";

            for (int i = 0; i < count; i++) {
                cout << "\nItem " << i + 1 << ":\n";
                items[i]->displayDetails();
            }
        }

        // ===== SEARCH =====
        else if (choice == 3) {
            string search = inputString("Enter title: ");

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (items[i]->getTitle() == search) {
                    cout << "\nFound Item:\n";
                    items[i]->displayDetails();
                    found = true;
                }
            }

            if (!found)
                cout << "\nItem not found!\n";
        }

        // ===== CHECKOUT =====
        else if (choice == 4) {
            string t = inputString("Enter title: ");

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (items[i]->getTitle() == t) {
                    items[i]->checkOut();
                    found = true;
                }
            }

            if (!found)
                cout << "Item not found!\n";
        }

        // ===== RETURN =====
        else if (choice == 5) {
            string t = inputString("Enter title: ");

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (items[i]->getTitle() == t) {
                    items[i]->returnItem();
                    found = true;
                }
            }

            if (!found)
                cout << "Item not found!\n";
        }

    } while (choice != 6);

    for (int i = 0; i < count; i++) {
        delete items[i];
    }

    cout << "\nProgram exited safely.\n";
    return 0;
}