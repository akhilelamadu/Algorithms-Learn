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

int main()
{
    printf("This is a sample program to play  tick-tack-toe \n");
    char first[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    char A[3][3];
    printboard(first);
    printf("player one wil be playing X \nPlayer two will be playing O\n");
    
    int over= 0;
    while(1)
    {   
        int cell;
        printf("Player one please enter number from [1 to 9]");
        scanf("%d",&cell);
        //over =p1play();
        if(over==1)
        {
            printf("Player 1 won");
            break;
        }
        
        //over =p2play();
        if(over==1)
        {
            printf("Player 2 won");
            break;
        }

        printf("Player two please enter number from [1 to 9]");
    }


    return 0;
    
}