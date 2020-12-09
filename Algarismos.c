#include<stdio.h>
#include<stdlib.h>


int main(){	
    int contador= 0;
	int n =0;
    scanf("%d", &n);
   do
       {
          contador= contador+ 1;
           n = n / 10;
       }
    while (n != 0);
       printf("%d algarismo/s\n", contador);
       
	
 return 0;

}

