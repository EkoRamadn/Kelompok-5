# UTS Soal 1 
## Program Hitung Gaji Karyawan Per Minggu

membuat program untuk menghitung gaji karyawan per minggu

```cpp 
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
```

output: 

```cpp
Masukan nama anda : Saiful
Masukan golongan anda : 3
Masukan jam kerja anda per minggu : 60

Total Gaji Saiful per minggu :3120000 
```

## Penjelasan code 


```cpp
#include <iostream>
#include <string>
```
melakukan impor library  `<iostream>` dan `<string>` 


```cpp
using namespace std;
```
memberitahu compiler agar kita tidak perlu menuliskan awalan std:: setiap kali menggunakan elemen-elemen dari namespace standar (seperti std::cout, std::cin, dll.)


```cpp
int main(){
    // kode lainya...
```
membuat sebuah fungsi awal program dengan tipe data `int`.\

```cpp
string namaKaryawan;
int golongan, jamKerja;
```
mendeklarasika varaibel `namaKaryawan` dengan tipe data `string`.
mendeklarasika varaibel `golongan` dan  `jamKerja` dengan tipe data `string`\

```cpp
cout << "Masukkan nama karyawan: ";
cin >> namaKaryawan;
cout << "Masukkan golongan (2 atau 3): ";
cin >> golongan;
cout << "Masukkan jumlah jam kerja dalam seminggu: ";
cin >> jamKerja;
```
`cout` menampilkan pada console `cin` memasukan nilai ke dalam variabel namaKaryawan, golongan, jamKerja.

---
hasil diatas akan menampilkan berikut:
```cpp
Masukan nama anda : Saiful // namaKaryawan input
Masukan golongan anda : 3 // golongan input
Masukan jam kerja anda per minggu : 60 // jamKerja input
```
---
___


```cpp
int upahPokok;
```
membuat sebuat variabel `upahPokok` dengan tipe data `int`.\


```cpp
if (golongan == 2) {
    upahPokok = jamKerja * 35000;
}
else if (golongan == 3) {
    upahPokok = jamKerja * 50000;
}
else {
    upahPokok = jamKerja * 25000;
}
```
membuat kondisional `if else` dimana  \
-   jika `golongan == 2` maka jalankan `upahPokok = jamKerja * 35000;`
-   jika `golongan == 3` maka jalankan `upahPokok = jamKerja * 50000;`
-   jika tidak diantaranya maka jalankan `upahPokok = jamKerja * 25000;`
___
```cpp
upahPokok = jamKerja * 25000;
// dapat dibaca masukan nilai variabel upahPokok dengan hasil dari jamkerja dikali 25000
```
___
___


```cpp
int uangLembur = 0;
```
buat variabel `uangLembur` dengan tipe data `int`.

```cpp
if (jamKerja > 48) {
    uangLembur = (jamKerja - 48) * 10000;
}
```
membuat sebuah kondisional pengecekan jika `jamKerja` melebihi 48 jam 
- jika `jamKerja > 48` maka jalanakan `uangLembur = (jamKerja - 48) * 10000;`
```cpp 
int gajiTotal = upahPokok + uangLembur;
```
buat variabel `gajiTotal` isi dengan nilai hasil perjumlahan dari variabel `upahPokok` dan `uangLembur`.


```cpp
cout << "Total Gaji " << namaKaryawan << "per minggu : Rp " << gajiTotal << endl;
```
tampikan ke konsole `"Total Gaji  namaKaryawan per minggu : Rp gajiTotal`.
___
output:
```cpp
Total Gaji Saiful per minggu : Rp 3120000
```
___
___

```cpp
    return 0;
}
```
mengembalikan `int 0` sebagai pengakhir fungsi `main` dan menutup blok fungsi `main`.

|
|
# UTS Soal 2

## Program Penghitung Pendapatan Parkir Harian di UNISBA

Membuat Program Penghitung Pendapatan Parkir Harian di UNISBA

