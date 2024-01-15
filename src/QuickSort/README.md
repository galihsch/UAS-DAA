# Quick Sort DAC

Program ini adalah implementasi algoritma pengurutan cepat (quick sort) menggunakan pendekatan divide and conquer.

- Fungsi partition:

    Fungsi ini bertanggung jawab untuk membagi array menjadi dua bagian (subarray) berdasarkan elemen pivot.
    Elemen pivot dipilih dari array, dan inisialisasi indeks i yang menunjukkan elemen terakhir yang lebih kecil atau sama dengan pivot.
    Melalui loop, setiap elemen dibandingkan dengan pivot. Jika lebih kecil atau sama dengan pivot, maka elemen tersebut ditukar dengan elemen pada indeks i, dan i ditingkatkan.
    Terakhir, elemen yang terletak setelah pivot ditukar dengan pivot.
    Fungsi mengembalikan indeks pivot setelah proses pembagian array.


- Fungsi quickSort:

    Fungsi ini merupakan implementasi algoritma quick sort menggunakan pendekatan divide and conquer.
    Jika low kurang dari high, artinya masih ada lebih dari satu elemen dalam subarray yang akan diurutkan.
    Fungsi memanggil partition untuk menemukan indeks pivot yang memisahkan array menjadi dua bagian.
    Setelah itu, rekursif dipanggil untuk dua subarray yang ada sebelum dan setelah pivot.

- Fungsi main:

    Program dimulai dengan meminta pengguna untuk memasukkan jumlah elemen array (n).
    Vector arr dibuat untuk menyimpan elemen-elemen array.
    Pengguna diminta untuk memasukkan nilai setiap elemen array.
    Setelah array dimasukkan, program memanggil fungsi quickSort untuk mengurutkan array.
    Hasil pengurutan array kemudian ditampilkan ke layar.

- Contoh Eksekusi:

  - Pengguna diminta untuk memasukkan jumlah elemen array, misalnya, 5.
    Selanjutnya, pengguna diminta untuk memasukkan nilai setiap elemen array.
  - Program akan mengurutkan array menggunakan algoritma quick sort.
  - Hasilnya akan ditampilkan ke layar.

`Algoritma quick sort efisien karena membagi masalah menjadi submasalah yang lebih kecil dan kemudian mengurutkan submasalah tersebut secara rekursif. Fungsi partition digunakan untuk membagi array, dan rekursif dipanggil untuk mengurutkan kedua subarray yang dihasilkan`