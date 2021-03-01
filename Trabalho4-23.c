#include <stdio.h>

int main()
{

 int x,n, maior=0, menor=9999;
for (x=1;x<=15;x++){

printf ("informe um numero \n");

scanf ("%d", &n);

if (n > maior){

maior = n;}

}

printf ("o maior numero e %d\n", maior);

  system("PAUSE");
    return 0;
}
