#include<stdio.h>
#include<stdlib.h>

int maior(int x){
	if(x<0){
		return -1;
	}else if (x>0){
	
	    return 1;
	}
}
int main(){
	int a, resultado;
	printf(" Insira um numero:");
	scanf("%d",&a);
	resultado=maior(a);
	printf("resultado:%d",resultado);
	return 0;
}
