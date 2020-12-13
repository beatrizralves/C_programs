//Funções ex. 1 a.
//Um	programa	que	solicite	dois	números	ao	utilizador	e	apresente	no	
//ecrã,	o	resultado	da	sua	soma,	e	o	dobro	de	cada	um	deles
#include<stdio.h>
#include<stdlib.h>

int dobro (int n){
	int dobro=0;
	dobro=2*n;
	return dobro ;
}

int soma(int x, int y){
	int soma=0;
	soma=x+y;
	return soma;
}


int main(){
	
	int a=0;
	int b=0;
	
	printf("Insira um numero:");
	scanf("%d",&a);
	printf("Insira um numero:");
	scanf("%d",&b);
	printf("O dobro de %d e:%d, o dobro de %d e:%d.\n",a,dobro(a),b,dobro(b));
	printf("A soma de %d+%d=%d",a,b,soma(a,b));
	
	return 0;
}
