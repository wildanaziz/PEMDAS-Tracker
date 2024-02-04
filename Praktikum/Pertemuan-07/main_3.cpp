#include <iostream>
#include <cmath>

using namespace std;

void show_it() {
    for (int i = 1; i <= 100; i++) {
    int factorial_sum = 0;
        for (int j = i; j > 0; j--) {
            if (i % j == 0) {
                factorial_sum++;
            }
        }
        if (factorial_sum == 2) {
            cout << i << " ";
        }
    }
}

void checking(int num) {
    int factorial_sum = 0;
    for (int i = num; i > 0; i--) {
        if (num % i == 0) {
            factorial_sum++;
        }
    }

    if (factorial_sum == 2) {
        cout << "Bilangan anda adalah bilangan prima \n";
    } else {
        cout << "Bilangan anda bukan bilangan prima \n";
    }
}

void line_equals() {
    for (int i = 0; i < 80; i++)
    {
        cout << "=";
    }
    
}

int main() {
    int num;
    cout << "Program cek bilangan prima \n";
    cout << "Masukkan angka 1-100 = ";
    cin >> num;
    checking(num);
    
    if (num != 2 && num != 3 && num != 5 && num != 7 && num != 11 && num != 13 && num != 17 && num != 19 &&
    num != 23 && num != 29 && num != 31 && num != 37 && num != 41 && num != 43 && num != 47 && num != 53 &&
    num != 59 && num != 61 && num != 67 && num != 71 && num != 73 && num != 79 && num != 83 && num != 89 &&
    num != 97)
    {
        /* code */
        cout << endl;
        line_equals();
        cout << endl;
        cout << "Bilangan prima 1 - 100  yang benar adalah sebagai berikut: ";
        cout << endl;
        show_it();
        cout << endl;
        line_equals();  
    }
    
    return 0;
}
