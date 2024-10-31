#include <iostream>
using namespace std;

int main(){
    int jumMotor, jumMobil, jamMasuk, jamKluar, lamaParkir = 0, totalBiaya = 0;
    const int biayaMotor = 2000,
          biayaMobil = 5000;
    int jumBiayaMotor = 0,
        jumBiayaMobil = 0;

    cout << "Masukan jumlah motor : ";
    cin >> jumMotor;
    cout << "Masukan jumlah mobil : ";
    cin >> jumMobil;
    cout << "Input jam masuk (format 34 jam) : ";
    cin >> jamMasuk;
    cout << "input jam keluar (format 24 jam) : ";
    cin >> jamKluar;

    if( jamMasuk > 24 || 0 > jamMasuk ||  24 < jamKluar || jamKluar < 0){
        cout << "format jam salah";
        return 0;
    }

    lamaParkir = (24 + jamKluar) - jamMasuk;

    jumBiayaMotor = (jumMotor * biayaMotor) * lamaParkir;
    jumBiayaMobil = (jumMobil * biayaMobil) * lamaParkir;

    totalBiaya = jumBiayaMobil + jumBiayaMotor;

    cout << "\n ";
    cout << "total biaya parkir : Rp " << totalBiaya << " (" << lamaParkir << " jam )" << endl;

    return 0;
}