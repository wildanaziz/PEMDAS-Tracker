#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    char option;
    cout << "Welcome to Dice Generator ^_^" << endl;

    srand(time(0));
    while(true){
        cout << "Do you wanna start to gacha (y/n): ";
        cin >> option;

        if (option == 'y')
        {
            cout << "Your number is: " << 1 + (rand() %6) << endl;

        } else if (option == 'n')
        {
            break;
        } else
        {
            cout << "Your input doesn't match try again" << endl;
        }
    }
}