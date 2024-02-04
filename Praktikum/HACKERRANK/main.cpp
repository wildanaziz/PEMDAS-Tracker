#include <iostream>
using namespace std;
void addition (int first_of[100][100], int second_of[100][100], int result[100][100], int input_line, int column)
{    cout << "Hasil Penjumlahan Matriks yakni : "<<endl;
     for(int i=0; i<column; i++)
    {
        for(int j=0; j<input_line; j++)
        {
            result[i][j] = first_of[i][j] + second_of[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
void subtraction (int first_of[100][100], int second_of[100][100], int result[100][100], int input_line, int column)
{    cout << "Hasil Penjumlahan Matriks yakni : "<<endl;
     for(int i=0; i<column; i++)
    {
        for(int j=0; j<input_line; j++)
        {
            result[i][j] = first_of[i][j] - second_of[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
void multiplication (int first_of[100][100], int second_of[100][100], int result[100][100], int input_line, int column)
{
     if(input_line != column)
     {
        cout << "tidak dapat melakukan perkalian matriks karena nilai dari kolom dan baris tidak sinkron"<<endl;
     }
     for (size_t i = 0; i < input_line; i++)
     {
        for (size_t j = 0; j < column; j++)
        {
            for (size_t k = 0; k < column; k++)
            {
                result[i][j] += first_of[i][k] * second_of[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
     }
     
}
int isDiagonalMatrix (int cek_matriks_diagonal[100][100], int input_line, int column)
{
    for (size_t i = 0; i < input_line; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            if (i != j && cek_matriks_diagonal[i][j] != 0)
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}
int isIdentityMatrix (int cek_matriks_identitas[100][100], int input_line, int column)
{
    for (size_t i = 0; i < input_line; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            if ((i == j && cek_matriks_identitas[i][j] != 1) || (i != j && cek_matriks_identitas[i][j]))
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}
int main(){
    int input_line, column, operation_of;
    int first_of [100][100];
    int second_of [100][100];
    int result [100][100];
    int check [100][100];
    cout << "Operasi Perhitunhan Matriks"<<endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Cek Matriks Diagonal" << endl;
    cout << "5. Cek Matriks Identitas" << endl;
    cout << "Pilih Nomor Perhitungan Matriks : ";
    cin >> operation_of;
    cout << "Masukkan Jumlah Kolom: ";
    cin >> column;
    cout << "Masukkan Jumlah Baris: ";
    cin >> input_line;
    if (operation_of == 4 || operation_of == 5)
    {
        cout << "Masukkan Nilai MATRIKS untuk pengecekan" << endl;
        for(int i=0; i<column; i++)
        {
            for(int j=0; j<input_line; j++)
            {
                cout << "Nilai Matriks - [" << i+1 << "][" << j+1 <<"] : ";
                cin >> check[i][j];
            }
            
        }
        switch (operation_of)
        {
        case 4:

            if (isDiagonalMatrix(check, input_line, column))
            {
                cout << "BAGIAN DARI Matriks Diagonal";
            }
            else 
            {
                cout << "TIDAK BAGIAN DARI Matriks Diagonal";   
            }
            
            break;
        
        case 5:
            
            if (isIdentityMatrix(check, input_line, column))
            {
                cout << "BAGIAN DARI Matriks Identitas";
            }
            else 
            {
                cout << "TIDAK BAGIAN DARI Matriks Identitas";   
            }
            
            break;
            break;
        }
        
    }
    else
    {
          cout << "Masukkan Nilai dari Matriks Pertama" << endl;
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<input_line; j++)
        {
            cout << "Nilai Matriks Ke - [" << i+1 << "][" << j+1 <<"] : ";
            cin >> first_of[i][j];
        }
        
    }
    cout << "Masukkan Nilai dari Matriks Kedua" << endl;
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<input_line; j++)
        {
            cout << "Nilai Matriks Ke - [" << i+1 << "][" << j+1 <<"] : ";
            cin >> second_of[i][j];
        }
        
    }
    switch(operation_of)
    {
        case 1 :
        addition(first_of, second_of, result, input_line, column);
        break;
        case 2 :
        subtraction(first_of, second_of, result, input_line, column);
        break;
        case 3 :
        multiplication(first_of, second_of, result, input_line, column);
        break;
    }
    }
    
  
}