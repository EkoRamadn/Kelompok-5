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
#include <thread>
#include <string>
#include <chrono>
#include <algorithm>
using namespace std;

int stokBarang();
int cetakStruk();
int riwayatTransaksiD();
int stat();
int main();
int hitungBiaya(vector<int> listIdPesan, vector<int> totalHargaPesanPerProduk, vector<int> banyakPesan, int totalHargaPesan);
struct RiwayatStransaksi
{
    string namaKonsumen;
    vector<string> produkDibeli;
    int totalHarga;
};

vector<string> namaProduk = {"coklat", "beras ", "mie   ", "cabai ", "telur "};
vector<int> hargaProduk = {2000, 3000, 1000, 4000, 5000};
vector<RiwayatStransaksi> riwayatTransaksi = {};

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
        system("cls"); // Membersihkan terminal (Windows)
        riwayatTransaksiD();
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
strukBaru:
    string namaKonsumen;
    int idProduk;
    int totalProduk;
    int opsi;
    int kembalian;
    bool isPass = false;
    vector<int> idPesan = {};
    vector<int> banyakPesan = {};
    vector<string> barangPesan = {};
    int totalHargaPesan = 0;
    int totalBayar = 0;
    vector<int> totalHargaPesanPerProduk = {};
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

        cout << "   Masukan Total Produk : ";
        cin >> totalProduk;

        auto it = find(idPesan.begin(), idPesan.end(), idProduk);
        if (it != idPesan.end())
        {
            // Konversi iterator ke indeks
            int index = distance(idPesan.begin(), it);
            banyakPesan[index] += totalProduk;
        }
        else
        {
            // Tambahkan produk baru jika belum ada
            idPesan.push_back(idProduk);
            banyakPesan.push_back(totalProduk);
        }
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

    totalHargaPesan = hitungBiaya(idPesan, totalHargaPesanPerProduk, banyakPesan, totalHargaPesan);
bayarLagi:
    cout << "\n";
    cout << "   TOTAL BELANJA : " << totalHargaPesan << endl;
    cout << "   TOTAL BAYAR   : ";
    cin >> totalBayar;
    kembalian = totalBayar - totalHargaPesan;

    if (kembalian < 0)
    {
        cout << "Uangmu tidak cukup untuk melakukan pembelian." << endl;
        goto bayarLagi;
    }

    cout << "\n";
    cout << "MENCETAK STRUK \n";
    this_thread::sleep_for(chrono::seconds(3));
    system("cls");

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
        for (int i = 0; i < idPesan.size(); i++)
        {
            string produk = namaProduk[idPesan[i]];
            produk.erase(remove(produk.begin(), produk.end(), ' '), produk.end());

            // Cek apakah produk sudah ada di barangPesan
            if (find(barangPesan.begin(), barangPesan.end(), produk) == barangPesan.end())
            {
                barangPesan.push_back(produk);
            }
        }
        totalHargaPesanPerProduk.push_back(hargaProduk[idPesan[i]] * banyakPesan[i]);
        cout << "   " << i + 1 << ". " << namaProduk[idPesan[i]] << "    " << banyakPesan[i] << "kg    " << hargaProduk[idPesan[i]] * banyakPesan[i] << "rb" << " \n";
    }
    cout << "\n";
    cout << "   TOTAL BELANJA : " << totalHargaPesan << endl;
    cout << "   TOTAL BAYAR   : " << totalBayar << endl;
    cout << "   KEMBALIAN     : " << kembalian << endl;

    cout << "\n";
    cout << "=========================================== " << endl;
    cout << "      TERIMA KASIH TELAH BERBELANJA!" << endl;
    cout << "                TOKO TIB" << endl;
    cout << "=========================================== " << endl;

    riwayatTransaksi.push_back({namaKonsumen, {barangPesan}, totalHargaPesan});

    cout << "\n";
    cout << "   1. Catak Struk Baru" << endl;
    cout << "   2. Kembali" << endl;
ulang:
    cout << "\n";
    cout << "*pilih menu opsi (1-2) : ";
    cin >> opsi;

    switch (opsi)
    {
    case 1:
        system("cls");
        goto strukBaru;
        break;
    case 2:
        system("cls");
        stat();
        break;

    default:
        cout << "opsi yang kamumasukan SALAH." << endl;
        goto ulang;
        break;
    }
}

int hitungBiaya(vector<int> listIdPesan, vector<int> totalHargaPesanPerProduk, vector<int> banyakPesan, int totalHargaPesan)
{
    for (size_t i = 0; i < listIdPesan.size(); ++i)
    {
        totalHargaPesanPerProduk.push_back(hargaProduk[listIdPesan[i]] * banyakPesan[i]);
    }
    for (size_t x : totalHargaPesanPerProduk)
    {
        totalHargaPesan += x;
    }
    return totalHargaPesan;
}

int riwayatTransaksiD()
{
    int opsi;
    cout << "===========================================" << endl;
    cout << "        RIWAYAT TRANSAKSI BULANAN " << endl;
    cout << "                TOKO TIB" << endl;
    cout << "===========================================" << endl;
    cout << "| NAMA     |     BELANJA     |  TOTAL   | " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "\n";
    for (const auto &transaksi : riwayatTransaksi)
    {
        cout << "|  " << transaksi.namaKonsumen;
        cout << "   ";
        for (string barang : transaksi.produkDibeli)
        {
            cout << barang << ",";
        }
        cout << "   " << transaksi.totalHarga << "   " << endl;
    }
    cout << "\n";
    cout << "===========================================" << endl;
    cout << "\n";
    cout << "   1. Tambah Stok" << endl;
    cout << "   2. Kembali" << endl;
ulang:
    cout << "\n";
    cout << "*pilih menu opsi (1-2) : ";
    cin >> opsi;

    switch (opsi)
    {
    case 1:
        /* code */
        break;
    case 2:
        system("cls");
        stat();
        break;

    default:
        cout << "opsi yang kamumasukan SALAH." << endl;
        goto ulang;
        break;
    }
}

int main()
{
    stat();
    return 0;
}