#include <iostream>
using namespace std;

int* findMax(int arr[], int size) {
    if (size <= 0) {
        return nullptr;
    }

    int *maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int main() {
    int arr[] = {3, 5, 2, 9, 6};
    int *maxPtr = findMax(arr, 5);

    if (maxPtr != nullptr) {
        cout << "Nilai maksimum dalam array adalah: " << *maxPtr << endl;
    }

    return 0;
}
