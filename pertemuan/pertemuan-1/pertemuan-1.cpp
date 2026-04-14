#include <iostream>
using namespace std;
int main() {
int a, b, hasil;
cout << "Masukkan nilai a: ";
cin >> a;
cout << "Masukkan nilai b: ";
cin >> b;
hasil = a + b;
cout << "Hasil penjumlahan: " << hasil << endl;
hasil = a - b;
cout << "Hasil pengurangan: " << hasil << endl;
hasil = a * b;
cout << "Hasil perkalian: " << hasil << endl;
hasil = a / b;cout << "Hasil pembagian: " << hasil << endl;
hasil = a % b;
cout << "Hasil modulus: " << hasil << endl;
return 0;
}
int main() {
int a, b;
cout << "Masukkan nilai a: ";
cin >> a;
cout << "Masukkan nilai b: ";
cin >> b;
a += b;
cout << "Hasil penjumlahan: " << a << endl;
a -= b;
cout << "Hasil pengurangan: " << a << endl;
a *= b;
cout << "Hasil perkalian: " << a << endl;
a /= b;
cout << "Hasil pembagian: " << a << endl;
a %= b;
cout << "Hasil modulus: " << a << endl;
return 0;
}