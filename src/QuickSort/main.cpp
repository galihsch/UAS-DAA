#include <iostream>
#include <vector>

using namespace std;

// Fungsi partition untuk membagi array menjadi dua bagian
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pilih elemen terakhir sebagai pivot
    int i = low - 1;       // Indeks elemen yang lebih kecil dari atau sama dengan pivot

    for (int j = low; j < high; j++) {
        // Jika elemen saat ini lebih kecil dari atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++;
            // Tukar arr[i] dan arr[j]
            swap(arr[i], arr[j]);
        }
    }

    // Tukar elemen setelah pivot dengan pivot
    swap(arr[i + 1], arr[high]);

    // Kembalikan indeks pivot
    return i + 1;
}

// Fungsi quick sort menggunakan pendekatan divide and conquer
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Temukan indeks pivot yang memisahkan array menjadi dua bagian
        int pivotIndex = partition(arr, low, high);

        // Rekursif untuk dua bagian
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
