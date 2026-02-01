#include "Asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(string n, double raja) : tili(n), luotto(n, raja) {
    nimi = n;
}

void Asiakas::showSaldo() {
    cout << "Kayttotilin saldo " << tili.getBalance() << endl;
    cout << "Luottotilin saldo " << luotto.getBalance() << endl;
}

void Asiakas::talletus(double summa) {
    tili.deposit(summa);
}

void Asiakas::nosto(double summa) {
    tili.withdraw(summa);
}

void Asiakas::luotonNosto(double summa) {
    luotto.withdraw(summa);
}

void Asiakas::luotonMaksu(double summa) {
    luotto.deposit(summa);
}

void Asiakas::tiliSiirto(double summa, Asiakas& toinen) {
    if (tili.withdraw(summa)) {
        toinen.tili.deposit(summa);
    }
}
