#include <iostream>
#include <stdio.h>
#include <limits>
// memanggil header agar bisa menjalancin >> input_type;kan fungsi void question_01() question_02() & question_03()
// question_04 & question_05
#include "function_question.h"

// agar tidak menulis std lagi pada program
using namespace std;

// fungsi soal nomor 01
void question_01() {
    //deklarasi
    int input_cost, real_cost;
    float cost;

    // input nomor 01 memasukkan harga
    cout << "Soal Nomor 01" << endl;
    cout << "1. Harga Kurang dari 139000 tidak mendapatkan potongan" << endl;
    cout << "2. Harga Lebih dari sama dengan 139000 sampai kurang dari 163000 mendapatkan potongan 2,5%" << endl;
    cout << "3. Harga Sama dengan 163000 dan selebihnya mendapatkan potongan 12,5%" << endl;
    cout << "masukkan harga: ";
    // looping ketika user menginputkan bukan angka tapi string
    while (!(cin >> input_cost))
    {//looping ketika user memasukkan bukan angka
        cout << "masukkan angka kembali: ";
        //menghapus kesalahan input pada user
        cin.clear();
        // mengekstrak dan membuang seluruh karakter dan delimeter dari input 
        // dan "\n" untuk melompati agar tidak terjadi looping berulang-ulang
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Assignment dan kondisi Soal latihan Nomor 1
    if (input_cost < 139000){
        // jika input dari user kurang dari 139000

        //output tidak ada potongan
        cout << "Harga: " << input_cost << endl;
        cout << "tidak ada potongan" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_cost >= 139000 && input_cost < 163000) {
        // jika input dari user lebih dari sama dengan 139000 dan kurang dari 163000

        // menghitung diskon dengan mengalikan input user dengan 2,5%
        cost = input_cost * (2.5/100);
        // menghitung hasil bersih yang didapat dengan mengurangi nilai input dari user dengan cost
        real_cost = input_cost - cost;
        // output hasil yang didapat
        cout <<  "Harga: " << real_cost << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_cost >= 163000){
        // jika input dari user lebih dari sama dengan 163000

        // menghitung diskon dengan mengalikan input user dengan 12,5%
        cost = input_cost * (12.5/100);
        // menghitung hasil bersih yang didapat dengan mengurangi nilai input dari user dengan cost
        real_cost = input_cost - cost;
        // output hasil yang didapat
        cout <<  "Harga: " << real_cost << endl;
        cout << "----------------------------------------------------------" << endl;
    } else {
        // ketika user salah input
        cout << "Anda salah memasukkan input" << endl;
        question_01();
    }

}

// fungsi soal nomor 02
void question_02() {
    // deklarasi
    string input_type;

    //input no 2 masukkan kode prodi
    cout << "Soal Nomor 02" << endl;
    cout << "List Kode Prodi yang Tersedia: \n 1. TIF\n 2. TKOM \n 3. SI \n 4. TI \n 5. PTI" << endl;
        //input jurusan yang diinginkan user
    cout << "Masukkan Kode Prodi: ";
    cin >> input_type;
    
// Assignment Latihan Nomor 2

    if (input_type == "TIF")
    {
        // Jika input = TIF maka output Teknik Informatika
        cout << "Teknik Informatika" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_type == "TKOM") {
        // Jika input = TKOM maka output Teknik Komputer
        cout << "Teknik Komputer" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_type == "SI") {
        // Jika input = SI maka output Sistem Informasi
        cout << "Sistem Informasi" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_type == "TI") {
        // Jika input = TI maka output Teknologi Informasi
        cout << "Teknologi Informasi" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_type == "PTI") {
        // Jika input = PTI maka output Pendidikan Teknologi Informasi
        cout << "Pendidikan Teknologi Informasi" << endl;
        cout << "----------------------------------------------------------" << endl;
    } else {
        // jika user salah input
        cout << "Anda Salah Memasukkan Kode" << endl;
        // pemanggilan kembali untuk memasukkan kode
        question_02();
    }

    // tidak bisa di run gatau caranya
    // Assignment Soal Latihan Nomor 2
    /*enum input_response{1 = TIF, TKOM, SI, TI, PTI};

    input_response response;
    

    switch (response)
    {
    case TIF:
        cout << "Teknik Informatika" << endl;
        break;
    case TKOM:
        cout << "Teknik Komputer" << endl;
        break;
    case SI:
        cout << "Sistem Informasi" << endl;
        break;
    case TI:
        cout << "Teknologi Informasi" << endl;
        break;
    case PTI:
        cout << "Pendidikan Teknologi Informasi" << endl;
        break;

    default:
        cout << "Salah input" << endl;
        break;
    }*/
}

// fungsi soal nomor 03
void question_03() {

    //deklarasi
    int input_sale;
    int sale;
    int commision;
    int real_sale;

    //input nomor 03
    cout << "Soal Nomor 03" << endl;
    cout << "1. Harga Sama dengan 154000 mendapatkan tambahan 12000 dan komisi 3,5%" << endl;
    cout << "2. Harga Diatas 154000 sampai kurang dari 567000 mendapatkan tambahan 37000 dan komisi 12,5%" << endl;
    cout << "3. Harga Sama dengan 567000 dan selebihnya mendapatkan tambahan 79000 dan komisi 27,8%" << endl;
    cout << "masukkan penjualan: ";
    // mencegah user menginputkan string char 
    while (!(cin >> input_sale))
    {//looping ketika user memasukkan bukan angka
        cout << "masukkan penjualan kembali dengan angka: ";
        //menghapus kesalahan input pada user
        cin.clear();
        // mengekstrak dan membuang seluruh karakter dan delimeter dari input 
        // dan "\n" untuk melompati agar tidak terjadi looping berulang-ulang
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // kondisi soal nomor 03
    if (input_sale == 154000){
        // Jika input dari user sama dengan 154000

        // Menghitung penjualan yang didapat dari input user ditambah dengan 12000 jika sama dengan 154000
        sale =  input_sale + 12000;
        // Menghitung komisi yang didapat dari input user dengan mengali 3,5%
        commision = input_sale * (3.5/100);
        // Menghitung hasil bersih yang didapat dengan mengoperasikan nilai sale dengan commision
        real_sale = sale + commision;
        // output pendapatan bersih yang didapat
        cout << "Pendapatan Hari itu: " << real_sale << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if ((input_sale > 154000) && (input_sale < 567000)) {
        // Jika input dari user lebih dari 154000 sampai kurang dari 567000

        // Menghitung penjualan yang didapat dari input user ditambah dengan 37000 jika lebih dari 154000 sampai kurang dari 567000
        sale =  input_sale + 37000;
        // Menghitung komisi yang didapat dari input user dengan mengali 12,5%
        commision = input_sale * (12.5/100);
        // Menghitung hasil bersih yang didapat dengan mengoperasikan nilai sale dengan commision
        real_sale = sale + commision;
        // output pendapatan bersih yang didapat
        cout << "Pendapatan Hari itu: " << real_sale << endl;
        cout << "----------------------------------------------------------" << endl;
    } else if (input_sale > 567000){
        // Jika input dari user lebih dari 567000

        // Menghitung penjualan yang didapat dari input user ditambah dengan 79000 jika lebih dari 567000
        sale =  input_sale + 79000;
        commision = input_sale * (27.8/100);
        real_sale = sale + commision;
        cout << "Pendapatan Hari itu: " << real_sale << endl;
        cout << "----------------------------------------------------------" << endl;
    } else {
        //Jika Pendapatan yang didapat kurang dari 154000
        cout << "Pendapatan Hari itu: " << input_sale << endl;
        cout << "----------------------------------------------------------" << endl;
    }
}

// fungsi soal nomor 04
void question_04() {
    //deklarasi
    string input_division;
    string input_major;

    //input nomor 04
    cout << "Soal Nomor 04" << endl;
    cout << "List Kode Jurusan yang Tersedia: " << "\n1. TIF \n2. SI" << endl;
    cout << "Masukkan Kode Jurusan: ";
    cin >> input_division;

    // Kondisi Latihan Nomor 4
    if (input_division == "TIF") {
        //jika input jurusan dari user = TIF maka akan menampilkan Prodi jurusan TIF
        cout << "----------------------------------------------------------" << endl;
        cout << "List Kode Prodi yang Tersedia: \n1. TIF\n" << "2. TKOM" << endl;
        //input jurusan yang diinginkan user
        cout << "Masukkan Kode Prodi: ";
        cin >> input_major;
        if (input_major == "TIF")
        {
            //jika memilih TIF maka output Teknik Informatika
            cout << "Teknik Informatika" << endl;
            cout << "----------------------------------------------------------" << endl;
        } else if (input_major == "TKOM")
        {
            //jika memilih TKOM maka output Teknik Komputer
            cout << "Teknik Komputer" << endl;
            cout << "----------------------------------------------------------" << endl;
        } else {
            //Jika User salah input
            cout << "Anda salah masukkan kode" << endl;
            cout << "----------------------------------------------------------" << endl;
        }
        
    } else if (input_division == "SI")
    {
        //jika input jurusan dari user = SI maka akan menampilkan Prodi jurusan SI
        cout << "List Kode Prodi yang Tersedia: \n1. SI\n" << "2. TI\n" << "3. PTI" << endl;
        //input jurusan yang diinginkan user
        cout << "Masukkan Kode Prodi: ";
        cin >> input_major;

        if (input_major == "SI")
        {
            //jika memilih SI maka output Sistem Informasi
            cout << "Sistem Informasi" << endl;
            cout << "----------------------------------------------------------" << endl;
        } else if (input_major == "TI")
        {
            //jika memilih TI maka output Teknologi Informasi
            cout << "Teknologi Informasi" << endl;
            cout << "----------------------------------------------------------" << endl;
        } else if (input_major == "PTI") {
            //jika memilih PTI maka output PendidikanTeknologi Informasi
            cout << "Pendidikan Teknologi Informasi" << endl;
            cout << "----------------------------------------------------------" << endl;
        } else {
            // Jika user salah input
            cout << "Anda salah masukkan kode" <<endl;
        }
    
    } else {
        cout << "salah input" << endl;
        // pemanggilan fungsi masukkan kode kembali
        question_04();
    }
}

// fungsi soal nomor 05
void question_05() {
    //deklarasi
    int package, input_list_package, input_package, big_package, small_package, big_package_cost, small_package_cost, calculate_package_cost;
    int buy_package, package_remain;
    string agent_name;

    //Assignment Latihan Nomor 5
    package = 100; //jumlah barang yang tersedia 100
    big_package = (package/5)*2; //membagi big_package (barang besar) menjadi 2/3 dengan identitas "2"
    small_package = (package/5)*3; //membagi small_package (barang kecil)  menjadi 2/3 dengan identitas "3"
    big_package_cost = 534000; //harga big_package (barang besar)
    small_package_cost = big_package_cost/2; //harga small_package (barang kecil) setengah dari big_package (barang besar)
    
    
    // Input Latihan nomor 5
    cout << "Soal Nomor 05" << endl;
    cout << "List Barang Kami: \n" << "1. Barang Besar\n" << "2. Barang Kecil \n" << "*Masukkan dengan angka" << endl;
    cout << "Mau beli barang yang mana gan?: ";
    // mencegah user input dengan string char
    while (!(cin >> input_list_package))
    {//looping ketika user memasukkan bukan angka
        cout << "masukkan dengan angka: ";
        //menghapus kesalahan input pada user
        cin.clear();
        // mengekstrak dan membuang seluruh karakter dan delimeter dari input 
        // dan "\n" untuk melompati agar tidak terjadi looping berulang-ulang
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    //Kondisi Latihan Nomor 5
    if (input_list_package == 1)
    {
        //Input jika memilih nomor 1
        cout << "Masukkan jumlah barang yang ingin dibeli: ";
        cin >> input_package;

        //Kondisi Jika barang yang dibeli kurang dari stok atau stoknya ada
        if (input_package < big_package)
        {
            //Assignment menghitung barang sisa dengan mengurangi barang besar dengan input barang dari user
            package_remain = big_package - input_package;
            //Assignment menghitung harga barang dari input user
            calculate_package_cost = big_package_cost * input_package;

            // output barang besar tersedia
            cout << "----------------------------------------------------------" << endl;
            cout << "Hore barang tersedia !! :)" << endl;
            // input memasukkan nama user
            cout << "Masukkan nama agan: ";
            cin.get();
            getline(cin, agent_name);

            // output jumlah barang besar
            cout << "Jumlah Barang saat ini: " << big_package << endl;
            // output jumlah yang barang besar yang dimasukkan user
            cout << "Jumlah yang " << agent_name << " beli: " << input_package << endl;
            // output sisa barang dari gudang setelah user menginput barang
            cout << "Sisa barang saat ini: " << package_remain << endl;
            // output harga yang harus dibayar oleh user dengan memanggil nilai calculate
            cout << "Harga yang harus dibayar oleh saudara " << agent_name << " : " << "Rp "<< calculate_package_cost << endl;
            
        } else {
        // kondisi ketika user salah input dan melebihi stok
            cout << "barang tidak tersedia mohon maaf cari toko lain sana >_<" << endl;
        }
        
    } else if (input_list_package == 2) {
        // jika memilih 2 (barang kecil)
        // input jika memilih nomor 2 (barang kecil)
        cout << "Masukkan jumlah barang yang ingin dibeli: ";
        cin >> input_package;

        //Kondisi Jika barang yang dibeli kurang dari stok atau stoknya ada
        if (input_package < small_package)
        {
            //Assignment menghitung barang sisa dengan mengurangi barang kecil dengan input barang dari user
            package_remain = small_package - input_package;
            //Assignment menghitung harga barang dari input user
            calculate_package_cost = small_package_cost * input_package;

            // output barang tersedia
            cout << "Hore barang tersedia !! :)" << endl;
            // input memasukkan nama user
            cout << "Masukkan nama agan: ";
            cin.get();
            getline(cin, agent_name);

            // output jumlah barang kecil
            cout << "Jumlah Barang saat ini: " << small_package << endl;
            // output jumlah yang barang kecil yang dimasukkan user
            cout << "Jumlah yang " << agent_name << " beli: " << input_package << endl;
            // output sisa barang dari gudang setelah user menginput barang
            cout << "Sisa barang saat ini: " << package_remain << endl;
            // output harga yang harus dibayar oleh user dengan memanggil nilai calculate
            cout << "Harga yang harus dibayar oleh saudara " << agent_name << " : " << "Rp "<< calculate_package_cost << endl;
            cout << "----------------------------------------------------------" << endl;
        } else {
            // kondisi ketika user salah input dan melebihi stok
            cout << "barang tidak tersedia mohon maaf cari toko lain sana >_<" << endl;
        }
        
    } else {
        // kondisi ketika user salah input
        cout << "Sesuai Listnya dongggg ihhh!!!" << endl;
        question_05();
    }
    
}