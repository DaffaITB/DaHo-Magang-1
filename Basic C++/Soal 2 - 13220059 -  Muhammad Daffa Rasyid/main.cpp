#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    string bangunDatar;

    cout << "Bangun datar : ";
    cin >> bangunDatar;

    if (bangunDatar.compare("persegi") == 0) {
        int p,l;
        cout << "panjang : ";
        cin >> p;
        cout << "lebar : ";
        cin >> l;

        cout << "luas : " << p*l << endl;
        cout << "keliling : " << (p+l)*2 << endl;
    }
    else if (bangunDatar.compare("lingkaran") == 0) {
        float r;
        cout << "jari-jari: ";
        cin >> r;

        cout << "luas : " << r*r*3.14 << endl;
        cout << "keliling : " << r*2*3.14 << endl;
    }
    else {          //asumsi pasti segitiga siku-siku
        int a,t;
        cout << "alas : ";
        cin >> a;
        cout << "tinggi : ";
        cin >> t;

        cout << "luas : " << a*t/2 << endl;
        cout << "keliling : " << a+t+sqrt(a*a+t*t) << endl;
    }
 
    return 0;
}