#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main () {
    string name, program;
    int age;
    char continuee;

    cout << "============ BASIC INFORMATION ============" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    while (true) {
        cout << "Enter your age: ";
        cin >> age;

        if (cin.fail()) {
            cout << "Number-based only!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            
        } else if (age <= 0 || age >= 122) {
            cout << "Please input a valid age!" << endl;
            cin.ignore(1000, '\n');
        } else {
            cin.ignore(1000, '\n');
            break;
        }
    }

    cout << "Enter your program: ";
    getline(cin, program);

    //display the result
        cout << "============ DASHBOARD ============" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Program: " << program << endl;

    //more example
    float subject1 = 90.5, subject2 = 98.2, subject3 = 96.5, subject4 = 95.2, subject5 = 99.4;
    float average = (subject1+subject2+subject3+subject4+subject5)/5;
    int choice;

        while (true) {
        cout << "============ DASHBOARD ============" << endl;
        cout << "1. View Grades\n2. Grade Calculator\n3.Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "============ VIEW GRADES ============" << endl;
            cout << "Your current grade is: " << average << endl;

            if (average >= 98) {
                cout << "Remarks: With Highest Honors" << endl;
            } else if (average >= 95) {
                cout << "Remarks: With High Honors" << endl;
            } else if (average >= 90) {
                cout << "Remarks: With Honors" << endl;
            } else {
                cout << "Remarks: FAILED" << endl;
            }

        // for calculation of grades

        } else if (choice == 2) {
            cout << "============ CALCULATE GRADES ============" << endl;
            float grade1[8];
            for (int i = 0; i < 8; ++i) {
                cout << "Type your grade for subject " << (i + 1) << ": ";
                cin >> grade1[i];
            }
            float sum = 0;
            for (int i = 0; i < 8; ++i) {
                sum += grade1[i];
            }
            float average_grade = sum / 8;
            cout << "Your calculated average grade is: " << average_grade << endl;

        } else if (choice == 3) {
            cout << "===== THANK YOU FOR USING THIS PROGRAM! =====";
            break;
        }
    }
    
return 0;
}
