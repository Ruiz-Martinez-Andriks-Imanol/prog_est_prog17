/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 24/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -do-while
    -for
    -Contador
    -Condicionales
    Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaraciones
	int numeros, dato, pares=0, mayor, menor;
	//Procesos
	//Introducir cuantos numeros va a leer
	printf("Introduce la cantidad de numeros a leer: ");
	scanf("%d",&numeros);
	for(int i=1;i<=numeros;i++){
		//Pedir el dato y validar que sea positivo
		do {
			printf("Introudce el numero %d (positivo): ",i);
			scanf("%d",&dato);
			if(dato<=0){
				printf("Numero negativo, intenta nuevamente.\n");
			}
		}while(dato<=0); //condicion de un dato invalido, por lo tanto lo vuelve a pedir
		//probar si es par
		if (dato%2==0){ //Si un numero es multiplo de 2, es decir su residuo es 0
			pares++;
		}
		if(i==1){ //el primer dato no tiene con quien compararse, automaticamente es mayor y menor
			menor=dato;
			mayor=dato;
		}
		else {
			//Los demas ya se comparan con los anteriores valores introducidos
			if (dato>mayor){
				mayor=dato;
			}
			if (dato<menor){
				menor=dato;
			}
		}
	}
	//Salida
	printf("La cantidad de numeros pares es: %d\n",pares);
	printf("El numero mayor es: %d\n",mayor);
	printf("El numero menor es: %d\n",menor);
	return 0;	
}
