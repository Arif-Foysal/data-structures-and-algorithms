#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;
int enque(int val);
int deque();
int peek();
int menu();
void displayQueue();
int main(){
    int choice = menu();
    while(choice!=0){
        if (choice==1)
    {
        int a;
        printf("Enter enque value : ");
        scanf("%d",&a);
        enque(a);
    }
    else if (choice==2)
    {
       int d= deque();
        printf("deque successful: %d\n",d);
    }
    else if (choice==3)
    {
        printf("%d\n",peek());
    }
    else if (choice ==4)
    {
        /* code */
        displayQueue();
    }
    choice=menu();
    }
    
    return 0;
}
int menu(){
    int ch;
    printf("1. Enque\n");
    printf("2. Deque\n");
    printf("3. Peek\n");
    printf("4. View full data\n");
    printf("0. Exit\n");
    printf("Enter your choice:\n=>");
    scanf("%d",&ch);
    return ch;
}
int enque(int data){
    if (rear>SIZE-1)
    {
        printf("Queue overflow!\n");
    }
    else if (front==-1&&rear==-1)
    {
        front++;
        rear++;
        queue[front]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }  
    return data; 
}
int deque(){
    if (front==-1)
    {
        printf("Queue empty!\n");
        return -1;
    }
   
    
    else if (front<=rear)
    {
        front++;
    return queue[front-1];
    }
    
     else
    {
        front=rear=-1;
        printf("Empty!\n");
        return -1;
    }
    
}
int peek(){
    if (rear==-1)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    else{
        return queue[front];
    }

}
void displayQueue(){
    if (rear==-1)
    {
        printf("Queue is empty!\n");
        
    }
    else{
        for (int i = front; i < rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    
}