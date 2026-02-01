#include "Pankkitili.h"

Pankkitili::Pankkitili(string n) {
    nimi = n;
    saldo = 0;
}

bool Pankkitili::deposit(double summa) {
    if (summa < 0) return false;
    saldo += summa;
    return true;
}

bool Pankkitili::withdraw(double summa) {
    if (summa < 0) return false;
    if (summa > saldo) return false;
    saldo -= summa;
    return true;
}

double Pankkitili::getBalance() {
    return saldo;
}
