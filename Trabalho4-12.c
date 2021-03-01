# include <stdio.h>
# include <conio.h>

 int main()
   {
       int i;

       for(i=1000; i<=1999; i++)
         {
            if(i%11==5)
               {
                   printf("%3d\n", i);
               }
         }
      getch();
   return 0;
   }
