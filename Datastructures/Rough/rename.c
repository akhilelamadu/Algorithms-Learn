#include<cstdio>

int main()
{
    int r;
    r=rename("integer.dat","new_integer.dat");
    if(r==0)
        printf("renamed succesfully");
    else
    printf("task failed");

    return(0);
}