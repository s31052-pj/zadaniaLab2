#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Podaj wysokość: ";
    cin >> a;

    cout << "Podaj szerokość: ";
    cin >> b;
    cout << endl;
    
    cout << "Pobrane liczby a == " << a << " b == " << b << endl;
    cout << endl;
    
    cout << "Wiersz o dlugosci b == " << b << endl;
    for (int i = 0; i < b; i++) {
        cout << "*";
    }
    cout << endl;
    cout << endl;
    
    cout << "Kolumna o dlugosci a == " << a << endl;
    for (int i = 0; i < a; i++) {
        cout << "*\n";
    }
    cout << endl;
    
    cout << "Kwadrat o wymiarach a == " << a << " b == " << b << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Obwod prostokata o wymiarach a == " << a << " b == " << b << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    
    int wysokosc;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    int wysokosc2;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc2;

    for (int i = 0; i < wysokosc2; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < wysokosc2 - i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}