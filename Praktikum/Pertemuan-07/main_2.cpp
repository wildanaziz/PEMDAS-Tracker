#include<iostream>
using namespace std;

//deklarasi dan pemanggilan
int source[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
int dest[3][3];
int a[3][3] = {{17,20,28},{13,23,27},{14,13,22}};
int b[3][3] = {{11,12,23},{10,14,25},{10,25,27}};
const int dest_cols = sizeof(dest[0])/sizeof(int);
const int a_cols = sizeof(a[0])/sizeof(int);
const int b_cols = sizeof(b[0])/sizeof(int);
const int source_cols = sizeof(source[0]) / sizeof(int);
void line_mins();
void addition(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]);
void subtraction(int dest[][dest_cols], int a[][a_cols], int
b[][b_cols]);
void multiplication(int dest[][dest_cols], int a[][a_cols], int
b[][b_cols]);
int isDiagonalMatrix(int source[][source_cols]);
int isIdentityMatrix(int source[][source_cols]);

int main(){
    addition(dest, a, b);
    subtraction(dest, a, b);
    multiplication(dest, a,b);
    cout << isDiagonalMatrix(source);
    cout << isIdentityMatrix(source);
return 0;
}

void line_mins(){
    for (int x = 0; x < 30; x++){
        cout << "-";
    }
}

void addition(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << "pertambahan" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] + b[y][x];
            cout << dest[y][x] << "\t";
        }cout << endl;
    }
    line_mins();
    cout << endl;
}

void subtraction(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << endl;
    cout << "pengurangan" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] - b[y][x];
            cout << dest[y][x] << "\t";
        }
        cout << endl;
    }
    line_mins();
    cout << endl;
}


void multiplication(int dest[][dest_cols], int a[][a_cols], int b[][b_cols]){
    cout << endl;
    cout << "perkalian" << endl;
    for(int y = 0; y < a_cols; y++){
        for(int x = 0; x < b_cols; x++){
            dest[y][x] = a[y][x] * b[y][x];
            cout << dest[y][x] << "\t";
        }cout << endl;
    }
    line_mins();
    cout << endl;
}

int isDiagonalMatrix(int source[][source_cols]){
    for(int y = 0; y < source_cols; y++){
        for(int x = 0; x < source_cols; x++){
            if( x != y and source[y][x] != 0){
                return 0;
            }
        }
    }
    return 1;
}

int isIdentityMatrix(int source[][source_cols]){
    if(isDiagonalMatrix(source) == 0){
    return 0;
    }
    for(int y = 0; y < source_cols; y++){
        for(int x = 0;x < source_cols; x++){
            if(x == y and source[y][x] != 1){
                return 0;
            }
        }
    }
    return 0;
}