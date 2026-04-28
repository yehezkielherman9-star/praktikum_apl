#include <iostream>
#include <stdexcept>
using namespace std;

struct Data {
    int id;
    string nama;
};

int linearSearchNama(Data *arr, int n, string key) {
    for (int i = 0; i < n; i++) {
        if ((arr + i)->nama == key) {
            return i;
        }
    }
    return -1;
}

int binarySearchID(Data *arr, int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if ((arr + mid)->id == key)
            return mid;
        else if ((arr + mid)->id < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void bubbleSort(Data *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if ((arr + j)->id > (arr + j + 1)->id) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    try {
        int n = 5;

        Data data[5] = {
            {103, "Andi"},
            {101, "Budi"},
            {105, "Citra"},
            {102, "Dina"},
            {104, "Eka"}
        };

        bubbleSort(data, n);

        cout << "===== DATA SETELAH DIURUTKAN =====\n";
        for (int i = 0; i < n; i++) {
            cout << data[i].id << " - " << data[i].nama << endl;
        }

        int cariID;
        cout << "\nMasukkan ID yang dicari: ";
        
        if (!(cin >> cariID)) {
            throw invalid_argument("Input ID harus berupa angka!");
        }

        int hasilID = binarySearchID(data, n, cariID);
        if (hasilID == -1) {
            throw runtime_error("Data dengan ID tersebut tidak ditemukan!");
        }

        cout << "Data ditemukan: " << data[hasilID].nama << endl;

        string cariNama;
        cout << "\nMasukkan Nama yang dicari: ";
        cin >> cariNama;

        if (cariNama.empty()) {
            throw invalid_argument("Nama tidak boleh kosong!");
        }

        int hasilNama = linearSearchNama(data, n, cariNama);
        if (hasilNama == -1) {
            throw runtime_error("Data dengan nama tersebut tidak ditemukan!");
        }

        cout << "Data ditemukan: ID " << data[hasilNama].id << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Error Input: " << e.what() << endl;
    }
    catch (const runtime_error &e) {
        cout << "Error Proses: " << e.what() << endl;
    }
    catch (...) {
        cout << "Terjadi error tidak diketahui!" << endl;
    }

    return 0;
}