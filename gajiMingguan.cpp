#include <iostream>

using namespace std;

int main() {
    string nama;
    int gol, jamKerja, gaji = 0;
    const int gol1 = 25000, 
              gol2 = 35000,
              gol3 = 50000;

    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan Golongan anda (2/3): ";
    cin >> gol;
    cout << "Masukkan jam kerja anda per minggu :";
    cin >> jamKerja;

    // Calculate base salary based on golongan
    if (gol == 2) {
        gaji = jamKerja * gol2;
    } else if (gol == 3) {
        gaji = jamKerja * gol3;
    } else {
        gaji = jamKerja * gol1;
    }
    // Calculate overtime pay if jamKerja > 48
    if (jamKerja > 48) {
        int overtime = (jamKerja - 48) * 10000;
        gaji += overtime;
    }

    cout << "\n";
    cout << "Total Gaji " << nama << " per minggu " << gaji << endl;

    return 0;
}
