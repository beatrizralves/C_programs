//Fun��es ex. 2 d.
//Uma	fun��o	que	calcule	o	factorial	de	um	dado	inteiro,	x;	Um	programa	
//que	pe�a	x	ao	utilizador,	evoque	a	rotina	de	c�lculo	do	factorial	e	
//escreva	o	resultado	no	ecr�.

#include<stdio.h>
#include<stdlib.h>

int fatorial(int x){
	int contador=x;
	int fatorial=1;
	while(contador>0){
		fatorial =fatorial * contador;
		contador=contador-1;
	}
	return fatorial;
}

int main(){
	int a=0;
	printf("Insira um numero:");
	scanf("%d", &a);
	printf("O fatorial de %d e:%d", a,fatorial(a));
	
	return 0;
	
}


