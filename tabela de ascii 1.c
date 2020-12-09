#include<stdio.h>
#include<stdlib.h>

int main(){
	int count=0;
	char letra=' ';
	printf("Insira uma letra:");
	scanf("%c",& letra);
	for(count=1;count<=4;count++){
		printf("%c\n",letra+count);
	
	}
}
