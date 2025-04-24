#include <iostream>
using namespace std;

int main() {
    float harga, total, totalDiskon, totalBayar, diskon;
    int jumlah;

    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;

    if (jumlah > 100) {
        diskon = 0.15;
    } else {
        diskon = 0.05;
    }

    totalDiskon = total * diskon;
    totalBayar = total - totalDiskon;

    cout << "Total beli: " << total << endl;
    cout << "Diskon: " << totalDiskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}

