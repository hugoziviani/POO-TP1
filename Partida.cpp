//
// Created by Fred on 20/05/2018.
//

#include "Partida.h"


Partida::Partida(int, int) :placarHome(0), placarAway(0){}

//Definir uma habilidade do time baseado nas habilidades dos jogadores
//Definir fatores aleatórios como sorte para definir o resultado de uma partida

Data Partida::setData(int dia, int mes, int ano) {
    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);
}

Time Partida::setTimeHome() {
    // o time será escolhido a partir de um vector que irá conter os times da classe campeonato

}

Time Partida::setTimeAway() {

}

void Partida::golHome(int placarHome) {
 // o gol dependerá da habilidade do time e dos fatores de sorte, além de especificar qual jogador fez o gol
    // tambem vale para o método fora de casa.
}

void Partida::golAway(int placarAway) {

}

string Partida::getPlacar(int placarHome, int placarAway) {
    string resultado;
    resultado = to_string(placarHome) + "x" + to_string(placarAway);
}