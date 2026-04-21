#include <iostream>
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
    int n = 5;

    Data data[5] = {
        {103, "Andi"},
        {101, "Budi"},
        {105, "Citra"},
        {102, "Dina"},
        {104, "Eka"}
    };

    bubbleSort(data, n);

    cout << "Data setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i].id << " - " << data[i].nama << endl;
    }

    int cariID;
    cout << "\nMasukkan ID yang dicari: ";
    cin >> cariID;

    int hasilID = binarySearchID(data, n, cariID);
    if (hasilID != -1)
        cout << "Data ditemukan: " << data[hasilID].nama << endl;
    else
        cout << "Data ID tidak ditemukan!\n";

    string cariNama;
    cout << "\nMasukkan Nama yang dicari: ";
    cin >> cariNama;

    int hasilNama = linearSearchNama(data, n, cariNama);
    if (hasilNama != -1)
        cout << "Data ditemukan: ID " << data[hasilNama].id << endl;
    else
        cout << "Data Nama tidak ditemukan!\n";

    return 0;
}