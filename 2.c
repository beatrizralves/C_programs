#include<stdio.h>
#include<stdlib.h>
      

int main(){
           int a,b=-1,vetor[1000],c;
           int soma=0, maior;
           do{            //Repetição para coletar os numeros
           b++;                          //incremento, b=b+1          
           printf("\nDigite um  numero ou 0 <zero> para SAIR: ");
           scanf("%d",&vetor[b]);        //Armazena o numero na posição  b do vetor

           }while((b<1000)&&(vetor[b]!=0));      //Repete até 1000 vezes ou ate o valor 0 ser pressionado
          
           for(a=0;a<b;a++){ //percore o vetor
               for(c=0;c<b;c++){
                   if (vetor[a]<vetor[c])
                   {
                       maior=vetor[c];
                   }    
               }
           }
   
           printf("\nO numero maior e %d \n",maior);
return 0;
}
//Fim do programa