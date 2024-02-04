#include <iostream>

using namespace std;

void cube_surface_area(int &);
void cube_volume_area(int &);

int main() {
    char option;
    int input;

    while(true){
        cout << "\n1. Cube Surface Area\n2. Cube Volume Area\n3. Exit" << endl;
        cout << "Input your option: ";
        cin >> option;
        if (option == '1'){
            cout << "Input your number: ";
            cin >> input;
            cube_surface_area(input);
            cout << "\nYour result is: " << input << endl;

        } else if (option == '2'){
            cout << "Input your number: ";
            cin >> input;
            cube_volume_area(input);
            cout << "\nYour result is: " << input << endl;

        } else if(option == '3'){
            cout << "The program has stopped thanks :)" << endl;
            break;
        } else {
            cout << "Your input doesn't match try again -_-" << endl;
        }
    }
    return 0;
}

void cube_surface_area(int &cubeSurfaceRef){
    cubeSurfaceRef = 6 * cubeSurfaceRef;
}

void cube_volume_area(int &cubeVolumeRef){
    cubeVolumeRef = cubeVolumeRef * cubeVolumeRef * cubeVolumeRef;
}

