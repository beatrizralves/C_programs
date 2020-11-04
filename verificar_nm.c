#include<stdio.h>
main(){
	int a=0;
	printf("Insira um numero: \n");
	scanf("%d",&a);
//condições
	if(a<0){
		printf("o numero e negativo\n");
	}
	else if (a>0){
		printf("o numero e positivo\n");
	}else if (a==0){
		printf("o valor e nulo\n");
	}
}
