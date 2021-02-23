#include<stdio.h>
#include<stdlib.h>
      

int main(){
           int a,b=-1,vetor[1000],c;
           float media=0,soma=0;
           do{            //Repetição para coletar os numeros
           b++;                          //incremento, é o mesmo que b=b+1          
           printf("\nDigite um  numero ou 0 <zero> para SAIR: ");
           scanf("%d",&vetor[b]);        //Armazena o numero na posição (linha) b do vetor

           }while((b<1000)&&(vetor[b]!=0));      //Repete até 1000 vezes ou ate o valor 0 ser pressionado
          
           for(a=0;a<b;a++){  //percore o vetor
               soma=soma+vetor[a];
               media=soma/b;
               
           }
   
           printf("\nMedia= %.3f \n",media);

return 0;
}
//Fim do programa