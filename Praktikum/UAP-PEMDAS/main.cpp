#include <iostream>
using namespace std;

void fungsi_array();

int main() {
    fungsi_array();
    
    return 0;
}

void fungsi_array() {
    int angka, jumlah_angka, angka_asli;
    cin >> angka;

    int array_angka_of[100] = {0};
    for (int i = 0; i < angka; ++i) {
        jumlah_angka;
        cin >> jumlah_angka;
        array_angka_of[jumlah_angka]++;
    }

    for (int i = 0; i < 100; ++i) {
        cout << array_angka_of[i] << ' ';
    }

}
