#include <iostream>

using namespace std;

void makanan();

int main(){
    int input_2;
    
    while (true)
    {
        cout << endl << "=============================================" << endl;
        cout << "Pilihan Menu" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Keluar" << endl;
        cin >> input_2;
        cout << "=============================================" << endl;

        switch (input_2)
        {
        case 1:
            makanan();
            break;
        
        case 2:
            return 0;
        default:
            cout << "Anda salah input masukkan kembali: ";
            break;
        }
    }
    
}

void makanan() {
    int sum = 0;
    int fried_rice = 0;
    int fried_noodle = 0;
    int capcay = 0;


    cout << "Nasi Goreng (Rp15.000) Jumlah: ";
    cin >> fried_rice;
    sum += fried_rice * 15000;

    cout << "Mie Goreng (Rp10.000) Jumlah: ";
    cin >> fried_noodle;
    sum += fried_noodle * 10000;

    cout << "Capcay (Rp15.000) Jumlah: ";
    cin >> capcay;
    sum += capcay * 15000;

    cout << "Total harga yang harus dibayarkan: Rp" << sum << std::endl;
}


