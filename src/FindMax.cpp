#include <iostream>
#include <sstream>
using namespace std;

int findMaximum(int arr[], int low, int high) 
{ 
    if (low == high) 
        return arr[low];

    int mid = (low + high) / 2;

    int leftMax = findMaximum(arr, low, mid);
    int rightMax = findMaximum(arr, mid + 1, high);

    return max(leftMax, rightMax);
} 

int main() 
{ 
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan daftar bilangan (pisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Nilai Maksimum Pada Array Adalah: " << findMaximum(arr, 0, n-1) << endl; 
    return 0; 
}
