#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan > 0) {
        cout << "Bilangan Positif" << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan Negatif" << endl;
    } else {
        cout << "Bilangan Nol" << endl;
    }

    return 0;
}

