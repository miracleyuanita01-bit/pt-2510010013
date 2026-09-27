# Catatan Kesalahan Praktikum 5

## Tabel Ringkasan Kesalahan

| No | Berkas | Jenis Kesalahan | Error yang Ditemukan | Penyebab Kesalahan | Solusi |
|---|---|---|---|---|---|
| 1 | `k1_sintaks.cpp` | Kesalahan Sintaks | Muncul pesan `expected ',' or ';' before 'std'` dan `unused variable 'nilai'` | Variabel `nilai` dibuat tanpa tanda `;` di akhir deklarasi. Selain itu, variabel tersebut tidak digunakan setelah dideklarasikan. | Berikan tanda `;` setelah deklarasi `int nilai = 80`. Jika variabel tidak diperlukan, deklarasinya dapat dihapus. Jika tetap digunakan, masukkan variabel tersebut ke dalam proses program. |
| 2 | `k2_nama.cpp` | Kesalahan Nama Variabel | Muncul pesan `'Nilai' was not declared in this scope` dan `'bonus' was not declared in this scope` | Nama variabel ditulis berbeda antara deklarasi dan penggunaannya. Pada C++, `Nilai` dan `nilai` dianggap sebagai dua nama yang berbeda. Variabel `bonus` juga digunakan sebelum dibuat deklarasinya. | Gunakan nama variabel yang sama secara konsisten dan deklarasikan `bonus` terlebih dahulu sebelum digunakan. |
| 3 | `k3_runtime.cpp` | Kesalahan Saat Program Berjalan | Program mengalami pembagian dengan angka nol ketika jumlah mahasiswa yang dimasukkan adalah `0` | Tidak terdapat pemeriksaan terhadap nilai input sebelum operasi pembagian dilakukan. | Periksa terlebih dahulu apakah `jumlah_mahasiswa` bernilai `0`. Jika iya, tampilkan pesan atau hentikan proses pembagian agar tidak terjadi error. |
| 4 | `k4_logika.cpp` | Kesalahan Logika | Program menghasilkan `81`, sedangkan hasil perhitungan yang diharapkan adalah `81.67` | Operasi pembagian menggunakan angka bertipe integer sehingga bagian desimal dari hasil perhitungan tidak dipertahankan. | Gunakan pembagi seperti `3.0` agar operasi dilakukan sebagai pembagian desimal dan hasil `81.67` dapat diperoleh. |

## Kesimpulan

Praktikum ini menunjukkan bahwa kesalahan pada program tidak selalu berupa error yang langsung terlihat ketika proses kompilasi. Kesalahan sintaks dan penamaan variabel biasanya dapat diketahui melalui pesan dari compiler, sedangkan kesalahan logika dapat membuat program tetap berjalan meskipun hasil yang diberikan tidak sesuai.

Oleh karena itu, setelah program berhasil dikompilasi, program tetap perlu diuji menggunakan beberapa kondisi input. Dengan cara tersebut, kesalahan pada perhitungan maupun alur program dapat ditemukan lebih awal dan diperbaiki sesuai dengan hasil yang seharusnya.
