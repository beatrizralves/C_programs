//Funcoes ex. 3 a.
//Pedir	ao	utilizador	os	salários	mensais	de	um	trabalhador	ao	longo	do	
//ano,	armazenando	os	valores	num	vector.	No	fim,	apresentar	os	valores	
//mensais	e	o	total	anual.

#include<stdio.h>
#include<stdlib.h>


int main (){
	float salario[12];
	float total=0;
	int i;
	
	for (i=0 ;i<12 ;i++){
		printf("O salario do mes %d e:",i+1);
	    scanf("%f",&salario[i]);
	}
	
	puts("Mes---Valor\n ");
	for(i=0,total=0.0;i<12;i++)	{
		printf("  %d     %.2f\n",i+1,salario[i]);
		total=total+salario[i];
	}
	
	printf("Total anual e:%.2f",total );
	
	
	
	return 0;
}
