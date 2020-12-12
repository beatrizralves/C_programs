#include <stdio.h>
  
int fib(int n){                                         
	if (n == 1) return 1;                   
	else                              
	if (n == 2) return 1;                 
	else return fib(n - 1) + fib(n - 2);  
}                                         

int main(void){
	int n;
	printf("digite um numero:");
	scanf("%d", &n);
	if (n!=0){
		printf("O nuemro fibonacci :%d\n", fib(n));
	}	
	else{
		printf("o numero que voce digitou e invalido");
	}

	return 0;
}
