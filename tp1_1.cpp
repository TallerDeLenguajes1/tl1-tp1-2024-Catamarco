#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf( "\nHola mundo.\n" );

    
    int num, tama;
    int * punt; 
    num=1; 
    punt= &num;

    printf("contenido del puntero: %d\n", *punt); /*e-1)*/
    printf("Direccion de memoria almacenada por el puntero: %d\n", punt);/*e-2*/
    printf("Direccion de memoria de la variable: %d\n", &num);/*e-3*/
    printf("Direccion de memoria del  puntero: %d\n", &punt); /*e-4*/
    tama= sizeof(num);
    printf("tamaño de la variable: %d bytes",tama); /*e-5*/
    
    return 0;
}