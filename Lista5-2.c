#include <stdio.h>
main ()

{
	int i,x[10];
	
	for (i = 1; i <= 10; i++)
	{
		printf("Preencha o vetor, colocando os números de 10 a 10, ateh chegar a 100: ");
		scanf("%i", &x[i]);
	}
	
	for (i = 1; i <= 10; i++)
		printf("%i\n", x[i]);
		system("pause");
}
