#include <iostream>

using namespace std;

int main() {
    // Deklarasi Seluruh Input
    float input_1;
    float input_2;
    string input_name;
    string input_out;
    int input_first_kwh;
    int input_last_kwh;
    int input_cost_now;
    int input_tax;

    // Input Soal Nomor 1
    cout << "Masukkan operator pertama: ";
    cin>> input_1;
    cout << "Masukkan operator kedua: " ;
    cin>> input_2;

    // Input Soal Nomor 2
    cout << "Program penghitung pemakaian listrik sederhana\n";
    cin.get();
    cout << "Masukkan nama: ";

    // penggunaan getline agar bisa lebih dari 1 kata
    getline(cin, input_name);
    cout << "Kelurahan: " ;
    getline(cin, input_out);
    cout << "Masukkan posisi awal KwH meter: ";
    cin>> input_first_kwh;
    cout << "Masukkan posisi akhir KwH meter: ";
    cin >> input_last_kwh;
    cout << "Masukkan biaya beban saat ini: ";
    cin>> input_cost_now;
    cout << "Masukkan pajak: ";
    cin>> input_tax;

    // Menjalakan Tugas untuk Soal Nomor 1
    int add = input_1 + input_2;
    int substract = input_1 - input_2;
    int multi = input_1 * input_2;
    float div = input_1 / input_2;
    
    // Menjalankan Tugas untuk Soal Nomor 2
    int recent_month = input_last_kwh - input_first_kwh;
    int recent_cost = recent_month * input_cost_now;
    float count_tax = input_tax / 100.0;
    int tax = recent_cost * count_tax;
    int real_cost = recent_cost + tax;

    // Output Soal Nomor 1
    cout << "Hasil pertambahan: " << add << endl;
    cout << "Hasil pengurangan: " << substract << endl;
    cout << "Hasil perkalian: " << multi << endl;
    cout << "Hasil pembagian: " << div << endl;

    // Output Soal Nomor 2
    cout << "===================PLN " << input_out << "===================" << endl;
    cout << "Nama: " << input_name << endl;
    cout << "Kelurahan: " << input_out << endl;
    cout << "Pemakaian bulan ini: " << recent_month << " KwH meter" << endl;
    cout << "Tarif Listrik: " << " Rp " << recent_cost << ",-" << endl;
    cout << "PPJ 10%: " << " Rp " << tax << ",-" << endl;
    cout << "Total Bayar : " << " Rp " << real_cost << ",-" << endl;
    cout << "================================================";

    return 0;
}