#include <iostream>
#include <fstream>
#include <string>

struct Library {
    char name[100];
    int year;
    char publisher[100];
};

int main() {
    std::ifstream read_data;
    Library book;

    read_data.open("database.bin", std::ios::binary);
    read_data.read(reinterpret_cast<char*>(&book), sizeof(Library));
    std::cout << book.name << std::endl;
    std::cout << book.year << std::endl;
    std::cout << book.publisher << std::endl;
    read_data.close();

    return 0;
}