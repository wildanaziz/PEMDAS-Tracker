#include<iostream>
using namespace std;

void checkNumber(int num) {
    if(num % 2 != 0) {
        cout << "Bukan angka genap!" << endl;
    } else if(num % 5 == 0) {
        cout << "Kelipatan 5" << endl;
    } else {
        cout << "Angka: " << num << endl;
    }
}

int main() {
    int n, num, count;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        if(count == n) {
            break;
        }
        cout << "Masukkan angka: ";
        cin >> num;
        if(num % 2 == 0 && num % 5 != 0) {
            count++;
        }
        checkNumber(num);
    }
    return 0;
}
