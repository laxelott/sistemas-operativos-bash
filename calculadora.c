#include <stdio.h>
#include <math.h>

int main()
{
    int continuar = 1;
    int opcion;
    char *opciones[5];
    opciones[0] = "Suma";
    opciones[1] = "Resta";
    opciones[2] = "Multiplicación";
    opciones[3] = "División";
    opciones[4] = "Salir";    

    while (continuar)
    {
        printf("--- Calculadora C: ---");
        for (int i=0; i<5; ++i) {
            print("%d. %s", i+1, opciones[i]);
        }
        print("Escoge la opción:");

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        case 5:
            creditos();
            break;
        case 6:
            continuar = 0;
            break;
        }
    }

    return 0;
}

void suma()
{
}

void resta() {
    float a=0,b=0,res=0;
    printf("Digite el primer numero\n");
    scanf("%f",&a);
    printf("Digite el segundo numero\n");
    scanf("%f",&b);
    res=a-b;
    printf("El resultado es\n %f",res);
 
}

void mult()
{
}

void div()
{
}

void creditos()
{
}