#include <iostream>
#include <limits>
#include <string>
#include <vector>  // to store multiple tasks

using namespace std;

int main() {
    int choice;
    string list, place, timee;
    char confirm;
    vector<string> toDoList; // store tasks here

    while (true) {
        cout << "\n=================== TO-DO LIST PROGRAM ===================\n";
        cout << "1. Enter new list\n2. View your To-do list\n3. Exit\nEnter: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid numeric choice!" << endl;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear newline

        switch (choice) {
            case 1: {
                cout << "=================== TYPE NEW TO-DO LIST ===================\n";
                cout << "Activity: ";
                getline(cin, list);
                cout << "Place: ";
                getline(cin, place);
                cout << "Time (00:00 AM | 00:00 PM): ";
                getline(cin, timee);
                cout << "-----------------------------------------------------------";
                cout << "\nYou typed: " << list << " | " << place << " | " << timee << endl;
                cout << "Confirm (Y/N): ";
                cin >> confirm;

                if (confirm == 'y' || confirm == 'Y') {
                    toDoList.push_back(list + " | " + place + " | " + timee);
                    cout << "You successfully added a new to-do list!" << endl;
                } else {
                    cout << "Action canceled. Please try again!" << endl;
                }
                break;
            }

            case 2: {
                cout << "\n=================== VIEW YOUR CURRENT TO-DO LIST ===================\n";
                if (toDoList.empty()) {
                    cout << "No tasks yet!\n";
                } else {
                    for (size_t i = 0; i < toDoList.size(); ++i) {
                        cout << (i + 1) << ". " << toDoList[i] << endl;
                    }
                }
                break;
            }

            case 3:
                cout << "Thank you for using To-do list Program!^^\nExiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again!\n";
                break;
        }
    }

    return 0;
}
