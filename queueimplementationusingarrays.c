//********************************************QUEUE IMPLEMENTATION USING ARRAYS************************************************************
//***************************************************FIRST IN FIRST OUT******************************************************************
#include<stdio.h>
#define n 5
//**********************************************************************************************************************************
int queue[n];
int front=-1;
int rear=-1;
//***********************************************************************************************************************************
void enqueue(){
    int x;
    printf("enter the element to push in queue");
    scanf("%d",&x);
    if(rear==n-1){
        printf("queue overflowed\n");
        }
    else if(rear==-1 && front ==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else
    {rear++;
    queue[rear]=x;}
}
//************************************************************************************************************************************
void dequeue(){
if(rear==-1 && front==-1){
    printf("queue underflowed");}
else if(front == rear)
    {front=rear=-1;}
else
    {front++;}

}
//************************************************************************************************************************************
void display(){
int i;
if(front==-1 && rear==-1)
    {
    printf("empty queue");
    }
else
    {for(i=front;i<=rear;i++)
         {printf("%d\n",queue[i]);}

    }
}
//*************************************************************************************************************************************
void peek(){
    if(front==-1 && rear==-1)
    {
    printf("empty queue");
    }
    else
        {printf("%d\n",queue[front]);

        }
}
//***************************************************************************************************************************************
void main(){
    int ch;

    do{
        printf("enter choice");
    scanf("%d",&ch);
        switch(ch){
        case 1:
            {enqueue();
            break;}
        case 2:
           {dequeue();
            break;}
        case 3:
           {peek();
            break;}
        case 4:
            {display();
            break;}
        default :
            {printf("invalid choice \n");
            }
        }
    }while(ch!=0);
}
//***********************************************************************************************************************************************