//
// Created by Fred on 29/04/2018.
//

#ifndef POOTP1_JOGADORDEFESA_H
#define POOTP1_JOGADORDEFESA_H

#include "Jogador.h"

class JogadorDefesa : public Jogador{
    int cobertura;
    int desarme;
public:
    JogadorDefesa(const string&, const string&, int = 0, int = 0, int = 0, int = 0);
    int getHabilidade();
    void setCobertura();
    void setDesarme();
    void setHabilidade();
};


#endif //POOTP1_JOGADORDEFESA_H
