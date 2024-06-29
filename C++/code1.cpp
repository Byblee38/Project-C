#include <iostream>
using namespace std;

int main() {
    int nasigoreng = 10;
    int ayamgoreng = 20;
    int telur = 1;
    int uang, pilihan, kembalian;

    cout << "Masukan Nominal Uang Anda : ";cin >> uang;
    cout << "Pilih Pesanan Yang Anda Mau : 1. Nasi Goreng \n 2. Ayam Goreng \n 3. Telur " << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case (1):
        kembalian = uang - nasigoreng;
        cout << "Anda Memesan Nasi Goreng, Sisa Uang Anda Adalah : "<< kembalian << endl;
        break;
    
    case (2):
        kembalian = uang - ayamgoreng;
        cout << "Anda Memesan Ayam Goreng, Sisa Uang Anda Adalah : "<< kembalian << endl;
        break;
    
    case (3):
        kembalian = uang - telur;
        cout << "Anda Memesan Telur, Sisa Uang Anda Adalah : "<< kembalian << endl;
        break;

    default:
        break;
    } 

    return 0;
}
