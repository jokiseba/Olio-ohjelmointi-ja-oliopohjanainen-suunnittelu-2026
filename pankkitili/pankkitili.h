#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>
using namespace std;

class Pankkitili {
protected:
    double saldo;
    string nimi;

public:
    Pankkitili(string n);

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);
    double getBalance();
    virtual ~Pankkitili() {}  // virtuaalidestruktori, hyvä käytäntö
};

#endif
