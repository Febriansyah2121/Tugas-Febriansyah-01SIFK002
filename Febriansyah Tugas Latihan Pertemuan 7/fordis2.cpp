#include <iostream>
#include <string>
#include <iomanip> // untuk manipulasi output
using namespace std;

int main() {
    string nama, jenisServis, statusLangganan;
    double biayaAwal = 0, potongan = 0, totalBayar = 0;

    cout << "=== Program Hitung Biaya Servis Motor ===\n";
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama);

    cout << "Pilih jenis servis (Ringan/Sedang/Berat): ";
    getline(cin, jenisServis);0

    cout << "Apakah pelanggan langganan tetap? (ya/tidak): ";
    getline(cin, statusLangganan);

    // Menentukan biaya awal
    if (jenisServis == "Berat") {
        biayaAwal = 900000;
    } else if (jenisServis == "Sedang") {
        biayaAwal = 700000;
    } else if (jenisServis == "Ringan") {
        biayaAwal = 400000;
    } else {
        cout << "Jenis servis tidak dikenali.\n";
        return 1;
    }

    // Menghitung potongan
    if (statusLangganan == "ya" || statusLangganan == "Ya") {
        if (jenisServis == "Berat")
            potongan = biayaAwal * 0.3;
        else if (jenisServis == "Sedang")
            potongan = biayaAwal * 0.16;
        else if (jenisServis == "Ringan")
            potongan = biayaAwal * 0.2;
    }

    totalBayar = biayaAwal - potongan;

    // Menampilkan hasil
    cout << "\n=== RINCIAN BIAYA ===\n";
    cout << left << setw(20) << "Nama Pelanggan" << ": " << nama << endl;
    cout << left << setw(20) << "Jenis Servis"    << ": " << jenisServis << endl;
    cout << left << setw(20) << "Biaya Awal"      << ": Rp" << fixed << setprecision(0) << biayaAwal << endl;
    cout << left << setw(20) << "Potongan"        << ": Rp" << potongan << endl;
    cout << left << setw(20) << "Total Bayar"     << ": Rp" << totalBayar << endl;

    return 0;
}

