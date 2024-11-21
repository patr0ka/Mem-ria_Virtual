#include <iostream>
using namespace std;


void Cadastrar(int i){
    string nome, telefone, endereço;
    cout << "Digite o nome do cliente: " << endl;
    cin.get();
    cin >> nome;
}

void Escolha(){
    char opcao, confirmacao;
    int i=0;
    cout << "O que voce deseja fazer?" << endl;
    cout << "1 - Cadastrar cliente" << endl << "2 - Anotar lanche;" << endl << "3 - Sair" << endl;
    cin >> opcao;
    if(opcao == '1'){
        cout << "Você escolheu a opcao 1, digite 'N' quando terminar de cadastrar" << endl;
        do{
            Cadastrar(i);
            cout << "Deseja continuar cadastrando? (N/S)" << endl;
            cin >> confirmacao;
        }while(confirmacao!='N');
    }
    if(opcao == '2'){
    }
    if(opcao == '3'){
    }
    if(opcao == '4'){
    }
}




typedef struct{
    string pao;
    string proteina;
    string queijo;
    string salada;
} Lanche;

typedef struct{
    string nome;
    string telefone;
} Cliente;



int main(){
    Escolha();


}