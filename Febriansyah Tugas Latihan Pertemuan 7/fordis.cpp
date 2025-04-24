#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, jenisServis, statusLangganan;
    double biayaAwal = 0, potongan = 0, totalBayar = 0;

    // Input
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama);

    cout << "Masukkan jenis servis (Ringan/Sedang/Berat): ";
    getline(cin, jenisServis);

    cout << "Apakah pelanggan langganan tetap? (ya/tidak): ";
    getline(cin, statusLangganan);

    // Tentukan biaya awal berdasarkan jenis servis
    if (jenisServis == "Berat") {
        biayaAwal = 500000;
    } else if (jenisServis == "Sedang") {
        biayaAwal = 300000;
    } else if (jenisServis == "Ringan") {
        biayaAwal = 150000;
    } else {
        cout << "Jenis servis tidak dikenali!" << endl;
        return 1;
    }

    // Hitung potongan jika pelanggan langganan tetap
    if (statusLangganan == "ya") {
        if (jenisServis == "Berat") {
            potongan = biayaAwal * 0.2;
        } else if (jenisServis == "Sedang") {
            potongan = biayaAwal * 0.15;
        } else if (jenisServis == "Ringan") {
            potongan = biayaAwal * 0.1;
        }
    }

    // Hitung total bayar
    totalBayar = biayaAwal - potongan;
febrfe
    // Output hasil
    cout << "\n--- Rincian Pembayaran ---\n";
    cout << "Nama Pelanggan : " << nama << endl;
    cout << "Jenis Servis   : " << jenisServis << endl;
    cout << "Biaya Awal     : Rp " << biayaAwal << endl;
    cout << "Potongan       : Rp " << potongan << endl;
    cout << "Total Bayar    : Rp " << totalBayar << endl;

    return 0;
}

