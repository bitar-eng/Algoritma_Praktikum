#include <iostream>
#include <iomanip>
#include <cmath>
#include <iterator>
using namespace std;

int main()
{
    const int N = 5;
    double angka[N];
    double total = 0;
    double rataRata;
    double totalSelisihKuadrat = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "masukkan angka ke-" << i+1 << " : ";
        cin >> angka[i];
        total += angka[i];
    }

    rataRata = total / N;

    for (int i = 0; i < N; i++)
    {
        totalSelisihKuadrat += (angka[i]-rataRata)*(angka[i]-rataRata);
    }

    cout << "==========================" << endl << left;
    cout << setw(15) << "Rata-rata" << ": " << fixed << setprecision(2) << rataRata << endl;
    cout << setw(15) << "Standar Deviasi" << ": " << fixed << setprecision(2) << sqrt(totalSelisihKuadrat/N) << endl;
}
