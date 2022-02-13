#include<iostream>

//creating new node


int main()
{   
    //linked list 
    struct node
        {
            int data;
            struct node *next;
        };
    
    struct node *newnode, *head, *temp;
    head=0;
    int choice =1;

    while(choice)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        newnode -> next=0;
        printf("enter the data");
        scanf("%d",& newnode->data);
       
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("enter the choice (1/0)");
        scanf("%d",&choice);
    }

    printf("printing the linked list");
    temp=head;
    while(temp)
    {
        printf("\n %d", temp->data);
        temp=temp->next;
    }


return 0;
}