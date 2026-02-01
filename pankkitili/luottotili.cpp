#include "Luottotili.h"

Luottotili::Luottotili(string n, double raja) : Pankkitili(n) {
    luottoraja = raja;
}

bool Luottotili::withdraw(double summa) {
    if (summa < 0) return false;
    if (saldo - summa < -luottoraja) return false;
    saldo -= summa;
    return true;
}

bool Luottotili::deposit(double summa) {
    if (summa < 0) return false;
    if (saldo + summa > 0) return false;
    saldo += summa;
    return true;
}
