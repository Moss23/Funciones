#include <stdio.h>

int x, y;
unsigned long long factorial(int);
void value();
void salir();
void valid();

int main(void)
{
    do{
        printf("\n\t FUNCI%cN FACTORIAL", 224);
        value();
        valid();
	    /* en este caso se llama a la función y se imprime directamente*/
	    printf("\n\n El factorial de %d es: %llu", x, factorial(x));
        salir();
    }while(y != 0);
    return 0;
}

unsigned long long factorial(x)
{
	if (x == 0) /* caso base */
		return 1; /* como 0! = 1, regresa 1*/
	else
		return x * factorial (x - 1); /* llamada a esta misma función */
}

void value(){
    printf("\n\n Ingrese un valor para calcular su factorial: ");
    scanf("%d", &x);
    printf("\n Usted ingres%c el valor %d", 162, x);
}

void valid(){
    if(x < 0){
        printf("\n\n ERROR - Ingrese un n%cmero mayor o igual a cero", 163);
        value();
    }
}

void salir(){
    printf("\n\n Si desea salir, ingrese 0");    
    printf("\n Si desea calcular otro valor, ingrese cualquier n%cmero.", 163);
    printf("\n\n Ingrese su selecci%cn: ", 162);
    scanf("%d", &y);
}