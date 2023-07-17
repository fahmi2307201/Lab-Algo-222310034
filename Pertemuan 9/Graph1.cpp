#include <iostream>
using namespace std;

const int MAX_PULAU = 100;

int main() {
    int jumlahPulau;
    int costMatriks[MAX_PULAU][MAX_PULAU];

    cout << "Masukkan jumlah pulau: ";
    cin >> jumlahPulau;

    cout << "Masukkan nilai cost matriks: " << endl;
    for (int i = 0; i < jumlahPulau; i++) {
        for (int j = 0; j < jumlahPulau; j++) {
            cin >> costMatriks[i][j];
        }
    }

    cout << "Jumlah pulau: " << jumlahPulau << endl;
    cout << "Nilai cost matriks: " << endl;
    for (int i = 0; i < jumlahPulau; i++) {
        for (int j = 0; j < jumlahPulau; j++) {
            cout << costMatriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
      }
