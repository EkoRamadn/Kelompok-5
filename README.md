# Palindrome Checker Program

Program ini digunakan untuk memeriksa apakah sebuah kata merupakan **palindrome** atau tidak.
Sebuah kata dikatakan palindrome jika dibaca dari depan maupun belakang tetap sama (misalnya, _"katak"_ atau _"malam"_).

## Cara Kerja Program

1. **Input Kata**: Pengguna memasukkan kata yang ingin diperiksa.
2. balik kata mengunakan fungsi `reverse()`.
3. **Pengecekan Palindrome**: Setelah kata dibalik, program akan membandingkan kata asli dengan kata yang dibalik.
4. **Output Hasil**: Jika kata sama setelah dibalik, program akan mencetak `"True"`; jika tidak, maka akan mencetak `"false"`.

## Kode

```cpp
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string kata, kataBalik;

    cout << "Check Kata" << "\n";
    cout << "Input Kata : ";
    cin >> kata;

    kataBalik = kata;

    reverse(begin(kataBalik), end(kataBalik));

    cout << "hasil : " << ((kata.compare(kataBalik) == 0) ? "True" : "false");

    return 0;
}
```

## Penjelasan Kode

1. **Input**: Program meminta pengguna untuk memasukkan sebuah kata melalui `cin`.
2. **copy string data** melakukan copy string `kata` ke `kataBalik` dengan operator assingmen `=`.
3. **Proses Pembalikan Kata**:  
   balik kata mengunakan fungsi `reverse()` dari library `<algorithm>`.
4. **Pengecekan Palindrome**:
   - Menggunakan **operator ternary** `(kata.compare(kataBalik) == 0) ? "True" : "false";` untuk membandingkan kata asli dan kata yang dibalik.
5. **Output**: Program akan menampilkan hasil apakah kata tersebut palindrome atau bukan.

## Contoh Output

```
Chek Kata
Input Kata : katak
hasil : True
```

```
Chek Kata
Input Kata : rumah
hasil : false
```

## Cara Menjalankan Program

1. Kompilasi program dengan perintah:
   ```
   g++ -o palindrome_checker program.cpp
   ```
2. Jalankan program dengan perintah:
   ```
   ./palindrome_checker
   ```

## Penjelasan Alur Program

dimulai dari line 1 :

```cpp
#include <iostream>
#include <algorithm>
```

menyertakan library Input-Output Stream atau `<iosstream>` dan `<algorithm>`

```cpp
using namespace std;
```

memberitahu compiler agar kita tidak perlu menuliskan awalan `std::` setiap kali menggunakan elemen-elemen dari namespace standar (seperti `std::cout`, `std::cin`, dll.)

`namespace` adalah fitur dalam C++ yang digunakan untuk mengelompokkan fungsi, kelas, atau variabel agar tidak terjadi konflik nama (name conflict).

```cpp
int main(){
   //kode lain nya...
}
```

membuat fungsi main dengan tipe data `int` integer

```cpp
string kata, kataBalik;
```

mendeklarasikan variabel `kata` dan `kataBalik` dengan tipe data `string`

```cpp
cout << "Check Kata" << "\n";
cout << "Input Kata : ";
```

`cout` berfungsi untuk menampilkan `"Check Kata"` dan `"Input Kata : "` di console.

`"\n"` merupakan karakter spesial dalam string yang bertujuan agar tampilan console selanjutnya berada pada bawah teks dan tidak dalam 1 line.

```cpp
cin >> kata;
```

`cin` berfungsi untuk memasuka nilai ke variabel `kata`.

```cpp
kataBalik = kata;
```

melakukan copy isi variabel `kata` ke variabel `kataBalik` mengunakan parameter assignment `=`.

## Pembalik String Menggunakan fungsi `reverse()` di C++

```cpp
 reverse(begin(kataBalik), end(kataBalik));
```

`reverse()` adalah fungsi dari pustaka `<algorithm>` yang digunakan untuk membalik urutan elemen dari suatu rentang, mulai dari perulangan awal hingga akhir.
`begin()` dan `end()` adalah fungsi atau metode yang mengembalikan iterator ke elemen awal dan akhir dari kontainer atau array.

## Membandingkan String dengan Operator Ternary

Berikut adalah contoh kode untuk memeriksa apakah string asli sama dengan string yang telah dibalik, menggunakan **operator ternary** dalam bahasa C++:

```cpp
string hasil = (kata.compare(kataBalik) == 0) ? "True" : "false";
cout << "hasil : " << hasil;

return 0;
```

mengunakan fungsi `compare()` dimuat dari library `<string>` untuk mengecek apakah variabel `kata` dan `kataBalik` memiliki `string` yang sama.
jika sama akan mengembalikan `0` jika tidak sama akan mengembalikan lainya(seperti `1` dan `-1`)

### Penjelasan:

- **Operator Ternary**:  
  `?` dan `:` digunakan untuk menuliskan **if-else** secara singkat.  
  Sintaks:

  ```
  kondisi ? nilai_jika_true : nilai_jika_false;

  // Sama Dengan

  if(kondisi) {
     nilai_jika_true
  } else {
     nilai_jika_false
  }
  ```
