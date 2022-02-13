#include <iostream>
#include<cstdio>

int main()
{
    int arr[]={1,2,3,4};
    int *ptr;
    ptr=arr;
    for(int i=0;i<4;i++)
    printf("\nThe %d memory location is %p and vaule is %d",i,(ptr+i),*(ptr+i));

    return(0);
}