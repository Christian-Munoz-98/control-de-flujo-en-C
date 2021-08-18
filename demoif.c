#include <stdio.h>

int n = -1;

int main()
{
    if(n > 10 && n < 20)
    printf("El numero es mayor que diez, pero menor que 20");
    else if(n == 10)
    printf("El numero es diez");
    else if (n > 20)
    printf("el numero es mayor que veinte");
    else if(n < 10 && n >= 0)
    printf("El numero está en el rango de 0 a 9");
    else
    printf("Error no quiero numeros negativos");
    return 0;
}