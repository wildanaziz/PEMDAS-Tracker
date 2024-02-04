#include <iostream>
using namespace std;

int square(int a) {
    int b;
    b= a*a;
    return b;
}

int main(){
    int num;
    cout << "Return Function square" << endl;
    cout << "input your number: ";
    cin >> num;

    cout << "Result: " << square(num) << endl;
    return 0;
}