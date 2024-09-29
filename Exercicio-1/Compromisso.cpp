#include <iostream>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Horario{
    int hora;
    int minuto;
};

typedef struct Compromisso{
    Data data;
    Horario horario;
    string descricao;

};

int Agendar(Compromisso *pComp);
void Calendario(Compromisso *pComp);

int main(){
    Compromisso compro[365];
    int n=0;
    char continua;

    do{
        n+=Agendar(&compro[n]);
        cout << "Continuar? s/n" << endl;
    }while(cin >> continua && (continua == 'S' || continua == 's'));
    cout << "Calendario: " << endl;
    for(int i=0; i<n; i++){
        cout << endl;
        Calendario(&compro[i]);
    }

    return 0;
}

int Agendar(Compromisso *pComp){
    cout << "Insira o dia, o mes e o ano que o compromisso acontecera." << endl;
    cin >> pComp->data.dia >> pComp->data.mes >> pComp->data.ano;
    cout << "Insira as horas, e os minutos do compromisso." << endl;
    cin >> pComp->horario.hora >> pComp->horario.minuto;
    cout << "Qual eh o nome compromisso:" << endl;
    do{
    getline(cin, pComp->descricao);
    }while(pComp->descricao =="");    

    return 1;
}

void Calendario(Compromisso *pComp){
    cout << "Nome: " << pComp->descricao << endl;
    cout << "Data: " << pComp->data.dia << "/" << pComp->data.mes << "/" << pComp->data.ano << endl;
    cout << "Horario: " << pComp->horario.hora << ":" << pComp->horario.minuto << endl;
}