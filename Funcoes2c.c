//Funções ex. 2 c.
//Um	procedimento	que	escreva	no	ecrã,	um	caracter,	seguido	dos	n
//caracteres	seguintes	a	esse,	na	tabela	ascii.	Um	programa	que	peça	os	
//dados	ao	utilizador,	e	os	use	na	evocação	da	função.

#include<stdio.h>
#include<stdlib.h>

int seguinte(int x){
	x=x+1;
	return 	x;
}

int main(){
	char b;
	int n=0;
	int contador=0;
	printf("Quantos caracteres quer que sejam imprimidos apos o seu :");
	scanf("%d",&n);
	printf("Insira um caracter:\n");
	scanf("%s",& b );
	while(contador<n){
	    contador = contador + 1;
		printf("%c\n",seguinte(b));
		b=b+1;
	}
}
