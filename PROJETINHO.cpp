#include <iostream>
#include <stack.h>
using namespace std;

void iniciar_vazias(Tubo T[]){
    for (int i=0; i<TAM; i++){
        initStack(T[i].pilha);
        T[i].numero_elementos=0;
        }
}   
void distribuir(Tubo T[]);

void mudacor(int cor){
    HANDLE Saida;
    Saida = GetStdHandle(STD_OUTPUT_HANDLE);
    SetCOnsoleTextAttribute(Saida,cor);
}
void printa_cor(int I){
    int cor[5]={9, 13, 2, 15, 6};
    mudacor(cor[I-1]);
    cout<<'O';
    mudacor(15);
}

void mostrar(Tubo T[]);

int validar(Tubo T[], int o, int d);

int validar_fim(Tubo T[]);

int jogada(Tubo T[]);

int main (){
    Tubo T[TAM];
    int repetir =1, retorno;
    do{
        iniciar_vazias(T);
        distribuir(T);
        mostrar(T);
        do{
            retorno = jogada(T);
            mostrar(T);
            if(retorno == 0)break;
        }while (retorno);
        mostrar(T);
        cout<<"\n P A R A B E N S ! ! !";
        cout<<"\n Jogar Novamente? 1(sim) ou 0(não): "; cin>>repetir;   
    }while(repetir);
    cout<<"Fim de JOGO!" << endl;
    return 0;
}


