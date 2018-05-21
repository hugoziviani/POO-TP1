//
// Created by Fred on 20/05/2018.
//

#ifndef POOTP1_PARTIDA_H
#define POOTP1_PARTIDA_H

#include "Time.h"
#include "Data.h"
#include <cstring>

class Partida {
    Data data;
    Time timeHome;
    Time timeAway;
    int placarHome;
    int placarAway;
public:
    Partida(int = 0, int =0);
    Data setData(int dia, int mes, int ano);
    Time setTimeHome();
    Time setTimeAway();
    void golHome(int placarHome);
    void golAway(int placarAway);
    string getPlacar(int placarHome, int placarAway);

};


#endif //POOTP1_PARTIDA_H
