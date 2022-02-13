#include<iostream>
#include<cstdio>

int main()
{
    
    FILE *fh;
    fh= fopen("integer.dat","w");
    int x=0;
    for(int i=0;i<=10;i++)
    {
    
        fwrite(&x,sizeof(int),1,fh);
        x=x+5;
    }
    
    //REading the dat file
    int d;
    for(int k=0;k<7;k++)
    {
    fread(&d,sizeof(int),1,fh);
    printf("\n%d",d);
    }
    /*int rd[10];
    fread(&rd,sizeof(int),7,fh);

    for(int k=0;k<7;k++)
    {
        std::cout<<"\n"<<rd[k];
    }
    */

        fclose(fh);
        return 0;
}