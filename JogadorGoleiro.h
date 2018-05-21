//
// Created by Fred on 28/04/2018.
//

#ifndef POOTP1_JOGADORGOLEIRO_H
#define POOTP1_JOGADORGOLEIRO_H

#include "Jogador.h"

class JogadorGoleiro : public Jogador{
    int reflexos;
    int altura;
public:
    JogadorGoleiro(const string&, const string&, int = 0, int = 0, int = 0, int = 0);
    int getHabilidade();
    void setReflexos();
    void setAltura();
    void setHabilidade();
};


#endif //POOTP1_JOGADORGOLEIRO_H
