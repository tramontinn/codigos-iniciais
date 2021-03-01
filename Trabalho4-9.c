#include <stdio.h>

int main()
{

 int x,n, maior=0, menor=9999;
for (x=1;x<=50;x++){

printf ("informe um numero \n");

scanf ("%d", &n);

if (n > maior){

maior = n;}

if (n < menor){

menor = n;}

}

printf ("o maior numero e %d e o menor e %d\n", maior, menor);

  system("PAUSE");
    return 0;
}
