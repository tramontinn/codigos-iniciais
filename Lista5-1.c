#include <stdio.h>
main ()
{
	int i,x[10];
	
	for (i=1; i<=10; i++)
	{
		printf("Informe um numero qualquer: ");

	if (i != 30)
	scanf("%i", &x[i]);		
	else
	printf("Numero invalido!");	
	}
	
	for (i=1; i<=10; i++)
	printf ("%i\n", x[i]);

	system("pause");
}
