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