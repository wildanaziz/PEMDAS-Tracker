#include <iostream>

using namespace std;
void no_4();
 
int main() {
    int n;
    cout << "Masukkan jumlah elemen deret Fibonacci yang ingin ditampilkan: ";
    cin >> n;
    
    int a = 0, b = 1, c;
    
    cout << "Deret Fibonacci: ";
    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        c = a;
    }
    no_4();
    
    // mencetak deret Fibonacci hingga n elemen

    return 0;
}


void no_4() {

    int input, a;

    while(true)
    {

    cout << "Masukkan jumlah angka yang akan dimasukkan: ";
    cin >> a;
    cout << "Masukkan angka bilangan genap dan bukan kelipatan 5: ";
    cin >> input;

    if(input%2 != 0){
        cout << "bukan angka genap" << endl;
    } else if (input%5 == 0)
    {
        cout << "kelipatan 5" << endl;
    } else if (input%2 == 0 && input%5 != 0)
    {
        for(int i = 0; i < a; i++) {
        while(true) {
            if(input % 2 == 0 && input % 5 != 0) {
                cout << input << " ";
                break;
        }
    }
        
    }
    
    
    }
}
