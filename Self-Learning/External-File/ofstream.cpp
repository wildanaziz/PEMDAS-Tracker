#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream data;
    std::ifstream read_data;
    std::string output, buffer;

    data.open("first_data.txt");
    data << "uji coba extenal file";
    data.close();

    data.open("second_data.txt", std::ios::app);
    data << "\nCetak data kedua";
    data.close();

    read_data.open("second_data.txt");
    while(getline(read_data, buffer)){
        std::cout << buffer << std::endl;
        
    }


}