#include <iostream>
#include <vector>

using namespace std;

// Fungsi merge untuk menggabungkan dua bagian terurut dari array
void merge(vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Buat array temporari untuk menyimpan dua bagian
    vector<int> leftArr(n1), rightArr(n2);

    // Salin data ke array temporari
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    // Gabungkan dua array temporari kembali ke dalam array utama
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen jika ada
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Fungsi merge sort menggunakan pendekatan divide and conquer
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        // Temukan titik tengah array
        int middle = left + (right - left) / 2;

        // Rekursif untuk membagi array
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Gabungkan dua bagian yang terurut
        merge(arr, left, middle, right);
    }
}

int main() {
    int n;

    // Meminta input jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Meminta input elemen-elemen array
    vector<int> arr(n);
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // gunakan mergeSort()
    mergeSort(arr, 0, n - 1);

    // Menampilkan array yang sudah diurutkan
    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
