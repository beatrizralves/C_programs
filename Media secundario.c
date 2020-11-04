#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
  
  int main () {
   
   float a,a1,a2,b,b1,b2,c,c1,c2,d,d1,e,e1,f,f1,g,h,media,somatotal,soma,soma1,soma2,soma3,soma4,soma5,media1,media2,media3,media4,media5,media6,mediatotal;
   printf("Calcular media do secundario\n");
   printf ("Introduza a nota que teve a Portugues nos 3 anos \n");
   printf("10 ano:");
   scanf ("%2f",& a);
   printf("11 ano:");
   scanf ("%2f",& a1);
   printf("12 ano:");
   scanf ("%2f",& a2);
   printf ("Introduza a nota que teve a Matematica A nos 3 anos \n");
   printf("10 ano:");
   scanf ("%2f",& b);
   printf("11 ano:");
   scanf ("%2f",& b1);
   printf("12 ano:");
   scanf ("%2f",& b2);
   printf ("Introduza a nota que teve a Educacao Fisica nos 3 anos \n");
   printf("10 ano:");
   scanf ("%2f",& c);
   printf("11 ano:");
   scanf ("%2f",& c1);
   printf("12 ano:");
   scanf ("%2f",& c2);
   printf ("Introduza a nota que teve a Biologia e Geologia \n");
   printf("10 ano:");
   scanf ("%2f",& d);
   printf("11 ano:");
   scanf ("%2f",& d1);
   printf ("Introduza a nota que teve a Fisica e Quimica A \n");
   printf("10 ano:");
   scanf ("%2f",& e);
   printf("11 ano:");
   scanf ("%2f",& e1);
   printf ("Introduza a nota que teve a Espanhol ou Ingles \n");
   printf("10 ano:");
   scanf ("%2f",& f);
   printf("11 ano:");
   scanf ("%2f",& f1);
   printf ("Introduza a nota que teve a Psicologia ou API \n");
   printf("12 ano:");
   scanf ("%2f",& g);
   printf ("Introduza a nota que teve a Biologia ou Fisica \n");
   printf("12 ano:");
   scanf ("%2f",& h);
   
     soma=(a+a1+a2);
     soma1=(b+b1+b2);
     soma2=(c+c1+c2);
     soma3=(d+d1);
     soma4=(e+e1);
     soma5=(f+f1);
	 somatotal=soma+soma1+soma2+soma3+soma4+soma5;
	 media1=(soma/3);
	 media2=(soma1/3);
	 media3=(soma2/3);
	 media4=(soma3/2);
	 media5=(soma4/2);
	 media6=(soma5/2);
	 mediatotal=(media1+media2+media3+media4+media5+media6+g+h);
	  
     
   	 media =mediatotal /8;
   printf ("A tua media do 12ano e de:%.4f\n", media );
   if (media >=9.5) 
         {                                                              
            printf ("VOCE FOI APROVADO ");
            getch();                             
         }
   else
          { 
               printf ("VOCE FOI REPROVADO #estudasses ");
                getch();
           }
  
   
   
    return 0;                            
}

