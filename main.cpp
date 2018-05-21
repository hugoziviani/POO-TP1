#include "Campeonato.h"
#include "Data.h"
#include "Jogador.h"
#include "JogadorAtacante.h"
#include "JogadorDefesa.h"
#include "JogadorGoleiro.h"
#include "Partida.h"
#include "Time.h"

using namespace std;

int main() {
    Time time1;
    int opc = 1;
    string nomeJog;
    int numJog = 0;
    string nomeT = "Atletico-MG";
    string pos;
    time1.setNome(nomeT);
    while(opc != 0){
        Jogador player;
        cout << "Opc: " << endl;
        cin >> opc;
        cout << "Posicao do jogador a ser inserido: " << endl;
        cin >> pos;
        if(pos == "Atacante"){
            JogadorAtacante player;
            cout << "Nome: " << endl;
            cin >> nomeJog;
            cout << "Numero: " << endl;
            cin >> numJog;
            player.setName(nomeJog);
            player.setCamisa(numJog);
            player.setPosicao(pos);
            player.setVelocidade();
            player.setTecnica();
            player.setHabilidade();
            time1.inserirJogador(player);
        }
        else if(pos == "Defensor"){
            JogadorDefesa player;
            cout << "Nome: " << endl;
            cin >> nomeJog;
            cout << "Numero: " << endl;
            cin >> numJog;
            player.setName(nomeJog);
            player.setCamisa(numJog);
            player.setPosicao(pos);
            player.setDesarme();
            player.setCobertura();
            player.setHabilidade();
            time1.inserirJogador(player);
        }
        else if(pos == "Goleiro"){
            JogadorGoleiro player;
            cout << "Nome: " << endl;
            cin >> nomeJog;
            cout << "Numero: " << endl;
            cin >> numJog;
            player.setName(nomeJog);
            player.setCamisa(numJog);
            player.setPosicao(pos);
            player.setAltura();
            player.setReflexos();
            player.setHabilidade();
            time1.inserirJogador(player);
        }
    }
    time1.imprimeJogadores();
    return 0;
}