#include <iostream>

using namespace std;

// Factorial and Exponential Generator
// Author Wilson :p
// as train my learning from kelas terbuka :)

void list();
double factorial(double num);
void result_fac(double num);
void result_ex(double num, double num_2);
void threshold();

int main(){
    char option;
    double input, input_ex;
    cout << "Factorial and Exponential Generator: "<< endl;
    while(true){
        list();
        cout << "Input your option: ";
        cin >> option;
        if(option == '1'){
            threshold();
            cout << "\nFactorial Generator ^_^" << endl;
            cout << "Input your number: ";
            cin >> input;
            result_fac(input);
            threshold();
        } else if(option == '2'){
            threshold();
            cout << "\nExponential Generator @_@" << endl;
            cout << "Input your number: ";
            cin >> input;
            cout << "Input your exponential: ";
            cin >> input_ex;
            result_ex(input, input_ex);
            threshold();
        } else if(option == '3') {
            cout << "The program has stopped :(" << endl;
            break;
        } else {
            cout << "Your input doesn't match try again -_-" << endl;
        }

    }

}

double factorial(double num){
    if(num == 1 || num == 0){
        return num;
    } else {
        return num * factorial(num - 1);
    }
}

double exponential(double num, double num_2) {
    if (num_2 <=1){
        return num;
    } else {
        return num * exponential(num, (num_2 -1));
    }
}

void list(){
    cout << "\n1. Factorial\n2. Exponential\n";
}

void result_fac(double num){
    cout << "Your result is: " << factorial(num) << endl;
}

void result_ex(double num, double num_2){
    cout << "Your result is: " << exponential(num, num_2) << endl;
}

void threshold() {
    for(int i=1; i<=25; i++){
        cout << "=";
    }
}