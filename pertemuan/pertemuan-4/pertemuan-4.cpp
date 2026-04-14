# include <iostream>
using namespace std;
struct Address{
string kota;
string provinsi;
string negara;
};
int main(){

Address address1, address2;

address1.kota = "Samarinda";
address1.provinsi = "Kalimantan Timur";
address1.negara = "Indonesia";

address2 = address1;

address2.kota = "ikn";

cout << address1.kota <<endl;

cout << address2.kota;
return 0;
}
int main () {
string nama = "Rangga Aryawinata";
cout << &nama << " adalah alamatnya " << nama <<endl;
return 0;
}