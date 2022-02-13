#include<iostream>

int main()
{
    char *fruits[]={"apple","orange","banana","grapes"};
    for (int i = 0; i < 4; i++)
    {
        printf("\n%s",*(fruits+i));
    }
    
     for (int i = 0; i < 4; i++)
    {
        printf("\n%c",*(*(fruits+i)+1));

        
    }
    
    return(0);
}