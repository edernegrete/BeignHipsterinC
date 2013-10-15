#include <stdio.h>
#include <conio.h>
float r,v,i;
int opcion;
int main(){
	
printf("OPCIONES:");	
printf("1) Resistencia");
printf("2) Voltaje");
printf("3) Intensidad");

printf ("¿Qué quieres calcular? pon el número de la opción [ ]");
scanf("%d", &opcion);
switch (opcion)
{
	case 1:
		printf("Voltaje [ ]");
		scanf("%f",&v);
		printf("Intensidad [  ] ");
		scanf("%f", &i);
		r=v/i;
		printf("El valor de la resistencia es %f",r);
	break;
	case 2:
		printf("Resistencia [ ]");
		scanf("%f",&r);
		printf("Intensidad [ ]");
		scanf("%f",&i);
		v=r*i;
		printf("El voltaje es igual a %f",v);
	break;
	case 3:
		printf("Voltaje [ ]");
		scanf("%f",&v);
		printf("Resistencia [ ]");
		scanf("%f", &r);
		i=v/r;
		printf("El valor de la intensidad es %f",i);
			
	break;
	dafault:
	printf("No seas noob, selecciona una existente");
}


}
getch();
