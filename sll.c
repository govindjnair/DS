#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*HEADER,*temp,*ptr;

struct node *newnode()                      //function returning a structure pointer
{
    struct node *nptr=malloc(sizeof(struct node));
    return(nptr);

}
void insertfront()
{
    int new;
    temp=newnode();
    printf("enter the data: ");
    scanf("%d",&temp->data);
    temp->next=HEADER->next;
    HEADER->next=temp;



}
void insertend()
{
    int new;
    temp=newnode();
    ptr=HEADER;
    printf("enter the data: ");
    scanf("%d",&temp->data);
    while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
    temp->next=ptr->next;
    ptr->next=temp ;

     
}
void display()
{
    ptr=HEADER->next;               //skipping the first  empty node from displaying
    printf("\n\tHEADER->");
    while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    printf("NULL\n");
}

void main()
{
    int choice;
    HEADER=malloc(sizeof(struct node));
    HEADER->data=0;
    HEADER->next=NULL;
    printf("\n\tSINGLE LINKED LIST\n");
    do{
        printf("\n1.insertion at the begining\n2.insert at the end\n3.display\n4.exit\n\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:insertfront();
                    break;
            case 2:insertend();
                    break;
            case 3:display();
                    break;
            
            
        }
    



    }while(choice!=4);

}
    
