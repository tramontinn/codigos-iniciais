#include<stdio.h>
#include<stdlib.h>
main()
{
	int M[7][9], L, C;
	
	for (L=0; L<9; L++)
	{
		for (C=0; C<7; C++)
		{
			printf("Digite um numero %d %d: ",L,C);
			scanf("%d", &M[L][C]);
		}
	}
	printf("Matriz impressa: \n");
	for (L=0; L<7; L++)
	{
		for (C=0; C<9; C++);
	}
	printf("%d", M[L][C]);
	{
		printf("\n");
	}
	system ("pause");
}
