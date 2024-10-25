#include <iostream>
using namespace std;


int main(){
    string kata, kataBalik;

    cout << "Chek Kata" << "\n";
    cout << "Input Kata : ";
    cin >> kata;

    // for
    for(int i = kata.length() - 1; i >= 0; i--){
        kataBalik += kata[i];
    }

    // while
    // int i = kata.length() - 1;

    // while(i >= 0){
    //     kataBalik += kata[i];
    //     i--;
    // }

    // do while
    // int i = kata.length() - 1;

    // do{
    //     kataBalik += kata[i];
    //     i--;
    // }while( i >= 0);

    string hasil = (kata == kataBalik) ? "True" : "false";
    cout << "hasil : " << hasil;

    return 0;
}