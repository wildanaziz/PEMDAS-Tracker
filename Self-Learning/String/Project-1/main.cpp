#include <iostream>
#include <string>

int main(){
    std::string input;
    int position = 0;
    int sum = 0;
    std::cout << "Input your text: ";
    getline(std::cin, input);

    while (true)
    {
        position = input.find(" ", position + 1);
        sum++;
        if (position < 0)
        {
            break;
        }        
    }

    std::cout << "Your input is: " << input << std::endl;
    std::cout << "Sum of word has been written: " << sum << std::endl;
    return 0;
}