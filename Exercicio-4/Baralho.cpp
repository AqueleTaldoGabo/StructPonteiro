#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define N 2
#define C 5

struct Carta{
    string Numero;
    char Naipe;
};

typedef struct BaralhoJogador{
    Carta cartas[5];
};

void GerarBaralho(BaralhoJogador *player);
void MostraBaralho(BaralhoJogador player);

int main(){
    srand (time(NULL));
    BaralhoJogador Jogadores[N];

    for(int i=0; i<N; i++){
        GerarBaralho(&Jogadores[i]);
    }
    for(int i=0; i<N; i++){
        cout << "Jogador[" << i+1 << "]:" << endl;
        MostraBaralho(Jogadores[i]);
        cout << endl;
    }
    
    return 0;
}

void GerarBaralho(BaralhoJogador *player){
    string Num[10] = {"1", "2", "3", "4", "5", "6", "7", "Q", "J", "K"};
    char Nai[4] = {5, 3, 6, 4};

    for(int i = 0; i<C; i++){
        player->cartas[i].Numero = Num[rand()%10];
        player->cartas[i].Naipe = Nai[rand()%4];
    }
}

void MostraBaralho(BaralhoJogador player){
    cout << "-------------" << endl;
    for(int i = 0; i<C; i++){
        cout << player.cartas[i].Numero << " " << player.cartas[i].Naipe << endl;
    }
}