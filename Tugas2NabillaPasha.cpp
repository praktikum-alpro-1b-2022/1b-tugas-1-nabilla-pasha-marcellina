#include <iostream>
using namespace std;


int main() {
    //Tugas 2.
    //Menukarkan dua angka dengan bantuan variabel sementara
    int a = 2, b= 4, c, x, y;

    c = a;
    a = b;
    b = c;

    cout << " Menukarkan Variabel dengan variabel sementara\n";
    cout << " A : " << a << endl << " B : " << b << endl;




    //Menukarkan dua variabel tanpa variabel sementara
    x = 3;
    y = 9;

    x = x+y;
    y = x-y;
    x = x-y;

    cout << " Menukarkan dua variabel tanpa variabel semenara";
    cout << "\nX : " << x << endl << "Y : " << y << endl;
    return 0;
}
