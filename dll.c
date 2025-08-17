
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
     struct node*prev;
    
};

int main() {
    struct node*head,*tail,*temp,*newnode;
    head=0;
    int count =1;
    int i=1;
    while(count){
        newnode =(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->prev=0;
        printf("enter the data:\n");
        scanf("%d",&newnode->data);
        if(head==0){
            head=tail=newnode;
        }else{
               newnode->prev = tail;    
tail->next = newnode;
tail = newnode;

        }

        printf("do u want to continue(0/1)\n");
        scanf("%d",&count);
    }
    printf("linked list\n");
   
   temp = head;   
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
     printf("\nlinked list\n");
     
     temp = tail;   
     
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\ninsert at start\n");
    newnode =(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->prev=0;
        printf("enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->next=head;
        if (head != NULL) {         
    head->prev = newnode;
}
      
        head=newnode;
    temp = head;   
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
 printf("\ninsert at end\n");
  newnode =(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        newnode->prev=0;
        printf("enter the data:\n");
        scanf("%d",&newnode->data);
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
          temp = head;   
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
     printf("\ninsert at middle\n");
     temp=head;
     int pos;
     printf("enter pos:");
     scanf("%d",&pos);
     while(i<pos-1){
         temp=temp->next;
         i++;
     }
     newnode =(struct node*)malloc(sizeof(struct node));
        printf("enter the data:\n");
        scanf("%d",&newnode->data);
         newnode->prev=temp;
        newnode->next=temp->next;
if (temp->next != NULL) {     
    temp->next->prev = newnode;
}        temp->next=newnode;
          temp = head;   
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
