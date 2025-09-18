#include <iostream>
using namespace std;

int main (){
    int a;

    cout << "Enter 1-5 number: ";
    cin >> a;

        
            switch (a) {
                case 1:
                    cout << "1 = A";
                    break;
                case 2:
                    cout << "2 = B";
                    break;
                case 3:
                    cout << "3 = C";
                    break;
                case 4:
                    cout << "4 = A";
                    break;
                case 5:
                    cout << "5 = A";
                    break;
                default:
                    cout << "Input 1-5 numbers only!";
                    break;
            }
        
        
return 0;
}
