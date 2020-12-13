//Funções ex. 2 b.
//Uma	função	que	receba	como	parâmetro	um	dado	inteiro,	x,		calcule	e	
//devolva	o	seu	simétrico.	Um	programa	que	peça	x	ao	utilizador,	evoque	
//a	rotina	de	cálculo	do	simétrico	e	escreva	o	resultado	no	ecrã.

#include<stdio.h>
#include<stdlib.h>

int simetrico(int x){
	int a=0;
	a=x*(-1);
	return a;
	
}

int main(){
	int b=0;
	printf("Insira um numero:");
	scanf("%d",&b);
	printf("O simetrico de %d e:%d",b,simetrico(b));
	
	
	return 0;
	
}
