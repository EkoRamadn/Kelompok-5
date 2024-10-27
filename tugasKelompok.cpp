#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string kata, kataBalik;

    cout << "Check Kata" << "\n";
    cout << "Input Kata : ";
    cin >> kata;
    
    // copy isi kata
    kataBalik = kata;

    //mengunakan fungsi reverse()
    reverse(begin(kataBalik), end(kataBalik));

    string hasil = (kata.compare(kataBalik) == 0) ? "True" : "false";
    cout << "hasil : " << hasil;

    return 0;
}