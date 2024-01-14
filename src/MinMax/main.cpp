/*
    CASE STUDY:
    Mencari elemen dengan nilai minimum dan maksimum dari sebuah array
*/

#include<iostream>
#include<vector>

using namespace std;

struct MinMax {
    int minimum;
    int maximum;
};

MinMax findMinMax(const vector<int>& arr, int low, int high) {
    MinMax result, left, right;

    // Jika array hanya memiliki satu elemen
    if (low == high) {
        result.minimum = arr[low];
        result.maximum = arr[low];
        return result;
    }

    // Jika array memiliki dua elemen
    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            result.minimum = arr[high];
            result.maximum = arr[low];
        } else {
            result.minimum = arr[low];
            result.maximum = arr[high];
        }
        return result;
    }

    // Jika array memiliki lebih dari dua elemen, pecah menjadi dua bagian
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Gabungkan hasil dari dua bagian
    result.minimum = min(left.minimum, right.minimum);
    result.maximum = max(left.maximum, right.maximum);

    return result;
}

int main() {
    vector<int> arr = {3, 1, 7, 9, 5, 8};
    int n = arr.size();

    MinMax result = findMinMax(arr, 0, n - 1);

    cout << "Nilai Minimum: " << result.minimum << endl;
    cout << "Nilai Maksimum: " << result.maximum << endl;

    return 0;
}