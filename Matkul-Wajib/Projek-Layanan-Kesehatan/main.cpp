#include <iostream>
using namespace std;

const int maks_nomor = 100;

struct nomor_antrian {
    int nomor;
    string obat;
    int harga;
};

nomor_antrian urutan_nomor[maks_nomor];
int sum_nomor = 0;

void sum_antrian();
void take_drugs();
void show_antrian();
int price_obat();
char call_add_obat();

int main() {
    int pilihan;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Ambil Obat" << endl;
        cout << "3. Tampilkan Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                sum_antrian();
                break;

            case 2:
                take_drugs();
                break;

            case 3:
                show_antrian();
                break;

            case 4:
                cout << "Arigatou!" << endl;
                cout << "Anda keluar dari program" << endl;
                cout << "Program telah selesai" << endl;
                cout << "Semoga harimu menyenangkan :)" << endl;
                break;

            default:
                cout << "ERROR" << endl;
                cout << "Pilihan yang kamu masukkan tidak ada dalam daftar menu."<< endl;
                cout << "Silakan coba lagi." << endl;
        }

    } while (pilihan != 4);

    return 0;
}

void sum_antrian() {
    char add_obat;
    bool choose_add_obat = true;
    
	if (sum_nomor < maks_nomor) {
        cout << "Hore!!! Nomor antrian " << sum_nomor + 1 << " telah ditambahkan." << endl;

        urutan_nomor[sum_nomor].nomor = sum_nomor + 1;
		
        while(choose_add_obat){
			cout << "Mau pesan obat apa : ";
        	cin >> urutan_nomor[sum_nomor].obat;
        	urutan_nomor[sum_nomor].harga = price_obat();
        	cout << "Yakin dengan obat yang anda input? Y/N, y/n: ";
            cin >> add_obat;
			if(add_obat == 'Y'){
				break;
			} else if (add_obat == 'N') {
				choose_add_obat = true;
			} else if (add_obat == 'y') {
				break;
			} else if (add_obat == 'n') {
				choose_add_obat = true;
			} else {
			    do {
			        call_add_obat();
			    } while(add_obat != 'Y' || add_obat != 'N' || add_obat != 'n' || add_obat != 'y');
			}
        }
        cout << "Arigatou!, pesananmu telah dicatat" << endl;
        ++sum_nomor;
    } else {
        cout << "Sayang sekali antrian telah penuh. Tidak bisa lagi menambahkan nomor antrian :( ." << endl;
    }
}

char call_add_obat() {
    char add_obat;
	cout << "apakah mau menambah lagi? Y/N, y/n";
    cin >> add_obat;
    return add_obat;
}

void take_drugs() {
    int nomor;
    cout << "Konnichiwa! Mau ambil obat nomor berapa : ";
    cin >> nomor;

    if (nomor >= 1 && nomor <= sum_nomor) {
        cout << "Ambil obat untuk nomor antrian ke - " << nomor << " (" << urutan_nomor[nomor - 1].obat << ")." << endl;
        cout << "Semoga cepat sembuh :D" << endl << endl;
        // mengambil nomor
        for (int i = nomor - 1; i < sum_nomor - 1; ++i) {
            urutan_nomor[i] = urutan_nomor[i + 1];
        }

        --sum_nomor; // Kurangi jumlah antrian
    } else {
        cout << "Wah, nomor antrian sudah diambil :(" << endl;
    }
}

void show_antrian() {
    cout << "Daftar Nomor Antrian Yang Sudah Ada :" << endl;
    for (int i = 0; i < sum_nomor; ++i) {
        cout << "Nomor: " << urutan_nomor[i].nomor << ", Obat: " << urutan_nomor[i].obat << ", Harga: " << "Rp. "  <<urutan_nomor[i].harga << endl;
    }
}

int price_obat() {
	int harga = 0;
	cout << "Masukkan harga obat tersebut: ";
	cin >> harga;
	return harga;
	
}