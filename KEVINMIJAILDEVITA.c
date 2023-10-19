#include <stdio.h>
#include <stdlib.h>


/* 1ER PARCIAL KEVIN DE VITA */

int main() {
	system("cls");
	float A,B,C,Datos,Resu;
	int Obs,Costo,Total,operacion,num,band=0;
	char Obras;
	printf ("\t\t SANATORIO CRUZ AZUL\n\n");
	printf ("Ingrese su numero de atencion\n\n");
	scanf("%d",&num);
	//Ingreso de Obs
	 printf ("\t\t Seleccione Obra Social\n\n");
	printf("A: Astro\n");
	scanf("%c",&Obras);
	printf("B: Doc\n");
	scanf("%c",&Obras);
	printf("C: Autodos\n");
	scanf("%c",&Obras);
	
	switch(Obras){
		case 'A':
			printf("Obra Social Astro, ingrese monto a Cobrar \n");break;
		case 'B':
			printf("Obra Social Doc, ingrese monto a Cobrar\n");break;
		case 'C':
			printf("Obra Social Autodos, ingrese monto a Cobrar \n");break;
				
	}
	
	
	//Valores  de atencion totales
	printf(" Ingrese Monto ASTRO :");
	scanf("%f",&A);
	printf(" Ingrese Monto DOC  :");
	scanf("%f",&B);	
	printf(" Ingrese Monto AUTODOS  :");
	scanf("%f",&C);
	
	if(A>=B && A >= C){
	printf("%2.f Es la Obra Social que mas paga\n",A);
	}	
	else if(B>=A && B >= C){
		printf("%2.f Es la Obra Social que mas paga\n",B);
	}
	else if (C>=B && C >= A) {
		printf("%2.f Es la Obra Social que mas paga\n",C);
		}
	
	
	return 0;
}
