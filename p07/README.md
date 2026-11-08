# P07 String dan Validasi Input

Pertemuan ini membahas manipulasi teks, `std::string`, dan cara menangani input yang tidak valid. Ini merupakan materi terakhir sebelum UTS. Program beralur lurus seperti `gabung_banding.cpp` dan `getline_campur.cpp` tidak memerlukan flowchart.

## Materi

| Berkas                   | Pokok bahasan                                                                                           |
| ------------------------ | ------------------------------------------------------------------------------------------------------- |
| `gabung_banding.cpp`     | Penggabungan dan perbandingan string, `.length()`, serta akses karakter melalui indeks                  |
| `huruf_per_huruf.cpp`    | Menelusuri string dengan loop untuk menghitung kata/vokal, membalik teks, dan mengubah kapitalisasi     |
| `rapikan_nama.cpp`       | Membuat huruf awal setiap kata menjadi kapital memakai penanda `awal_kata`, `toupper`, dan `tolower`    |
| `getline_campur.cpp`     | Newline tersisa sesudah `cin >>` serta pemakaiannya bersama `cin.ignore(1000, '\n')` dan `getline`      |
| `input_aman.cpp`         | Memulihkan aliran input angka dengan `cin.fail()`, `cin.clear()`, dan `cin.ignore()`                    |
| `validasi_nama.cpp`      | Mengulang permintaan nama sampai input tidak kosong, bukan hanya spasi, dan bebas angka                 |
| `sinilai_v06_awal.cpp`   | Kerangka v0.6: menambahkan validasi input angka, pemeriksaan nama, dan pembakuan kapitalisasi pada v0.5 |
| `contoh_masukan.txt`     | Enam data mahasiswa dengan input penguji yang sengaja salah, termasuk `r2d2`, `abc`, dan `120`          |
| `.vscode/`, `.gitignore` | Konfigurasi lokal dari pertemuan sebelumnya, termasuk debugger                                          |

## Hasil uji SiNilai v0.6

Jalankan dengan `./sinilai_v06 < contoh_masukan.txt`. Masukan mencakup variasi kapitalisasi `siti AMINAH` dan `BUDI SANTOSO`, baris kosong, nama `r2d2`, teks `abc` pada nilai mingguan, serta nilai UTS `120`. Program harus menolak input yang tidak valid, meminta input pengganti, merapikan nama, dan menghasilkan laporan berikut.

| Mahasiswa     | Nilai akhir | Huruf | Status      |
| ------------- | ----------: | ----- | ----------- |
| Siti Aminah   |       83.97 | A     | Lulus       |
| Budi Santoso  |       67.75 | C+    | Lulus       |
| Rina Wati     |       49.50 | D     | Belum lulus |
| Dewi Lestari  |       90.00 | A     | Lulus       |
| Eko Prasetyo  |       71.00 | B     | Lulus       |
| Fajar Nugroho |       25.75 | E     | Belum lulus |

Rekap kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rerata 64.66, tertinggi Dewi Lestari (90.00), dan sebaran A 2, B 1, C 1, D 1, E 1. Nilai B+ dihitung dalam kelompok B; C+ dihitung dalam kelompok C.

Starter berjalan dengan data bersih, tetapi belum menangani seluruh input jebakan pada file contoh. Lengkapi bagian tersebut untuk memperoleh laporan yang sesuai.

## Pengumpulan

Letakkan `sinilai_v06.cpp` dan README tugas di folder `p07` repositori `pt-NPM`. Lihat Modul Pertemuan 7 bagian E.

## Deklarasi AI

AI yang digunakan: ChatGPT (OpenAI).

Prompt: "Bagaimana cara membuat validasi nama pada program SiNilai v0.6 menggunakan C++ agar input yang kosong, hanya berisi spasi, atau mengandung angka ditolak? Jelaskan juga cara mengulang input sampai nama yang dimasukkan benar."

Umpan balik AI: ChatGPT menyarankan untuk memeriksa apakah nama kosong atau hanya berisi spasi, kemudian menelusuri setiap karakter untuk memastikan tidak terdapat angka. Jika input tidak memenuhi ketentuan, program akan meminta pengguna memasukkan nama kembali. Saya menerapkan dan menguji saran tersebut menggunakan contoh masukan yang telah disediakan.
