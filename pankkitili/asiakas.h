#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>
using namespace std;

class Asiakas {
private:
    string nimi;
    Pankkitili tili;
    Luottotili luotto;

public:
    Asiakas(string n, double raja);

    void showSaldo();
    void talletus(double summa);
    void nosto(double summa);
    void luotonNosto(double summa);
    void luotonMaksu(double summa);
    void tiliSiirto(double summa, Asiakas& toinen);
};

#endif
