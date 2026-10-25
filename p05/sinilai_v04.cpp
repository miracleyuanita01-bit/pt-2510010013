#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jumlah = 0;
    double nilai;
    double total_nilai = 0.0; // akumulator 1
    int jumlah_lulus = 0;     // akumulator 2

    // WAJIB pakai do-while untuk jumlah
    do {
        std::cout << "Jumlah mahasiswa: ";
        cin >> jumlah;
    } while (jumlah <= 0);

    cout << fixed << setprecision(2);
    
    // WAJIB pakai for untuk mahasiswa
    for (int i = 1; i <= jumlah; i++) {
        cout << "Mahasiswa ke-" << i << " nilai: ";
        cin >> nilai;

        total_nilai += nilai;
        if (nilai >= 60) {
            jumlah_lulus++;
        }
    }

    // WAJIB rekap sejajar (1 baris)
    double rata = total_nilai / jumlah;
    cout << "\nRekap: Total=" << total_nilai 
         << " | Rata=" << rata 
         << " | Lulus=" << jumlah_lulus 
         << " | Tidak Lulus=" << (jumlah - jumlah_lulus) << endl;

    return 0;
}