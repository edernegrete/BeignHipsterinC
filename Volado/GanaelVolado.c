#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int  opcion,a,x,b,c,intentos,numero_aleatorio=0;
char volado;
main (){
	clrscr();
	printf("\n Gana el volado, tienes 5 oportunidades");
   printf("\n 1) AGUILA");
   printf("\n 2) SOL");

   printf("\n\n Opcion [ ] \b\b\b");
   scanf("%d", &opcion);
   do{
   	switch(opcion){              
      	case 1: printf("\n Aguila");
         scanf("%d", &b);
         break;
         case 2: printf("\n Sol");
         scanf("%d", &c);
      }
      intentos++;
   }while(intentos!=5 && numero_aleatorio != opcion);
   if (numero_aleatorio == opcion)
   	printf("\n ganaste");


   randomize();
	srand (time(NULL));
  	numero_aleatorio=0+rand()%3;
	for (x=0;x < 1; x++){
	 	numero_aleatorio;
   	if (numero_aleatorio>=1){
			printf("\n SOL", &c);
		}
		else{
	  	printf("\n AGUILA", &b);
   	}
   }






getch();
}








