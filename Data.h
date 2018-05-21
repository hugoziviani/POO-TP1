//
// Created by Fred on 20/05/2018.
//

#ifndef POOTP1_DATA_H
#define POOTP1_DATA_H

#include <iostream>

class Data {
    int mes;
    int dia;
    int ano;

public:
    Data (int = 0, int = 0 , int = 0);
    void setMes(int mes);
    void setDia(int dia);
    void setAno(int ano);
    int getMes();
    int getDia();
    int getAno();
    void exibeData();

};

#endif //POOTP1_DATA_H
