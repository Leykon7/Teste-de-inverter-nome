#include <iostream>
#include "funcs.h"
using namespace std;


int main()
{
	/*
	int var = 10;
	
	//Passagem por valor
	cout<<"Valor de var: "<<var<<endl;//Imprime 10	
	passagemValor(var);//Não altera a variavel
	cout<<"Valor de var: "<<var<<endl; //Imprime 10
	
	//Passagem por ponteiro
	cout << "Valor de var: " << var << endl;//Imprime 10
	passagemPonteiro(&var);//Altera a variavel
	cout << "Valor de var: " << var << endl;//Imprime 11

	//Passagem por referência
	cout << "Valor de var: " << var << endl;//Imprime 10
	passagemReferencia(var);//Altera a variavel
	cout << "Valor de var: " << var <<endl<<endl;//Imprime 11
	*/
	//Passagem de char
	char nome[50];
	cout<<"Digite o nome: ";
	cin>>nome;
	cout<<"Impressao de nome"<<nome<<endl;
	cout<<"endereco de nome: "<<&nome;
	inverteNome(&nome[0]);
}
