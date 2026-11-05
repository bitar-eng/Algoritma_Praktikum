#include <iostream>
using namespace std;

// Studi Kasus 19: Mengisi seluruh elemen array dengan nilai tertentu
void fillArray(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}

int main() {
    int arr[5];

    fillArray(arr, 5, 10);

    cout << "Array setelah diisi: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}