#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

double math_explain(int num);


int main () {
    int input_1, input_2;

    while (true)
    {
        cout << endl << "=============================================" << endl;
        cout << "Pilihan" << endl;
        cout << "1. Nilai Bilangan Faktorial" << endl;
        cout << "2. Kategorisasi Bilangan Ganjil atau Genap" << endl;
        cout << "3. Keluar" << endl;
        cin >> input_1;
        cout << "=============================================" << endl;
        

        switch (input_1)
        {
        case 1:
            cout << "Masukkan angka yang ingin difaktorialkan: ";
            cin >> input_1;
            cout << "Faktorial dari " << input_1 << " adalah " << math_explain(input_1) << endl;
            break;
        
        case 2:
            cout << "Masukkan angka yang ingin dikategorisasikan: ";
            cin >> input_1;
            if (input_1 % 2 == 0) { 
                cout << "Angka dari " << input_1 << " adalah: Genap" << endl;
            } else {
                cout << "Angka dari " << input_1 << " adalah: Ganjil" << endl;
            }
            break;
        case 3:
            return 0;
        default:
            cout << "Masukkan angka Kembali: ";
            break;
        }
    }
    
}

double math_explain(int num) {
    if(num<=1) {
        return 1;
    } else {
        return num * math_explain(num - 1);
    }
}


