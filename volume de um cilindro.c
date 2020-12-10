#include<stdio.h>
const float pi = 3.14;

int main(){
	int r,h,a,v;
	
	
	printf("Calcular volume de um cilindro:\n");
    printf("Indique o valor do raio da base do cilindro:\n");
    scanf("%d",&r);
    	a=pi*r*r;
    printf("A area da base do cilindro e:%d\n",a );
    printf("Indique o valor da altura do cilindro:\n");
    scanf("%d",&h);
	    v=a*h;	
    printf("O volume do cilindro e: %d \n",v);
    return 0;
    
}

