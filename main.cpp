#include <iostream>

using namespace std;

int budzet, btygodniowy, kawa, laura, restauracja, reszta, transport, niespodzianki, y;

int main()
{
    cout << "" << endl << endl;
    cout << "" << endl << endl;
    cout << "" << endl << endl;

    cout << "Wpisz budzet rodzinkowy na ten miesiac: ";
    cin >> budzet;

    btygodniowy = budzet/4;
    kawa = (btygodniowy-50)/5;
    laura = (btygodniowy-50)/5;
    restauracja = kawa*2;
    transport = 30;
    niespodzianki = 20;
    reszta = btygodniowy-(kawa+laura+restauracja+transport+niespodzianki);

    cout << "" << endl << endl;

    cout << "Budzet na 7dni: " << btygodniowy << endl << endl;

        cout << "Zakupy: 50" << endl;

        cout << "Kawa: " << kawa << endl;

        cout << "Laura:" << laura << endl;

        cout << "Restauracja: " << restauracja << endl;

        cout << "Transport: " << transport << endl;

        cout << "Niespodzianki: " << niespodzianki << endl;

        cout << "Reszta: " << reszta << endl << endl;

    y = reszta*4;

    cout << "Miesiecznie zostanie pieniedzy: " << y  << endl << endl;

    return 0;
}
