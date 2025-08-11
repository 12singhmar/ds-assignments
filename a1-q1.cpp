#include <iostream>
using namespace std;

const int MAX = 100;

int arr[MAX];
int size = 0;

void create() {
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void display() {
    if (size == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert() {
    int pos, val;
    if (size >= MAX) {
        cout << "Array is full.\n";
        return;
    }
    cout << "Enter position to insert (0 to " << size << "): ";
    cin >> pos;
    if (pos < 0 || pos > size) {
        cout << "Invalid position.\n";
        return;
    }
    cout << "Enter value to insert: ";
    cin >> val;
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;
    cout << "Inserted successfully.\n";
}

void deleteElement() {
    int pos;
    if (size == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Enter position to delete (0 to " << size - 1 << "): ";
    cin >> pos;
    if (pos < 0 || pos >= size) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Deleted successfully.\n";
}

void linearSearch() {
    int val, found = 0;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            cout << "Found at position: " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Not found.\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
