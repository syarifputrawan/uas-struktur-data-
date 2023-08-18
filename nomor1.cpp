#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk melakukan Bubble Sort pada array
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk melakukan Selection Sort pada array
void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Fungsi untuk mencetak isi array
void printArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    string data[] = {"Fahmi Jakarta", "Romi Solo", "Andri Jakarta", "Fadillah Banyuwangi",
                      "Ruli Bandung", "Rudi Bali", "Dendi Purwokerto", "Zaki Madiun"};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan:" << endl;
    printArray(data, n);

    // Menggunakan Bubble Sort
    bubbleSort(data, n);
    cout << "\nData setelah diurutkan dengan Bubble Sort:" << endl;
    printArray(data, n);

    // Menggunakan Selection Sort
    selectionSort(data, n);
    cout << "\nData setelah diurutkan dengan Selection Sort:" << endl;
    printArray(data, n);

    return 0;
}
