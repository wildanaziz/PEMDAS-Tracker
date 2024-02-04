//Nama: Wildan Aziz Hidayat
//NIM: 235150301111028
//Prodi: Teknik Komputer C
//Tugas Bab 05 Method

#include <iostream>

using namespace std;
void line_equals_30();

//nomor 1
void show_it();
void checking(int num);
void line_equals();

// nomor 2
void pascal_formula(int rows);

//nomor 3
int source[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
int dest[3][3];
int a[3][3] = {{17,20,28},{13,23,27},{14,13,22}};
int b[3][3] = {{11,12,23},{10,14,25},{10,25,27}};
const int dest_cols = sizeof(dest[0])/sizeof(int);
const int a_cols = sizeof(a[0])/sizeof(int);
const int b_cols = sizeof(b[0])/sizeof(int);
const int source_cols = sizeof(source[0]) / sizeof(int);
void line_mins();
void addition(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]);
void subtraction(int dest[][dest_cols], int a[][a_cols], int
b[][b_cols]);
void multiplication(int dest[][dest_cols], int a[][a_cols], int
b[][b_cols]);
int isDiagonalMatrix(int source[][source_cols]);
int isIdentityMatrix(int source[][source_cols]);


int main() {
    int num;
    int input_rows;
    
    line_equals_30();
    cout << endl;
    cout << "Soal Nomor 1" << endl;
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
    line_equals_30();
    cout << endl;

    cout << endl;
    line_equals_30();  
    cout << "\n" <<"Soal Nomor 2" << endl;
    cout << "Masukkan jumlah baris yang ingin dicetak: ";
    cin >> input_rows;
    pascal_formula(input_rows);
    line_equals_30();

    cout << endl;
    cout << endl;
    line_equals_30();  
    cout << "\n" <<"Soal Nomor 3" << endl;
    addition(dest, a, b);
    subtraction(dest, a, b);
    multiplication(dest, a,b);
    cout << isDiagonalMatrix(source);
    cout << isIdentityMatrix(source);
    line_equals_30();

}

void pascal_formula(int rows) {
    // mendeklarasi seluruh integer
    int early_constant, show, blank_space, show_pascal;
    for (show = 1; show <= rows; show++) // menampilkan inputan baris
    {
        early_constant = 1; // nilai awal
        for (blank_space = rows-show; blank_space > 0; blank_space--) // membuat spasi kosong agar berbentuk segitiga
        {
            cout << " ";
        }

        for (show_pascal = 1; show_pascal <= show; show_pascal++) // menghitung dengan menggunakan rumus segitiga pascal
        {
            cout << early_constant << " ";
            early_constant = early_constant*(show-show_pascal)/show_pascal;
        }
        
        // membuat baris baru setelah kedua looping dijalankan
        cout << "\n";
        
    }
    
}

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

void line_equals_30() {
    for (int i = 0; i < 30; i++)
    {
        cout << "=";
    }
    
}

void line_mins(){
    for (int x = 0; x < 30; x++){
        cout << "-";
    }
}

void addition(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << "pertambahan" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] + b[y][x];
            cout << dest[y][x] << "\t";
        }cout << endl;
    }
    line_mins();
    cout << endl;
}

void subtraction(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << endl;
    cout << "pengurangan" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] - b[y][x];
            cout << dest[y][x] << "\t";
        }
        cout << endl;
    }
    line_mins();
    cout << endl;
}


void multiplication(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << endl;
    cout << "perkalian" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] * b[y][x];
            cout << dest[y][x] << "\t";
        }cout << endl;
    }
    line_mins();
    cout << endl;
}

int isDiagonalMatrix(int source[][source_cols]){
    for(int y = 0; y < source_cols; y++){
        for(int x = 0; x < source_cols; x++){
            if( x != y and source[y][x] != 0){
                return 0;
            }
        }
    }
    return 1;
}

int isIdentityMatrix(int source[][source_cols]){
    if(isDiagonalMatrix(source) == 0){
    return 0;
    }
    for(int y = 0; y < source_cols; y++){
        for(int x = 0;x < source_cols; x++){
            if(x == y and source[y][x] != 1){
                return 0;
            }
        }
    }
    return 0;
}