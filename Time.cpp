//
// Created by Fred on 28/04/2018.
//

#include "Time.h"

Time::Time(string, int, int, int, int, int) :nomeTime(), vitorias(0), derrotas(0), empates(0), habilidadeT(0), sorte(0){}

string Time::getNome(){
    return this->nomeTime;
}
string Time::getResultados(){
    // metodo getPlacar() da classe Partida
    //o metodo getPlacar sera um if placarcasa > placarvisitante -> resultado = vitoria(lembrar que são strings)
    //getResultados são os reusltados do time, baseado em seus atributos de vitoria empate e derrota
}

int Time::getHabilidadeT() {
    return habilidadeT;
}

int Time::getSorte() {
    return sorte;
}

void Time::setNome(string &nomeT) {
    nomeTime = nomeT;
}

/*void Time::setHabilidadeT() {
    for(auto itr = vecJogadores.begin(); itr != vecJogadores.end();++itr){
        habilidadeT += itr.getHabilidade();
    }
}
*/
void Time::setSorte() {

}

void Time::imprimeJogadores() {
    for(auto itr = vecJogadores.begin(); itr != vecJogadores.end();++itr){
        //cout << *itr << " " << endl;
    }
    //sobrecarregar operador cout e criar método para imprimir jogador
}

void Time::somaVitoria(){
    vitorias++;
}

void Time::somaDerrota() {
    derrotas++;
}

void Time::somaEmpate() {
    empates++;
}

void Time::inserirJogador(Jogador playerInserir) {
    vecJogadores.push_back(playerInserir);
}

//tenho que determinar o "tipo" (posição) de cada jogador a ser inserido no time