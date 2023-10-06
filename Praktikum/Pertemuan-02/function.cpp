#include <iostream>
#include <stdio.h>
#include <limits>
// memanggil header agar bisa menjalankan fungsi void question_01() question_02() & question_03()
#include "function.h"

using namespace std;

// SOAL NOMOR 01

void question_01() {
    // deklarasi
    int pilihan;
    int a,b,r,t;
    int luas_lingkaran;
    int luas_persegi_panjang;
    int luas_segitiga;
    int keliling_persegi_panjang;
    int keliling_lingkaran;
    int keliling_segitiga;

    // Cetak Menu
    cout << "Menu :" << endl;
    cout << "1. Menghitung luas dan keliling persegi panjang" << endl;
    cout << "2. Menghitung luas dan keliling lingkaran" << endl;
    cout << "3. Menghitung luas dan keliling segitiga" << endl;

    // input pilihan
    cout << "Pilihan anda: ";
    cin >> pilihan;

    // Assignment Tugas Nomor 1
    
    switch (pilihan)
    {
    case 1:
        cout << "\n Masukkan a: ";
        cin >> a;
        cout << "\n Masukkan b: ";
        cin >> b;
        keliling_persegi_panjang = 2*(a+b);
        luas_persegi_panjang = a*b;
        cout << "Keliling Persegi Panjang: " << keliling_persegi_panjang << endl;
        cout << "Luas Persegi Panjang: " << luas_persegi_panjang << endl;
        break;
    case 2:
        cin >> r;
        keliling_lingkaran = 2*3.14*r;
        luas_lingkaran = 3.14*r*r;
        cout << "Keliling Lingkaran: " << keliling_lingkaran << endl;
        cout << "Luas Lingkaran: " << luas_lingkaran << endl;
        break;
    case 3:
        cout << "\n Masukkan a: ";
        cin >> a;
        cout << "\n Masukkan b: ";
        cin >> b;
        cout << "\n Masukkan t: ";
        cin >> t;
        keliling_segitiga = a+b+t;
        luas_segitiga = (a*b)/2;
        cout << "Keliling Segitiga: " << keliling_segitiga << endl;
        cout << "Luas Segitiga: " << luas_segitiga << endl;

        break;
    default:
        cout << "anda salah input" << endl;
        // agar looping ketika salah input
        question_01();
        break;
    }

}

//SOAL NOMOR 2
void question_02() {
    //Deklarasi Nomor 2
    float input_weight;
    float input_height;
    int imt;
    cout << "\nBerat badan (kg): ";
    // looping ketika user menginputkan bukan angka tapi string
    while (!(cin >> input_weight))
    {//looping ketika user memasukkan bukan angka
        cout << "masukkan dengan angka : ";
        //menghapus kesalahan input pada user
        cin.clear();
        // mengekstrak dan membuang seluruh karakter dan delimeter dari input 
        // dan "\n" untuk melompati agar tidak terjadi looping berulang-ulang
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Tinggi Badan (m): ";
    //looping ketika user memasukkan bukan angka
    while (!(cin >> input_height))
    {
        cout << "masukkan angka kembali: ";
        cin.clear();
        cin.ignore(1);
        cout << endl;
    }
    // Input Tugas Nomor 2

    // Assignment Tugas Nomor 2
    imt =  input_weight/(input_height*input_height);

    // Kondisi Assignment Tugas Nomor 2
    if (imt <= 18.5)
    {
        cout << "Termasuk kurus" << endl;
    } else if (imt > 18.5 && imt <= 25) {
        cout << "Termasuk normal" << endl;
    } else if (imt > 25 && imt <= 30){
        cout << "Termasuk gemuk" << endl;
    } else if (imt > 30) {
        cout << "Termasuk kegemukan" << endl;
    } else {
        cout << "Anda salah input" << endl;
    }
}

// SOAL NOMOR 3
void question_03() {
    //Deklarasi Nomor 3
    int input_work_hour;
    int work_hour;
    int salary;
    int real_salary;
    int long_work;
    int long_salary;
    int work_1_condition;
    int work_2_condition;
    int work_3_condition;
    int punish;
    int punish_salary;

    // Input Tugas Nomor 3
    cout << "Jam Kerja: ";
    while (!(cin >> input_work_hour))
    {//looping ketika user memasukkan bukan angka
        cout << "masukkan dengan angka: ";
        //menghapus kesalahan input pada user
        cin.clear();
        // mengekstrak dan membuang seluruh karakter dan delimeter dari input 
        // dan "\n" untuk melompati agar tidak terjadi looping berulang-ulang
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }    

    // Assignment Tugas Nomor 3
    work_1_condition = input_work_hour > 60;
    work_2_condition = input_work_hour < 50;
    work_3_condition = input_work_hour >= 50 && input_work_hour <=60;

    // Kondisi Assignment Tugas Nomor 3
    if (work_1_condition)
    {
        long_work = input_work_hour - 60;
        long_salary = long_work * 6000;
        salary = input_work_hour * 5000;
        real_salary = input_work_hour + long_salary;
        cout << "Upah: " << salary << "\nLembur: " << long_salary << "\nDenda: " << "\n-----------------" << "\nTotal: " << real_salary;
        
    } else if (work_2_condition){
        punish = input_work_hour - 60;
        punish_salary = punish * 1000;
        salary = input_work_hour * 5000;
        real_salary = input_work_hour - punish_salary;
        cout << "Upah: " << salary << "\nLembur: " << "\nDenda: " << punish_salary << "\n-----------------" << "\nTotal: " << real_salary;
        
    } else if (work_3_condition) {
        salary = input_work_hour * 5000;
        cout << "Upah: " << salary << "\nLembur: " << "\nDenda: " << "\n-----------------" << "\nTotal: " << salary;      
    } else {
        cout << "Anda salah input" << endl;
    }
}