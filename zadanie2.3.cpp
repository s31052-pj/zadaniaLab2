#include <iostream>
using namespace std;

int main() {
    int miesiac;
    cout << "Podaj liczbe z przedzialu 1-12: ";
    cin >> miesiac;
    switch(miesiac){
        case 1:
            cout << "Styczen \n31 dni \nPochmurno";
            break;
        case 2:
            cout << "Luty \n28 dni \nPochmurno";
            break;
        case 3:
            cout << "Marzec \n31 dni \nPochmurno";
            break;
        case 4:
            cout << "Kwiecien \n30 dni \nSlonecznie";
            break;
        case 5:
            cout << "Maj \n31 dni \nSlonecznie";
            break;
        case 6:
            cout << "Czerwiec \n30 dni \nSlonecznie";
            break;
        case 7:
            cout << "Lipiec \n31 dni \nSlonecznie";
            break;
        case 8:
            cout << "Sierpien \n31 dni \nSlonecznie";
            break;
        case 9:
            cout << "Wrzesien \n30 dni \nSlonecznie";
            break;
        case 10:
            cout << "Pazdziernik \n31 dni \nPochmurno";
            break;
        case 11:
            cout << "Listopad \n30 dni \nPochmurno";
            break;
        case 12:
            cout << "Grudzien \n31 dni \nPochmurno";
            break;
        default:
            cout << "Podana liczba jest poza podanym przedzialem";
            break;
    }
    return 0;
}