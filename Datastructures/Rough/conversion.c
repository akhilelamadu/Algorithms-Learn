#include <iostream>
#include <cctype>
#include <cstring>

int main()
{   
    printf("enter the string");
    char str[20];
    gets(str);
    int n=strlen(str);

    for (int i = 0; i < n; i++)
    {
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
            {
                putchar(tolower(str[i]));
            }
            else
            {
                putchar(toupper(str[i]));
            }
        }
    }
    
    

return 0;
}