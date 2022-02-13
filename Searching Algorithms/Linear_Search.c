#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{  
   int i;
   /* Intializes random number generator */
   time_t t;
   struct tm *tm;
   tm = localtime (&t);
   srand((unsigned) time_t(&tm->tm_sec));
   
   /* Asking user for the length */
   int n;
   printf("Enter the length of the list");
   scanf("%d", &n);
   int A[n];

   /* Print and store n random numbers from 0 to 10 */
   printf("The list is :");
   for(i = 0 ; i < n ; i++ )
   {
      A[i]=rand()% 10;
      printf("%d ", A[i] );
   }

   /* Searching */
   int d, flag=0;
   printf("\nEnter the search  digit\n");
   scanf("%d",&d);

   for(i=0;i<n;i++)
   {
      if(d==A[i])
      {
         flag =1;
         break;
      }
   }

   if(flag==0)
   {
      printf("No search found\n");
   }
   else
   {
      printf("The digit is located at %d position",++i);
   }


   return 0;
}