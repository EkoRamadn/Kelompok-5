#include <iostream>
#include <string>
using namespace std;


int main() {
    string namaKaryawan;
    int golongan, jamKerja;

    // Input data karyawan
    cout << "Masukkan nama karyawan: ";
    cin >> namaKaryawan;
    cout << "Masukkan golongan (2 atau 3): ";
    cin >> golongan;
    cout << "Masukkan jumlah jam kerja dalam seminggu: ";
    cin >> jamKerja;

    // Hitung upah pokok berdasarkan golongan
    int upahPokok;
    if (golongan == 2) {
        upahPokok = jamKerja * 35000;
    }
    else if (golongan == 3) {
        upahPokok = jamKerja * 50000;
    }
    else {
        upahPokok = jamKerja * 25000;
    }

    // Hitung uang lembur (jika ada)
    int uangLembur = 0;
    if (jamKerja > 48) {
        uangLembur = (jamKerja - 48) * 10000;
    }

    // Hitung gaji total
    int gajiTotal = upahPokok + uangLembur;

    // Tampilkan hasil
    cout << "Total Gaji " << namaKaryawan << "per minggu : Rp " << gajiTotal << endl;

    return 0;
}