#include <stdio.h>
int opt1 = 0;
int opt2 = 0;

int main()
{
    printf("Bienvenido al supermercado:\n");
    printf("OPcion 0 para el menu de bebidas\n");
    printf("OPcion 1 para el menu de comidas\n");
    printf("OPcion 2 para el menu de postres\n");   
    
    switch (opt1)
    {
        case 0:
            printf("Usted elegio la opcion 0, vera nuestro menu de bebidas elija una:\n");
            printf("OPcion 0 para coca cola cero \n");
            printf("OPcion 1 para coca cola normal \n");
            printf("OPcion 2 para bebida de pina \n");
            switch (opt2)
            {
            case 0:
                printf("Usted eleigio una coca cola 0");
                break;
            
            default:
                break;
            }
        break;
        case 1:
            /*Dispersar, correr a los intrusos */
        break;
        case 2:
            /*Dispersar, correr a los intrusos */
        break;        
        default:
            break;
    }
    return 0;
}


