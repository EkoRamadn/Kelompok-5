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
#include <vector>
#include <cstdlib>
using namespace std;

int stokBarang();
int cetakStruk();
int stat();
int main();
vector<string> namaProduk = {"coklat", "beras ", "mie   ", "cabai ", "telur "};
vector<int> hargaProduk = {2000, 3000, 1000, 4000, 5000};

int stokBarang()
{
    int point;
    cout << "=========================================== " << endl;
    cout << "        GUDANG STOK BARANG BULANAN" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "=========================================== " << endl;
    cout << "| nama     | stok |  harga/ |  keterangan  |" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "| coklat   | 10kg | 2000rb  | 20000rb      |" << endl;
    cout << "\n";
    cout << "=========================================== " << endl;
    cout << "\n";
    cout << "1. Tambah Stok Barang \n";
    cout << "2. Kembali \n";
    cout << "\n";

    cout << "*pilih menu opsi (1-5) : ";
    cin >> point;

ulang:
    switch (point)
    {
    case 1:
        break;
    case 2:
        system("cls");
        stat();
        break;

    default:
        cout << "opsi yang kamu pilih salah!";
        goto ulang;
    }
    return 0;
}

int stat()
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

ulang:
    switch (opsi)
    {
    case 1:
        system("cls"); // Membersihkan terminal (Windows)
        stokBarang();
        break;
    case 2:
        system("cls"); // Membersihkan terminal (Windows)
        cetakStruk();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;

    default:
        cout << "opsi yang kamu pilih salah!";
        goto ulang;
    }

    return 0;
}

int cetakStruk()
{
    string namaKonsumen;
    int idProduk;
    int totalProduk;
    bool isPass = false;
    vector<int> idPesan = {};
    vector<int> banyakPesan = {};
    cout << "=========================================== " << endl;
    cout << "        PROGRAM PERHITUNGAN KASIR" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "=========================================== " << endl;
    cout << "\n";
    cout << "   NAMA KONSUMENT : ";
    cin >> namaKonsumen;
    cout << "   PILIH PRODUK ID : " << endl;
    cout << "       0. coklat" << endl;
    cout << "       1. beras" << endl;
    cout << "       2. mie" << endl;
    cout << "       3. cabai" << endl;
    cout << "       4. telur" << endl;
    cout << "\n";

masukanIdProd:
    if (!isPass)
    {
        string YN;
        cout << "   Masukan Id Produk    : ";
        cin >> idProduk;
        idPesan.push_back(idProduk);
        cout << "   Masukan Total Produk : ";
        cin >> totalProduk;
        banyakPesan.push_back(totalProduk);

        cout << "\n";
    confirm:
        cout << "TAMBAH PRODUK y/n : ";
        cin >> YN;

        if (YN == "y")
        {
            isPass = false;
        }
        else if (YN == "n")
        {
            isPass = true;
        }
        else
        {
            cout << "MASUKAN SALAH \n";
            goto confirm;
        }
        goto masukanIdProd;
    }

    cout << "\n";
    cout << "MENCETAK STRUK \n";

    cout << "\n";
    cout << "=========================================== " << endl;
    cout << "        STRUK BUKTI BELANJA PRODUK" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "=========================================== " << endl;
    cout << "\n";
    cout << "   Nama : " << namaKonsumen << endl;
    cout << "\n";
    for (size_t i = 0; i < idPesan.size(); ++i)
    {
        cout << "   " << i + 1 << ". " << namaProduk[idPesan[i]] << "    " << banyakPesan[i] << "kg    " << hargaProduk[idPesan[i]] * banyakPesan[i] << "rb" << " \n";
    }
    cout << "\n";
    cout << "=========================================== " << endl;
    cout << "      TERIMA KASIH TELAH BERBELANJA!" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "=========================================== " << endl;
}

int main()
{
    stat();
    return 0;
}