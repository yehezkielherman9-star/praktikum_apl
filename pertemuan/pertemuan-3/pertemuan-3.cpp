#include <iostream>
using namespace std;

//Fungsi ditaruh sebelum main
int kuadrat(int x) {
return x * x;
}

// Prosedur ditulis sebelum main
void sapa(string nama) {
cout << "Halo, " << nama << "!" << endl;
}

int main() {
sapa("Budi");
cout << "Hasil 5 kuadrat: " << kuadrat(5) << endl;
return 0;
}

// Definisikan prosedur atau fungsi sebelum fungsi main
int kuadrat(int x);
void sapa(string nama);

int main() {
sapa("Andi");
cout << "Hasil 3 kuadrat: " << kuadrat(3) << endl;
return 0;
}
// Penulisan fungsi setelah main
int kuadrat(int x) {
return x * x;
}

// Penulisan prosedur setelah main
void sapa(string nama) {
cout << "Halo, " << nama << "!" << endl;
}