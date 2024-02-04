#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int total, number, day;
    float percentage, percentage_2;
    string name;
    cout << "input your name: ";
    cin >> name;
    cout << "input your first invest: ";
    cin >> number;
    cout << "input your invest percentage per day: ";
    cin >> percentage;
    cout << "input your day needed: ";
    cin >> day;

    percentage_2 = percentage/100;

    cout << name << "'s "<< "invest planner" << endl;
    for(int i=1; i<=day; i++)
    {
        total = number * pow(1+percentage_2, i);
        cout << "Day: " << i << " your invest: " << total << endl;
    }
}