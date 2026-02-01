#include <iostream>
#include "Asiakas.h"

using namespace std;

int main() {

    Asiakas aapeli("Aapeli", 1000);

    cout << "Pankkitili luotu Aapeli:lle" << endl;
    cout << "Luottotili luotu Aapeli:lle, luottoraja 1000" << endl;
    cout << "Asiakkuus luotu Aapeli" << endl;
    aapeli.showSaldo();
    cout << endl;

    aapeli.talletus(250);
    cout << "Pankkitili: talletus 250 tehty" << endl;

    aapeli.luotonNosto(150);
    cout << "Luottotili: nosto 150 tehty" << endl;

    aapeli.showSaldo();
    cout << endl;

    Asiakas bertta("Bertta", 1000);

    cout << "Aapeli" << endl;
    aapeli.showSaldo();

    cout << "Pankkitili: Aapeli siirtaa 50 Bertta:lle" << endl;
    aapeli.tiliSiirto(50, bertta);

    cout << "Bertta" << endl;
    bertta.showSaldo();

    return 0;
}
