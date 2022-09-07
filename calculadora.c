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

void suma() {
    float n1=0, n2=0, suma=0;
    printf("Ingrese el primer numero:\n");
    scanf("%f",&n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f",&n1);
    suma = n1 + n2;
    printf("El resultado de la suma es: %f",suma);
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

void mult() {
    float n1=0, n2=0, res=0;
    printf("Teclee dos números: /n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    res=n1*n2;
    printf("El resultado de la multiplicacion es: %f", res);
}

void div(int a, int b) {
    float n1, n2, division;
    n1 = 0;
    n2 = 0;
    division = 0;
    printf("Ingresa el numero:\n");
    scanf("%f",&n1);
    printf("Ingresa el otro numero:\n");
    scanf("%f",&n2);
    division = n1 / n2;
    printf("El resultado es: %f",division);
}

void creditos()
{
}
