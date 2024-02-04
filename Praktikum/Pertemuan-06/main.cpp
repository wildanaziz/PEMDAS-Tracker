#include <iostream>

using namespace std;
void nomor_1();
void nomor_2();
void nomor_3();

int main (){ 
    cout << "soal nomor 01: \n";
    nomor_1();
    cout << "\nsoal nomor 02: \n";
    nomor_2();
    cout << "\nsoal nomor 03: \n";
    nomor_3();
    
}

void nomor_1() {
    cout << "penjumlahan" << endl;
    int a [2][3] = {{3, 4, 5}, {6, 7, 8}} ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n" ;
    }

    cout << "\n";
    cout << " +" ;
    cout << "\n\n" ;
    int b [2][3] = {{3, 4, 5}, {6, 7, 8}} ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n" ;
    }

    cout << "=\n" ;

    //penjumlahan
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] + a[i][j] << " ";
        }
        cout << "\n" ;
    }

    cout << endl;
    cout << "pengurangan" << endl;
    int c [2][3] = {{6, 8, 10}, {12, 14, 16}} ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n" ;
    }

    cout << "\n";
    cout << " -" ;
    cout << "\n\n" ;

    int d [2][3] = {{3, 4, 5}, {6, 7, 8}} ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << d[i][j] << " ";
        }
        cout << "\n" ;
    }

    cout << "=\n" ;
    
    //pengurangan
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] - d[i][j] << " ";
        }
        cout << "\n" ;
    }
}

void nomor_2() {
    int A[3] = {10, 20, 30};
    int B[3] = {40, 50, 60};
    int C[6];

    for (int i = 0; i < 3; i++) {
        C[i] = A[i];
        C[i+3] = B[i];
    }

    cout << "Matriks Gabungan dari A dan B adalah :\n";
    for (int i = 0; i < 6; i++) {
        cout << C[i] << " ";
    }
    cout << "\n";
}

void nomor_3() {

    int array[] = {27, 18, 51, 69, 82};
    //menghitung ukuran elemen array sebanyak 5 elemen
    int size = sizeof(array)/sizeof(array[0]);

    int i, j, temp;

    // looping dimulai dari 4 elemen hingga 1
    for (i = 0; i < size-1; i++) {
        // looping dimulai dari 1 hingga 4 elemen
        for (j = i+1; j < size; j++) {
            // proses penukaran
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Array yang telah diurutkan : ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

}