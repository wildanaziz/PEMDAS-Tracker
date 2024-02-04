#include <iostream>

using namespace std;

int main() {
    int spoon;
    char option;
    cout << "input your spoon's: ";
    cin >> spoon;
    cout << "you wanna print increment (i) or decrement (d): ";
    cin >> option;

    if (option == 'i')
    {
        while(spoon <=20) {
            cout << "spoon " << spoon << endl;
            spoon += 1;
        }
    } else if (option == 'd')
    {
        while (spoon >= 1) 
        {
            cout << "spoon " << spoon << endl;
            spoon -= 1;
        }
        
    }
    
    
}

