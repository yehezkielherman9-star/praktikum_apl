#include <iostream>
using namespace std;

struct User {
    string username;
    string password;
};

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
};

bool prosesLogin(User *user) {
    string username, password;
    int kesempatan = 3;

    while (kesempatan > 0) {
        cout << "===== LOGIN =====" << endl;
        cout << "Masukkan Nama (Username): ";
        cin >> username;
        cout << "Masukkan NIM (Password): ";
        cin >> password;

        if (username == user->username && password == user->password) {
            cout << "Login berhasil!\n";
            return true;
        } else {
            kesempatan--;
            cout << "Login gagal! Sisa kesempatan: " << kesempatan << endl;
        }
    }

    cout << "Anda gagal login 3 kali. Program berhenti.\n";
    return false;
}

void tambahData(Mahasiswa *data, int *jumlah) {
    cout << "Nama: ";
    cin >> data[*jumlah].nama;
    cout << "NIM: ";
    cin >> data[*jumlah].nim;
    cout << "Jurusan: ";
    cin >> data[*jumlah].jurusan;

    (*jumlah)++;
    cout << "Data berhasil ditambahkan!\n";
}

void lihatData(Mahasiswa *data, int jumlah) {
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << ". "
             << data[i].nama << " | "
             << data[i].nim << " | "
             << data[i].jurusan << endl;
    }
}

void updateData(Mahasiswa *data, int jumlah) {
    int ubah;
    cout << "Pilih nomor data yang ingin diubah: ";
    cin >> ubah;

    if (ubah <= jumlah && ubah > 0) {
        cout << "Nama baru: ";
        cin >> data[ubah-1].nama;

        cout << "NIM baru: ";
        cin >> data[ubah-1].nim;

        cout << "Jurusan baru: ";
        cin >> data[ubah-1].jurusan;

        cout << "Data berhasil diupdate!\n";
    } else {
        cout << "Data tidak ditemukan!\n";
    }
}

void hapusData(Mahasiswa *data, int *jumlah) {
    int hapus;
    cout << "Pilih nomor data yang ingin dihapus: ";
    cin >> hapus;

    if (hapus <= *jumlah && hapus > 0) {
        for (int i = hapus-1; i < *jumlah-1; i++) {
            data[i] = data[i+1];
        }
        (*jumlah)--;
        cout << "Data berhasil dihapus!\n";
    } else {
        cout << "Data tidak ada!\n";
    }
}

int tampilMenu() {
    int pilihan;
    cout << "\n===== MENU DATA MAHASISWA =====\n";
    cout << "1. Tambah Data\n";
    cout << "2. Lihat Data\n";
    cout << "3. Update Data\n";
    cout << "4. Hapus Data\n";
    cout << "5. Keluar\n";
    cout << "Pilih menu: ";
    cin >> pilihan;
    return pilihan;
}

int main() {

    User user = {"Kiel", "12345"};

    // Kirim alamat user (&)
    if (!prosesLogin(&user)) {
        return 0;
    }

    Mahasiswa data[100];
    int jumlah = 0;
    int pilihan;

    while (true) {
        pilihan = tampilMenu();

        if (pilihan == 1) {
            tambahData(data, &jumlah); // pakai &
        }
        else if (pilihan == 2) {
            lihatData(data, jumlah);
        }
        else if (pilihan == 3) {
            updateData(data, jumlah);
        }
        else if (pilihan == 4) {
            hapusData(data, &jumlah); // pakai &
        }
        else if (pilihan == 5) {
            cout << "Program selesai.\n";
            break;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
    }
}