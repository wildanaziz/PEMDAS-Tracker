#include <iostream>

using namespace std;

int main() {
    // count total and average of expenses
    float a = .01;
    cout << a;
    int number;
    int total=0;
    int count_input=0;
    cout << "input your first expenses (-1 for exit from program): ";
    cin >> number;

    while (number != -1)
    {
        total += number;
        cout << "input your next expenses (-1 for exit from program): ";
        cin >> number;
        count_input++;
    }

    cout << "your total input expenses: " << count_input << endl;
    cout << "total your expenses: " << total << endl;
    cout << "average your expenses: " << total/count_input << endl;
    
}