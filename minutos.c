#include<stdio.h>
 main(){
 	int minutos=0;
	int d=0;
	int h=0;
	int r1=0;
	int m=0;
 	
 	printf("Transformar minutos em dias horas e minutos\n");
	printf("Quantos minutos quer transformar:\n");
	scanf("%d",&minutos);
		d=minutos/(24*60);
		r1=minutos%(24*60);
		h=r1/60 ;		
		m=r1%60;
	
	printf("%d minutos sao %d horas,%d dias,%d minutos \n ", minutos,h,d,m);

 }
