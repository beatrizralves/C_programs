//Fun��es ex. 2 b.
//Uma	fun��o	que	receba	como	par�metro	um	dado	inteiro,	x,		calcule	e	
//devolva	o	seu	sim�trico.	Um	programa	que	pe�a	x	ao	utilizador,	evoque	
//a	rotina	de	c�lculo	do	sim�trico	e	escreva	o	resultado	no	ecr�.

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
