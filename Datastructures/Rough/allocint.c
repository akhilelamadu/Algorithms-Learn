#include<iostream>
#include <cstdlib>
int main()
{
    int *buffer;
    buffer=(int *) malloc(20* sizeof(int));
    if(buffer== NULL)
    {
        puts("failed");
        exit(1);
    }
    else
    puts("buffer is allocated");
    for(int i=0;i<20;i++)
    {
        *(buffer+i)=i;
        printf("\n %dth position is %d",i+1,*(buffer+i));
    }
    free(buffer);
    printf("\n%p",buffer);
    puts("\nbuffer is freed");
}