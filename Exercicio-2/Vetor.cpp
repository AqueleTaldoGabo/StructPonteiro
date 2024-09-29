#include <iostream>
using namespace std;

typedef struct Vetor{
    float x;
    float y;
    float z;
};

float Soma(Vetor *Vet);

int main(){
    Vetor Vet[2][3];
    float soma;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cin >> Vet[i][j].x >> Vet[i][j].y >> Vet[i][j].z;
        }
        soma += Soma(Vet[i]);
    }

    cout << soma << endl;

    return 0;
}

float Soma(Vetor *Vet){
    int x=0, y=0, z=0;
    for(int i = 0; i<3; i++){
        x += Vet[i].x;
        y += Vet[i].y;
        z += Vet[i].z;
    }
    return (x+y+z);
}