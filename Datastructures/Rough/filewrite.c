#include <iostream>

int main()
{
    FILE *fh;
    fh=fopen("sample_out.txt","w");
    if(fh==NULL)
    {
        printf("unable to open file");
        exit(1);
    }
     
    fputs("This file contains all the alphabets of English letter\n",fh);
    int alpha;
    for(alpha='a';alpha<='z';alpha++)
    {
        fputc(alpha,fh);
        fputc(' ',fh);
    }

    
    
    fclose(fh);
    
    return(0);
}