#include <iostream>
using namespace std;

struct Menu {
    string nama;
    int harga;
    bool tersedia;
};

int main() {
    Menu kantin[3];

    kantin[0] = {"Nasi Goreng", 15000, true};
    kantin[1] = {"Mie Ayam", 12000, true};
    kantin[2] = {"Es Teh", 5000, false};

    cout << "=== Daftar Menu Kantin ===" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Menu ke-" << i + 1 << endl;
        cout << "Nama   : " << kantin[i].nama << endl;
        cout << "Harga  : Rp" << kantin[i].harga << endl;
        
        if (kantin[i].tersedia) {
            cout << "Status : Tersedia" << endl;
        } else {
            cout << "Status : Habis" << endl;
        }

        cout << "------------------------" << endl;
    }

    return 0;
}