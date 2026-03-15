#include <stdio.h>

int main() {

    int option;
    float amount;
    float result;

    printf("CONVERSOR DE MONEDAS\n");
    printf("---------------------\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &option);

    printf("Ingrese la cantidad: ");
    scanf("%f", &amount);

    if(option == 1){
        result = amount * 0.13;
        printf("Resultado: %.2f Quetzales = %.2f Dolares\n", amount, result);
    }

    else if(option == 2){
        result = amount * 0.12;
        printf("Resultado: %.2f Quetzales = %.2f Euros\n", amount, result);
    }

    else if(option == 3){
        result = amount * 7.8;
        printf("Resultado: %.2f Dolares = %.2f Quetzales\n", amount, result);
    }

    else if(option == 4){
        result = amount * 8.4;
        printf("Resultado: %.2f Euros = %.2f Quetzales\n", amount, result);
    }

    else{
        printf("Opcion no valida\n");
    }

    return 0;
}