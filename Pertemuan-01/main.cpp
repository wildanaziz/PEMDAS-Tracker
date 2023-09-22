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
    cout << "soal nomor 1\n";
    cout << "masukkan operator pertama: " ;
    cin>> input_1;
    cout << "masukkan operator kedua: " ;
    cin>> input_2;

    // Input Soal Nomor 2
    cout << "\nsoal nomor 2\n";
    cin.get();
    cout << "masukkan nama: " ;
    // penggunaan getline agar bisa lebih dari 1 kata
    getline(cin, input_name);
    cout << "kelurahan: " ;
    getline(cin, input_out);
    cout << "masukkan posisi awal KwH meter: " ;
    cin>> input_first_kwh;
    cout << "masukkan posisi akhir KwH meter: " ;
    cin >> input_last_kwh;
    cout << "masukkan biaya beban saat ini: ";
    cin>> input_cost_now;
    cout << "masukkan pajak: ";
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
    cout << "\nhasil pertambahan: " << add << endl;
    cout << "hasil pengurangan: " << substract << endl;
    cout << "hasil perkalian: " << multi << endl;
    cout << "hasil pembagian: " << div << endl;

    // Output Soal Nomor 2
    cout << "===================PLN " << input_out << "===================" << endl;
    cout << "Nama: " << input_name << endl;
    cout << "Kelurahan: " << input_out << endl;
    cout << "Pemakaian bulan ini: " << recent_month << " KwH meter" << endl;
    cout << "Tarif Listrik: " << " Rp " << recent_cost << ",-" << endl;
    cout << "PPJ 10%: " << " Rp " << tax << ",-" << endl;
    cout << "Total Bayar : " << " Rp " << real_cost << ",-" << endl;

    return 0;
}