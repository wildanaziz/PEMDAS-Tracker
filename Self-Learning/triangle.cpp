#include <iostream>

using namespace std;
void triangle_up();
void triangle_down();
void triangle_up_down();


int main() {
    // triangle mode 1
    triangle_up();
    // triangle mode 2
    triangle_down();
    triangle_up_down();


}

void triangle_up() {
    int input;
    cout << "input your line: ";
    cin >> input;

    for(int i=0; i<=input; i++){
        for(int k=input; k>i; k--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf(" *");
        }
        printf("\n");
    }
}

void triangle_down() {
    int input;
    cout << "input your line: ";
    cin >> input;

    for(int i=0; i<=input; i++){
        for(int j=0; j<=i; j++){
            printf(" ");
        }
        for(int k=input; k>=i; k--){
            printf("* ");
        }
        printf("\n");
    }
}

void triangle_up_down() {
    int input;
    cout << "input your line: ";
    cin >> input;

    for(int i=0; i<=input; i++){
        for(int k=input; k>i; k--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf(" *");
        }
        printf("\n");
    }

    for(int i=0; i<=input; i++){
        for(int j=0; j<=i; j++){
            printf(" ");
        }
        for(int k=input; k>=i; k--){
            printf("* ");
        }
        printf("\n");
    }
}