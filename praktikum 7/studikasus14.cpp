#include <iostream>
using namespace std;

void swapValues(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    swapValues(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}