#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
    char *arr[5];

    char *buffer;
    buffer=  (char *) malloc(sizeof(char)*10);   
    if(buffer==NULL)
    {
        printf("\n Unable to allocate exiting");
        exit(1);
    }

    

    for(int i=0;i<5;i++)
    {
        printf("\n Enter %d fruit",i+1);
        scanf("%s",buffer);
        *(arr+i)=*buffer;
    }

    for(int j=0;j<5;j++)
    {
        printf("\nprinting%s",*(arr+j));
    }

    free(buffer);
    return(0);

}