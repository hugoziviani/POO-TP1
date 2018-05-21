//
// Created by Fred on 29/04/2018.
//

#ifndef POOTP1_JOGADORATACANTE_H
#define POOTP1_JOGADORATACANTE_H

#include "Jogador.h"

class JogadorAtacante : public Jogador{
    int velocidade;
    int tecnica;
public:
    JogadorAtacante :: JogadorAtacante(const string&, const string&,  int = 0, int = 0, int = 0, int = 0);
    int getHabilidade();
    void setTecnica();
    void setVelocidade();
    void setHabilidade();
};


#endif //POOTP1_JOGADORATACANTE_H
