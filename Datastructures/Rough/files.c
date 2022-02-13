#include<iostream>

int main()
{
    const char filename[]="sample.txt";
    FILE *fh;
    fh = fopen(filename,"r");
    if(fh==NULL)
    {
        printf("File is not opened");
        exit(1);
    }

    int ch;
    char *buffer;
    buffer=(char*) malloc(sizeof(char)*10);
    while(1)
    {
        ch=fgetc(fh);
        if(ch==EOF)
        break;
        putchar(ch);
    }

    rewind(fh);
    fgets(buffer,40,fh);
    printf("%s",buffer);

    fclose(fh);
    free(buffer);
    return 0;

}