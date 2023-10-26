#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    int suma = 0;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
        x += suma;
    }
    cout << x << endl;
    return 0;
}