#include <iostream>
using namespace std;

void gerakRobot(int &x, int &y, int &baterai, char arah) {
    if (baterai <= 0) {
        cout << "Baterai habis! Robot tidak bisa bergerak.\n";
        return;
    }

    switch (arah) {
        case 'w': 
            y++;
            break;
        case 's': 
            y--;
            break;
        case 'd': 
            x++;
            break;
        case 'a': 
            x--;
            break;
        default:
            cout << "Arah tidak valid!\n";
            return;
    }

    baterai--;
}

int main() {
    int x = 0, y = 0;
    int baterai = 5;
    char perintah;

    cout << "=== SIMULASI ROBOT ===\n";

    while (true) {
        cout << "\nPosisi: (" << x << ", " << y << ")";
        cout << " | Baterai: " << baterai << endl;

        if (baterai <= 0) {
            cout << "Robot berhenti karena baterai habis.\n";
            break;
        }

        cout << "Masukkan arah (w=atas, s=bawah, a=kiri, d=kanan, x=keluar): ";
        cin >> perintah;

        if (perintah == 'x') break;

        gerakRobot(x, y, baterai, perintah);
    }

    cout << "\nSimulasi selesai.\n";
    return 0;
}