#include <stdio.h>

int opt1 = 1;
int opt2 = 2;

int main()
{
    printf("Bienvenido al supermercado:\n");
    printf("OPcion 0 para el menu de bebidas\n");
    printf("OPcion 1 para el menu de comidas\n");
    printf("OPcion 2 para el menu de postres\n");
    //Este programam genera menus según lo que el usuario elija
    if(opt1 == 0)
    {
        printf("Usted elegio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("OPcion 0 para coca cola cero \n");
        printf("OPcion 1 para coca cola normal \n");
        printf("OPcion 2 para bebida de pina \n");
        if (opt2 == 0)
            printf("usted eligio una coca cola cero");
        else if (opt2 == 1)
            printf("Usted eligio una coca cola normal");
        else if (opt2 == 2)
            printf("Usted eligio una bebida de pina");
        else
            printf("Opción invalida");
    }
    else if(opt1 == 1)
    {
        printf("Usted ha elegio la opcion 1, vera nuestro menu de comidas elija una:\n");
        printf("Opcion 0 para Hamburguesa\n");
        printf("Opcion 1 para Hot Dog\n");
        printf("Opcion 2 para Chilaquiles\n");
        if (opt2 == 0)
            printf("Usted elegio una hamburguesa\n");
        else if (opt2 == 1)
            printf("Usted eligio Hot Dog");
        else if (opt2 == 2)
            printf("Usted eligio chilaquiles");
        else
            printf("Opción invalida");


    }
    else if(opt1 == 2)
    {
        printf("Usted elegio el menu de postres\n");
        printf("Opcion 0 para Pastel\n");
        printf("Opcion 1 para Brownie\n");
        printf("Opcion 2 para Helado\n");

        if (opt2 == 0)
            printf("Usted eligio Pastel\n");
        else if (opt2 == 1)
            printf("Usted eligio Brownie\n");
        else if (opt2 == 2)
            printf("Usted eligio Helado\n");
        else
            printf("Opcion invalida\n");

    }
    else
        printf("opcion invalida");
        
    return 0;
}