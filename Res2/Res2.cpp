#include<iostream>

using namespace std;



int main() {
    setlocale(0, "");

    unsigned short x = 7;
    // 7 = 0000 0111
    // unsigned short x = 512;
    // 512 = 10 0000 0000
    // unsigned short x = 20;
    // 20 = 1 0100

    unsigned short y = x;
    unsigned short i;
    cout << "Номер бита, который нужно сделать 1: "; cin >> i;
    x = x | (1 << i);
    cout << "Число до: " << y << "\nЧисло после: " << x;

    return 0;
}