```cpp
#include <iostream>
using namespace std;

int main() {
    // Input jumlah motor, jumlah mobil, jam masuk, dan jam keluar
    int jumlahMotor, jumlahMobil;
    int jamMasuk, jamKeluar;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;

    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;

    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;

    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Hitung total pendapatan
    float tarifMotor = 2000;  // Tarif parkir motor per jam
    float tarifMobil = 5000;  // Tarif parkir mobil per jam
    float totalPendapatan;

    // Menghitung durasi parkir
    int durasiParkir = (jamKeluar - jamMasuk + 24) % 24;

    // Menghitung total pendapatan
    totalPendapatan = (jumlahMotor * tarifMotor + jumlahMobil * tarifMobil) * durasiParkir;

    // Menampilkan total pendapatan
    cout << "Total pendapatan penjaga portal parkir UNISBA: Rp " << totalPendapatan <<" (" <<durasiParkir<< " Jam)" << endl;

    return 0;
}
```

Contoh Output :

```cpp
Masukkan jumlah motor: 2
Masukkan jumlah mobil: 3
Masukkan jam masuk (format 24 jam): 15
Masukkan jam keluar (format 24 jam): 14
Total pendapatan penjaga portal parkir UNISBA: Rp 437000 (23 Jam)
```

## Penjelasan Code

```cpp
#include <iostream>
```

Melakukan impor library `iostream` untuk bisa menggunakan fungsi `cin` dan `cout`.

```cpp
using namespace std;
```

Memberitahu compiler agar kita tidak perlu menuliskan awalan std:: setiap kali menggunakan elemen-elemen dari namespace standar (seperti std::cout, std::cin, dll.).

```cpp
int main( ){ }
```

Digunakan untuk mendeklarasikan fungsi utama dari kode tersebut, di mana tanda kurung ( ) dapat diisi dengan parameter dan kurung kurawal { } berisi pernyataan (statement) yang akan dijalankan.

```cpp
int jumlahMotor, jumlahMobil;
int jamMasuk, jamKeluar;
```

Deklarasi variabel untuk menyimpan data bertipe integer dengan nama variabel `jumlahMotor`, `jumlahMobil`, `jamMasuk`, dan `jamKeluar`.

```cpp
cout << "Masukkan jumlah motor: ";
cin >> jumlahMotor;

cout << "Masukkan jumlah mobil: ";
cin >> jumlahMobil;

cout << "Masukkan jam masuk (format 24 jam): ";
cin >> jamMasuk;

cout << "Masukkan jam keluar (format 24 jam): ";
cin >> jamKeluar;
```

`cout` digunakan untuk menampilkan output ke terminal, seperti contoh `Masukan jumlah motor: `<br>`cin` digunakan untuk menerima input dari pengguna melalui console, yang kemudian akan disimpan ke dalam variabel, seperti variabel `jumlahMotor`.

```cpp
float tarifMotor = 2000;
float tarifMobil = 5000;
float totalPendapatan;
```

Deklarasi variabel untuk menyimpan data bertipe integer dengan nama variabel `tarifMotor`, `tarifMobil`, dan `totalPendapatan`.

```cpp
int durasiParkir = (jamKeluar - jamMasuk + 24) % 24;
```

Deklarasi variabel `durasiParkir` bertipe integer dengan nilai yang dihitung dari selisih dua variabel `jamKeluar` dan `jamMasuk`, serta memastikan hasilnya berada dalam rentang 0-23 dengan operasi modulus 24.

```cpp
totalPendapatan = (jumlahMotor * tarifMotor + jumlahMobil * tarifMobil) * durasiParkir;
```

Deklarasi variabel `totalPendapatan` dan memberinya nilai berdasarkan hasil perhitungan dari beberapa variabel, yaitu `jumlahMotor`, `tarifMotor`, `jumlahMobil`, `tarifMobil`, dan `durasiParkir`.

```cpp
cout << "Total pendapatan penjaga portal parkir UNISBA: Rp " << totalPendapatan <<" (" <<durasiParkir<< " Jam)" << endl;
```

Menggunakan cout untuk menampilkan teks serta nilai dari string atau variable `totalPendapatan` Dan `durasiParkir` ke console.

```cpp
  return 0;
```

Berfungsi untuk mengembalikan nilai integer yaitu 0 dari fungsi `int main`. Hal ini menandakan bahwa program telah selesai dijalankan tanpa error.