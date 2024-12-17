/*
===========================================
      SELAMAT DATANG DI PROGRAM KASIR
                TOKO TIB
===========================================

    1. Stok Barang
    2. Cetak Struk/Pembelian
    3. Riwayat Stansaksi
    4. Pendapatan dan Saldo
    5. keluar

===========================================
*pilih menu opsi (1-5) :
*/

#include <iostream>
using namespace std;

int main()
{
    int opsi;

    cout << "===========================================" << endl;
    cout << "      SELAMAT DATANG DI PROGRAM KASIR" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "===========================================" << endl;
    cout << "\n";
    cout << "   1. Stok Barang" << endl;
    cout << "   2. Cetak Struk/Pembelian" << endl;
    cout << "   3. Riwayat Stansaksi" << endl;
    cout << "   4. Pendapatan dan Saldo" << endl;
    cout << "   5. keluar";
    cout << "\n";
    cout << "===========================================" << endl;
    cout << "*pilih menu opsi (1-5) : ";
    cin >> opsi;

    return 0;
}