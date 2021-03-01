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

    //Gera a lista de valores e obt�m o menor valor.
    for (int i = 0; i < length; i++)
	{
        printf("Digite o valor do %d� d�gito: ", i+1);
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

    //Gera lista ordem contr�ria.
    for (int i = 0; i < length; i++){
        WReverse[i] = W[length-(i+1)];
    }

    //Soma o n�mero de elementos iguais ao menor valor.
    for (int i = 0; i < length; i++){
        if (W[i] == smallestElement){
            equalElements += 1;
        }
    }

    //Cria uma lista conforme o n�mero de elementos iguais para obter o �ndice do mesmo.
    int listOfIndex[equalElements];
    int NumberOfIndex = sizeof(listOfIndex)/sizeof(listOfIndex[0]);

    //Insere o �ndices na lista
    int cont = 0;
    for (int i = 0; i < length; i++){
        if (W[i] == smallestElement){
            listOfIndex[cont] = i;
            cont ++;
        }
    }

    //Printa os valores na ordem contr�ria a da leitura.
    for (int i = 0; i < length; i++){
        if (i == 0){
            printf("\nOs valores digitados em ordem contr�ria s�o:\n%d", WReverse[i]);
        }
        else{
            printf(", %d", WReverse[i]);
        }
        if (i == length - 1){
            printf("\n");
        }
    }

    //Printa o menor valor digitado.
    printf("\nO menor valor digitado �: %d, ocorrendo %d vezes na(s) posi��o(��es) ", smallestElement, equalElements);

    //Printa os valores dos �ndices.
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
