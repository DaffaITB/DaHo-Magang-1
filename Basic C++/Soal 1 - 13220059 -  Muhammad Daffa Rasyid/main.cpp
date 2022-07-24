#include <iostream>
using namespace std;

int main()
{
    int manusia;
    cin >> manusia;

    char nama[manusia][255];
    int umur[manusia];
    
    int idx = 0;
    while (idx<manusia) {
        cin >> nama[idx] >> umur[idx];
        idx++;
    }

    int idxMin;
    for (int i = manusia-1; i >= 0; i--) {
        idxMin = i;
        for (int j = i; j >= 0; j--) {
            if (umur[j] < umur[idxMin]) {
                idxMin = j;
            }
        }
        swap(umur[idxMin], umur[i]);
        swap(nama[idxMin], nama[i]);
    }

    idx = 0;
    while (idx<manusia) {
        cout << nama[idx] << " " << umur[idx] << endl;
        idx++;
    }

    return 0;
}