#include <cstdio>
#include <cstdlib>

int main()
{
    int i, n;
    time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 10 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 10);
   }
   return 0
}