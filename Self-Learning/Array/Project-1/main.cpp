#include <iostream>
#include <algorithm>
#include <array>

const int array_size = 5;

void array_input();
void print_array(std::array <int, array_size> &ukt);
void print_array_data(std::array <int, array_size> &ukt);
void input_array(std::array <int, array_size> &ukt);
void list();
int main()
{
    array_input();
    return 0;
}

void array_input() {
    
    std::array <int, array_size> ukt;
    char option, choose;
    while(true){
        std::cout << "Welcome to UKT Tracer" << std::endl;
        list();
        std::cout << "Input your option: ";
        std::cin >> option;
        if(option == '1'){
            input_array(ukt);
            std::cout << std::endl;
            print_array(ukt);

        } else if(option == '2'){
            input_array(ukt);

            std::cout << std::endl;
            print_array_data(ukt);

            while(true){
                std::cout << "Do you want to sort the data? (y/n)";
                std::cin >> option;
                if(option == 'y'){
                    std::sort(ukt.begin(), ukt.end());
                    print_array_data(ukt);
                    array_input();
                } else if(option == 'n') {
                    break;
                } else {
                    std::cout << "Your input doesn't match please try again -_-" << std::endl;
                }
            }
        } else if(option == '3'){
            input_array(ukt);

            std::cout << std::endl;
            print_array(ukt);
            
            std::cout << std::endl;
            print_array_data(ukt);
        } else if(option == '4'){
            std::cout << "The program has stopped thanks for using :)" << std::endl;
            break;
        } else {
            std::cout << "Your input doesn't match please try again -_-" << std::endl;
        }
    }
}

void list(){
    std::cout << "\n1. Show Graph Only\n2. Show Data only\n3. Show Twice\n4.Exit" << std::endl;
}

void print_array(std::array <int, array_size> &ukt){
    std::cout << "Graph of Salary College Students Parents" << std::endl;
    for(int i = 0; i <= 4; i++){
        if(i == 0){
            std::cout << "0-499000      : ";
        } else if (i >= 3) {
            std::cout << (i*1000000) - 1000000 << "-" << (i*1000000) - 1 << "    : ";
        } else {
            std::cout << i*500000 << "-" << (i*1000000) - 1 << "   : ";
        }


        for(int threshold=0; threshold<ukt[i]; threshold++) {
            std::cout << "=";
        }
        std::cout << std::endl;
    }
}

void print_array_data(std::array <int, array_size> &ukt){
    std::cout << "College Parent Salary Dataset" << std::endl;
    for(int j=0; j <= 4; j++){
        if(j == 0){
            std::cout << "0-499000      : ";
        } else if (j >= 3) {
            std::cout << (j*1000000) - 1000000 << "-" << (j*1000000) - 1 << " : ";
        } else {
            std::cout << j*500000 << "-" << (j*1000000) - 1 << ": ";
        }
        std::cout << ukt[j];
        std::cout << std::endl;
    }
}

void input_array(std::array <int, array_size> &ukt){
    std::cout << "Range of Salary College Students Parents" << std::endl;
    for(int i = 0; i <= 4; i++){
        std::cout << "input your number: ";
        if(i == 0){
            std::cout << "0-499000: ";
        } else if (i >= 3) {
            std::cout << (i*1000000) - 1000000 << "-" << (i*1000000) - 1 << ": ";
        } else {
            std::cout << i*500000 << "-" << (i*1000000) - 1 << ": ";
        }
        std::cin >> ukt[i];
    }
}