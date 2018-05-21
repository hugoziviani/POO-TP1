//
// Created by Fred on 20/05/2018.
//

#include "Data.h"

using namespace std;


Data::Data(int dia, int mes, int ano) :dia(0), mes(0), ano(0){}

void Data::setMes(int mes) {
    this->mes = mes;
}

void Data::setDia(int dia) {
    this->dia = dia;
}

void Data::setAno(int ano) {
    this->ano = ano;
}

int Data::getMes() {
    return this->mes;
}

int Data::getDia(){
    return this->dia;
}

int Data::getAno() {
    return this->ano;
}

void Data::exibeData() {
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}
