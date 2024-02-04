#include <iostream>
#include <fstream>
#include <string>

struct Library {
    std::string name;
    int year;
    std::string publisher;
};

// Fungsi untuk menulis string ke file biner
void writeString(std::ofstream &stream, const std::string &str) {
    size_t size = str.size();
    stream.write(reinterpret_cast<const char*>(&size), sizeof(size_t));
    stream.write(str.data(), size);
}

// Fungsi untuk membaca string dari file biner
void readString(std::ifstream &stream, std::string &str) {
    size_t size;
    stream.read(reinterpret_cast<char*>(&size), sizeof(size_t));
    str.resize(size);
    stream.read(&str[0], size);
}

int main() {
    std::ofstream database;
    Library book1, book2, book3;

    database.open("database.bin", std::ios::binary);

    book1.name = "Muhammad";
    book1.year = 2010;
    book1.publisher = "DDG";

    book2.name = "Bumi";
    book2.year = 2017;
    book2.publisher = "Okie";

    book3.name = "Sephia";
    book3.year = 2020;
    book3.publisher = "Treat";

    // Menulis data ke file biner dengan serialize manual
    writeString(database, book1.name);
    database.write(reinterpret_cast<char*>(&book1.year), sizeof(int));
    writeString(database, book1.publisher);

    writeString(database, book2.name);
    database.write(reinterpret_cast<char*>(&book2.year), sizeof(int));
    writeString(database, book2.publisher);

    writeString(database, book3.name);
    database.write(reinterpret_cast<char*>(&book3.year), sizeof(int));
    writeString(database, book3.publisher);

    database.close();

    // Membaca data dari file biner dengan serialize manual
    std::ifstream read_data("database.bin", std::ios::binary);
    std::string name;
    int year;
    std::string publisher;

    readString(read_data, name);
    read_data.read(reinterpret_cast<char*>(&year), sizeof(int));
    readString(read_data, publisher);
    std::cout << "Name: " << name << ", Year: " << year << ", Publisher: " << publisher << std::endl;

    readString(read_data, name);
    read_data.read(reinterpret_cast<char*>(&year), sizeof(int));
    readString(read_data, publisher);
    std::cout << "Name: " << name << ", Year: " << year << ", Publisher: " << publisher << std::endl;

    readString(read_data, name);
    read_data.read(reinterpret_cast<char*>(&year), sizeof(int));
    readString(read_data, publisher);
    std::cout << "Name: " << name << ", Year: " << year << ", Publisher: " << publisher << std::endl;

    read_data.close();

    return 0;
}