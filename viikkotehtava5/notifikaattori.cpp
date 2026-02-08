#include "Notifikaattori.h"
#include <iostream>

using namespace std;

Notifikaattori::Notifikaattori()
{
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* s)
{
    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja* s)
{
    if (seuraajat == nullptr) return;

    // jos poistettava on ensimmäinen
    if (seuraajat == s)
    {
        seuraajat = seuraajat->next;
        s->next = nullptr;
        return;
    }

    // etsitään edeltäjä
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr && nykyinen->next != s)
    {
        nykyinen = nykyinen->next;
    }

    // jos löytyi listalta
    if (nykyinen->next == s)
    {
        nykyinen->next = s->next;
        s->next = nullptr;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Seuraajat: ";

    Seuraaja* o = seuraajat;
    while (o != nullptr)
    {
        cout << o->getNimi() << " ";
        o = o->next;
    }

    cout << endl;
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja* o = seuraajat;
    while (o != nullptr)
    {
        o->paivitys(viesti);
        o = o->next;
    }
}
