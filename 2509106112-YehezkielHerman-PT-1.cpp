#include <iostream>
using namespace std;

int main() {
    string username, password;
    string username_benar = "Kiel";   
    string password_benar = "112";    
    int kesempatan = 3;

    while (kesempatan > 0) {
        system("cls"); 

        cout << "=====================================\n";
        cout << "            LOGIN PROGRAM            \n";
        cout << "=====================================\n";

        cout << "Masukkan Nama     : ";
        cin >> username;
        cout << "Masukkan Password : ";
        cin >> password;

        if (username == username_benar && password == password_benar) {
            cout << "\nLogin Berhasil!\n";
            break;
        } else {
            kesempatan--;
            cout << "\nLogin Gagal! Sisa percobaan: " << kesempatan << endl;
            cin.get(); cin.get();
        }

        if (kesempatan == 0) {
            cout << "\nAnda gagal login. Program berhenti.\n";
            return 0;
        }
    }

    int pilihan;
    double meter, km, cm;

    do {
        system("cls");

        cout << "=====================================\n";
        cout << "       PROGRAM KONVERSI PANJANG      \n";
        cout << "=====================================\n";
        cout << "1. Meter -> Kilometer dan Centimeter\n";
        cout << "2. Kilometer -> Meter dan Centimeter\n";
        cout << "3. Centimeter -> Meter dan Kilometer\n";
        cout << "4. Keluar\n";
        cout << "=====================================\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nMasukkan nilai Meter: ";
            cin >> meter;
            km = meter / 1000;
            cm = meter * 100;
            cout << "\nHasil: " << km << " Kilometer\n";
            cout << "       " << cm << " Centimeter\n";
        }
        else if (pilihan == 2) {
            cout << "\nMasukkan nilai Kilometer: ";
            cin >> km;
            meter = km * 1000;
            cm = km * 100000;
            cout << "\nHasil: " << meter << " Meter\n";
            cout << "       " << cm << " Centimeter\n";
        }
        else if (pilihan == 3) {
            cout << "\nMasukkan nilai Centimeter: ";
            cin >> cm;
            meter = cm / 100;
            km = cm / 100000;
            cout << "\nHasil: " << meter << " Meter\n";
            cout << "       " << km << " Kilometer\n";
        }
        else if (pilihan == 4) {
            cout << "\nTerima kasih telah menggunakan program.\n";
        }
        else {
            cout << "\nPilihan tidak valid!\n";
        }

        if (pilihan != 4) {
            cout << "\nTekan ENTER untuk kembali ke menu...";
            cin.get(); cin.get();
        }

    } while (pilihan != 4);

    return 0;
}