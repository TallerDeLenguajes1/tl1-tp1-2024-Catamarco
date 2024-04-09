#include <stdio.h>

int cuadrado(int num);
void cuadrado0(int *punt);
void direcYcont (int num3);
void invertir(int *a, int *b);
void orden (int *a, int *b);
int main ()
{
    int num, num2, num3, numcuad, *punt, a, b;
    punt= &num2;
    
     
 /*f*/   
        /*a)*/  
            printf("\nIngrese un número:\n");
            scanf("%d", &num);

            numcuad= cuadrado(num);

            printf("Cuadrado del numero ingresado: %d\n", numcuad);
        
        /*b)*/
            printf("Ingrese otro número:\n");
            scanf("%d", &num2);
            
            cuadrado0(&num2);

            printf("Cuadrado del numero ingresado: %d\n", num2);
        
        /*c)*/
            printf("Ingrese otro número:\n");
            scanf("%d", &num3);
            direcYcont(num3);
        
        /*d)*/
            printf("Ingrese un número a:\n");
            scanf("%d", &a);
            printf("Ingrese un número b:\n");
            scanf("%d", &b);
            invertir(&a, &b);
            printf("Valores invertidos:\n a= %d\n b= %d\n",a, b);

        /*e)*/
            orden(&a, &b);
            printf("Valores ordenados:\n a= %d\n b= %d",a,b);
        
 return 0 ;
}
/*a)*/
int cuadrado(int num)
{
 int numcuad= num*num;
 return numcuad;
}

/*b)*/
void cuadrado0(int *punt)
{
 *punt = (*punt)*(*punt);
}

/*c)*/
void direcYcont (int num3)
{
printf("direccion de memoria:%d\n contenido:%d\n",&num3, num3);
}

/*d)*/
void invertir(int *a, int *b)
{
 int aux;
  aux= *a;
  *a= *b;
  *b=aux;

}
/*e)*/
void orden (int *a, int *b)
{
    int aux;
    if ( *a > *b )
    {
     aux = *a;
     *a = *b;
     *b= aux;
    }
    
}