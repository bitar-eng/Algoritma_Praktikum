#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 5;
    float suhu[N];
    float total = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "masukkan Suhu ke-" << i+1 << " : ";
        cin >> suhu[i];
        total += suhu[i];
    }

    cout << "==========================" << endl << left;
    cout << setw(15) << "Rata-rata Suhu " << ": " << fixed << setprecision(1) << total/N << endl;
}
