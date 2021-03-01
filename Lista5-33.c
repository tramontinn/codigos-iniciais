#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main()
{
    SetConsoleOutputCP(65001);
    system("cls");

    int W[15];
    int WReverse[15];
    int smallestElement;
    int equalElements = 0;
    int index;
    int length = sizeof(W)/sizeof(W[0]);

    //Gera a lista de valores e obtém o menor valor.
    for (int i = 0; i < length; i++)
	{
        printf("Digite o valor do %dº dígito: ", i+1);
        scanf("%d", &W[i]);

        if (i == 0){
            smallestElement = W[i];
        }
        else{
            if (W[i] < smallestElement){
                smallestElement = W[i];
            }
        }
    }

    //Gera lista ordem contrária.
    for (int i = 0; i < length; i++){
        WReverse[i] = W[length-(i+1)];
    }

    //Soma o número de elementos iguais ao menor valor.
    for (int i = 0; i < length; i++){
        if (W[i] == smallestElement){
            equalElements += 1;
        }
    }

    //Cria uma lista conforme o número de elementos iguais para obter o índice do mesmo.
    int listOfIndex[equalElements];
    int NumberOfIndex = sizeof(listOfIndex)/sizeof(listOfIndex[0]);

    //Insere o índices na lista
    int cont = 0;
    for (int i = 0; i < length; i++){
        if (W[i] == smallestElement){
            listOfIndex[cont] = i;
            cont ++;
        }
    }

    //Printa os valores na ordem contrária a da leitura.
    for (int i = 0; i < length; i++){
        if (i == 0){
            printf("\nOs valores digitados em ordem contrária são:\n%d", WReverse[i]);
        }
        else{
            printf(", %d", WReverse[i]);
        }
        if (i == length - 1){
            printf("\n");
        }
    }

    //Printa o menor valor digitado.
    printf("\nO menor valor digitado é: %d, ocorrendo %d vezes na(s) posição(ções) ", smallestElement, equalElements);

    //Printa os valores dos índices.
    for (int i = 0; i < NumberOfIndex; i++){
        if (i == 0){
            printf("%d", listOfIndex[i]);
        }
        else{
            printf(", %d", listOfIndex[i]);
        }
        if (i == NumberOfIndex - 1){
            printf(".\n");
        }
    }


    printf("\n%d\n", smallestElement);

    system("pause");
}
