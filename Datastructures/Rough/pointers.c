#include <iostream>

void half(int *ptri)
    {
        *ptri= *ptri/2;
    }

void strchange(char *ptrs)
{
    *(ptrs+1)='A';
}
int main()
{
   int a=10;
   half(&a);
   printf("\n %d\n",a);

   char str[]={"BOT"};

   puts(str);
   strchange(str);
   puts(str);

   return(0);
}