#include <iostream>
#include <string>

void makanan() {
    int total = 0;
    int nasiGoreng = 0;
    int mieGoreng = 0;
    int capcay = 0;

    std::cout << "Nasi Goreng (Rp15.000) Jumlah: ";
    std::cin >> nasiGoreng;
    total += nasiGoreng * 15000;

    std::cout << "Mie Goreng (Rp10.000) Jumlah: ";
    std::cin >> mieGoreng;
    total += mieGoreng * 10000;

    std::cout << "Capcay (Rp15.000) Jumlah: ";
    std::cin >> capcay;
    total += capcay * 15000;

    std::cout << "Total biaya yang harus dibayarkan: Rp" << total << std::endl;
}

int main() {
    while (true) {
        std::cout << "Selamat datang di CafeX, pilih menu yang ingin Anda pesan:\n";
        std::cout << "1. Makanan\n";
        std::cout << "2. Minuman\n";
        std::cout << "3. Keluar\n";
        int userInput;
        std::cin >> userInput;

        switch (userInput) {
        case 1:
            makanan();
            break;
        case 2:
            // Tambahkan pemanggilan fungsi untuk minuman
            break;
        case 3:
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
}