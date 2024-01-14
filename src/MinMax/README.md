# Min-Max

`Mencari elemen dengan nilai terendah dan tertinggi dalam sebuah array`

- Menggunakan pendekatan `Divide and Conquer`
- Menggunakan bahasa pemrograman `C++`
  
---

Studi Kasus:
Mencari elemen dengan nilai tertinggi dan terendah dalam array [3, 1, 7, 9, 5, 8]

- Step 1 - Divide:
  - Membagi dua array hingga masing - masing memiliki 1 atau maksimal 2 elemen.
- Step 2 - Solve:
  - Bandingkan nilai masing - masing elemen dalam node array, assign value terbesar sebagai `maximum` dan terendah sebagai `minimum`
- Step 3 - Combine:
  - Bandingkan sub-solution dari masing - masing node array, gabungkan dan bandingkan nilai `minimum` untuk mencari nilai terendah dan `maximum` untuk mencari nilai tertinggi
  - Gabungkan hingga mendapat satu hasil akhir.

Hasil akhir dari permasalahahan diatas adalah:

```bash
Nilai Minimum: 1
Nilai Maksimum: 9
```
