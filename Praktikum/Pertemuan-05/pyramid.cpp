#include <stdio.h>
#include <iostream>

using namespace std;
//mendeklarasikan fungsi nomor satu agar bisa dipanggil pada int main();
void pyramid_siku();
void pattern_of_name();
void volume_of_shape();

int main() {
    //pemanggilan fungsi nomor satu yang telah dideklarasikan
    pyramid_siku();
    printf("\n\n");
    printf("soal nomor 02");
    printf("\n\n");
    //pemanggilan fungsi nomor dua yang telah dideklarasikan
    pattern_of_name();
    printf("soal nomor 03");
    printf("\n\n");
    //pemanggilan fungsi nomor tiga yang telah dideklarasikan
    volume_of_shape();

}

//fungsi nomor satu
void pyramid_siku() {
    // inisialisasi tinggi baris dan kolom
    int height, rows, columns;

    cout << "Masukkan tinggi yang dicetak: ";
    cin >> height;

    // hitung baris dimulai dari 1, dihitung sampai kurang dari sama dengan tingginya
    // kemudian disetiap barisnya ditambah 1
    printf("soal nomor 1");
    printf("\n");
    for (rows = 1; rows <= height; rows++)
    {
        // hitung kolom dimulai dari 1, dihitung sampai kurang dari sama dengan tingginya
        // dengan tujuan tidak melebihi batas tinggi yang ditentukan
        // kemudian disetiap barisnya ditambah 1
        for (columns = 1; columns <= height; columns++)
        {
            // jika baris lebih besar dari sama dengan kolom cetak "*""
            // untuk menggeser outputnya
            if (rows >= columns)
            {
                printf("* ");
            }
        }
        // mengimplementasikan loop pertama
        printf("\n");
        
    }
}

// fungsi nomor 2
void pattern_of_name() {
    int space=1, columns, rows;
    
    //Mencetak baris 1 - 8
    for(rows=1; rows<=8; rows++) {
        //Mencetak HURUF W
        for(columns=1; columns<=10; columns++){
            if (columns==1 || columns==2 || columns==9 || columns==10 || ((rows==6 || rows==7) && (columns==3 || columns==4 || columns==7 || columns==8)) || ((rows==4 || rows==5) && (columns==5 || columns==6)))
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }

        //Mencetak HURUF  JARAK ANTARA W DAN I
        for(space=1; space<=4; space++){
            printf(" ");
        }

        //Mencetak HURUF  I
        for(columns=1; columns<=2; columns++){
            if (columns==1 || columns==2)
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }

        //Mencetak JARAK ANTARA I DAN L
        for(space=1; space<=4; space++){
            printf(" ");
        }

        //Mencetak HURUF  L
        for(columns=1; columns<=8; columns++){
            if (columns==1 || columns==2 || (rows==7 || rows==8))
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }

        //Mencetak JARAK ANTARA L DAN D
        for(space=1; space<=4; space++){
            printf(" ");
        }

        //Mencetak HURUF D
        for(columns=1; columns<=8; columns++){
            if (rows==1 || rows==2 || rows==7 || rows==8 || (columns==2 || columns==3) || (columns==7 || columns==8) )
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }

        //Mencetak JARAK ANTARA D DAN A
        for(space=1; space<=4; space++){
            printf(" ");
        }

        //Mencetak HURUF A
        for(columns=1; columns<=8; columns++){
            if (rows==1 || rows==2 || rows==5 || rows==6 || (columns==1 || columns==2) || (columns==7 || columns==8))
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }

        //Mencetak JARAK ANTARA A DAN N
        for(space=1; space<=4; space++){
            printf(" ");
        }

        //Mencetak HURUF N
        for(columns=1; columns<=8; columns++){
            if (columns==1 || columns==2 || columns==7 || columns==8 || ((rows==2 || rows==3) && (columns==3 || columns==4)) || ((rows==4 || rows==5) && (columns==5 || columns==6)))
            {
                printf("* ");
            } else {
                printf("  ");
            }
            
        }
        // newline tiap baris sesuai baris yang ditentukan pada loop diawal
        printf("\n");
    }
    
}

