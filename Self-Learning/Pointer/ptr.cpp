#include <iostream>

using namespace std;

int main() {
    int test = 10;
    int *testPtr = &test;

    cout << "Value of test: " << test << endl;
    cout << "Address of test: " << testPtr << endl;

    return 0;
}