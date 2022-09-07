int main()
{
    int continuar = 1;
    int opcion;

    while (continuar)
    {

        printf("--- Calculadora ---");
        printf("1. Suma");
        printf("2. Resta");
        printf("3. Multiplicación");
        printf("4. División");
        printf("5. Creditos");
        printf("6. Salir");
        print("Escoga la opción:");

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

void resta()
{
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