// fungsi nomor 3
void volume_of_shape(){
    
    //deklarasi angka, panjang, lebar, tinggi, jari-jari, alas dan tinggi_2
    int num, p, l, t, r, a, t_2;
    const float PHI = 3.14;

    //loop menggunakan while true agar bisa melakukan program break
    while (true)
    {
        cout << "Menu" << endl << "0. KELUAR" << endl << "1. HITUNG VOLUME BALOK" << endl;
        cout << "2. HITUNG VOLUME BOLA" << endl << "3. HITUNG VOLUME KERUCUT" << endl << "4. HITUNG VOLUME SILINDER" << endl;
        cout << "5. HITUNG VOLUME LIMAS SEGITIGA" << endl;
        cout << "Masukkan angka: ";
        cin >> num;

        // jika bernilai 0 maka program selesai
        if (num == 0)
        {
            cout << "PROGRAM SELESAI";
            break;
        }
        
        // jika bernilai bukan 0-5 maka salah input dan memasukkan kembali
        if(num != 1 && num != 2 && num != 3 && num != 4 && num != 5){
            cout << "Anda salah input masukkan kembali" << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }

        // jika bernilai 1 menghitung luas volume balok
        if (num==1)
        {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "MENGHITUNG VOLUME BALOK DENGAN MEMASUKKAN PANJANG LEBAR DAN TINGGI" << endl;
            cout << "Masukkan panjang: ";
            cin >> p;
            cout << "Masukkan lebar: ";
            cin >> l;
            cout << "Masukkan tinggi: ";
            cin >> t;

            int formula_1 = p*l*t;

            cout << "Volume Kubus anda: " << formula_1 << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }
        
        // jika bernilai 2 menghitung luas volume bola
        if (num==2)
        {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "MENGHITUNG VOLUME BOLA DENGAN MEMASUKKAN JARI-JARI" << endl;
            cout << "Masukkan jari-jari: ";
            cin >> r;

            float formula_2 = (4.0/3.0)*PHI*r*r*r;

            cout << "Volume Bola anda: " << formula_2 << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }

        // jika bernilai 3 menghitung luas volume kerucut
        if (num==3)
        {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "MENGHITUNG VOLUME KERUCUT DENGAN MEMASUKKAN JARI-JARI DAN TINGGI" << endl;
            cout << "Masukkan jari-jari: ";
            cin >> r;
            cout << "Masukkan tinggi: ";
            cin >> t;

            float formula_3 = (1.0/3.0)*PHI*r*r*t;

            cout << "Volume Bola anda: " << formula_3 << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }

        // jika bernilai 4 menghitung luas volume silinder
        if (num==4)
        {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "MENGHITUNG VOLUME SILINDER DENGAN MEMASUKKAN JARI-JARI DAN TINGGI" << endl;
            cout << "Masukkan jari-jari: ";
            cin >> r;
            cout << "Masukkan tinggi: ";
            cin >> t;

            float formula_4 = PHI*r*r*t;

            cout << "Volume Bola anda: " << formula_4 << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }

        // jika bernilai 5 menghitung luas volume silinder
        if (num==5)
        {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "MENGHITUNG VOLUME SILINDER DENGAN MEMASUKKAN JARI-JARI DAN TINGGI" << endl;
            cout << "Masukkan alas segitiga: ";
            cin >> a;
            cout << "Masukkan tinggi segitiga: ";
            cin >> t_2;
            cout << "Masukkan tinggi limas: ";
            cin >> t;

            float formula_5 = (1.0/3.0)*(a*t_2)*t;

            cout << "Volume Bola anda: " << formula_5 << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }
    }
    
}