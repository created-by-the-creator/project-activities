#include <iostream>
#include <limits>

using namespace std;

int main () {
    
    string name, wish1, wish2, wish3;
    
    cout << "========== TELL ME YOUR WISH ==========" << endl;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << "!" << " I am a genie, what is your 3 wishes?\nWhat is your first wish?: ";
    cin.ignore(1000,'\n');
    getline (cin, wish1);
    
    cout << "I see, your first wish is " << wish1 << "! Wish granted!\nWhat's the next one?: ";
    getline (cin, wish2);
    cout << "Wow, your second wish is " << wish2 << "! Wish granted!\nWhat's the last one?: ";
    getline (cin, wish3);
    cout << "You let your third wish to be " << wish3 << "! Wish granted!";
    getline (cin, wish3);
    
    cout << "=== YOU ALREADY USED ALL OF YOUR WISHES! ====" << endl;
    return 0;

}
