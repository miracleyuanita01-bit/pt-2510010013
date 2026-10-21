#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double nilaiAkhir;
    char nilaiHuruf;
    string status;
    bool lulus = false;

    cout << "=========================================" << endl;
    cout << "       SISTEM PENILAIAN (SINILAI v0.3)   " << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan Nilai Akhir (0 - 100): ";
    cin >> nilaiAkhir;

    if (nilaiAkhir < 0 || nilaiAkhir > 100) {
        cout << "\n[ERROR] Nilai harus berada dalam rentang 0 sampai 100!" << endl;
        return 1;
    }

    if (nilaiAkhir >= 85) {
        nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 75) {
        nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 65) {
        nilaiHuruf = 'C';
    } else if (nilaiAkhir >= 50) {
        nilaiHuruf = 'D';
    } else {
        nilaiHuruf = 'E';
    }

    if (nilaiHuruf == 'A' || nilaiHuruf == 'B' || nilaiHuruf == 'C') {
        lulus = true;
    } else {
        lulus = false;
    }

    switch (nilaiHuruf) {
        case 'A':
            status = "Sangat Memuaskan";
            break;
        case 'B':
            status = "Memuaskan";
            break;
        case 'C':
            status = "Cukup";
            break;
        case 'D':
            status = "Kurang";
            break;
        case 'E':
            status = "Sangat Kurang";
            break;
        default:
            status = "Tidak Valid";
            break;
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "HASIL EVALUASI NILAI" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Nilai Akhir  : " << fixed << setprecision(2) << nilaiAkhir << endl;
    cout << "Nilai Huruf  : " << nilaiHuruf << endl;
    cout << "Keterangan   : " << status << endl;
    cout << "Status Lulus : " << (lulus ? "LULUS" : "TIDAK LULUS") << endl;
    cout << "=========================================" << endl;

    return 0;
}