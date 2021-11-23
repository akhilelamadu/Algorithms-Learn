#include<iostream>

void printboard(char board[][3])
{
int i,j =0;
    for ( i = 0; i <3; i++)
    {
       for (j = 0; j < 3; j++)
       {
           printf("|%c",board[i][j]);
       }
       printf("|\n");
    }
}

int status(char board[][3])
{
    
}









int main()
{
    printf("This is a sample program to play  tick-tack-toe \n");
    char first[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    printboard(first);
    printf("player one wil be playing X \nPlayer two will be playing O\n");
    
    int over= 0;
    int play=1;//asking not yet done

    while(play)
    {   
        int r,c;

        printf("Player one please enter [][]");
        scanf("%d",&r,&c);
        first[--r][--c]='X';

        over =status(first);
        if(over==1)
        {
            printf("Player 1 won");
            break;
        }
        
        printf("Player one please enter [][]");
        scanf("%d",&r,&c);
        first[--r][--c]='X';


        over =status(first);
        if(over==1)
        {
            printf("Player 2 won");
            break;
        }

        
    }


    return 0;
    
}