#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fungsi_epoch();

int main() {
    
    fungsi_epoch();
    return 0;
}

void fungsi_epoch() {
    int steps_per_epochs = 10;
    int train = 20;
    int valid = 10;
    int test = 5;

    int model[3] = {1000, 1000, 1000}; // inisialisasi model

    for (int i = 0; i < steps_per_epochs; i++) {
        int train_data = train + 1;
        int validation_data =valid + 1;
        int dataTest =  test + 1;

        int loss = (model[0] / (i+1)) * (train_data + validation_data + dataTest) * 100;
        cout << "[epoch-" << i+1 << "/" << steps_per_epochs << "] Loss " << loss << "%" << endl;

        // proses data
        int result = (train_data + validation_data) * dataTest;
        if (result > model[0]) {
            model[2] = model[1];
            model[1] = model[0];
            model[0] = result;
        } else if (result > model[1]) {
            model[2] = model[1];
            model[1] = result;
        } else if (result > model[2]) {
            model[2] = result;
        }
    }

    cout << "[Result] Algorithm CNN - avg Loss " << model[0] / steps_per_epochs << "%" << endl;
    cout << "Model Output [" << model[0] << ", " << model[1] << ", " << model[2] << "]" << endl;

}