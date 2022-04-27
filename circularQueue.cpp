// use only positive integers
#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
int enque(int val);
int deque();
int peek();
int menu();
int isFull();
int isEmpty();
void displayQueue();
int main()
{
    int choice = menu();
    while (choice != 0)
    {
        if (choice == 1)
        {
            int a;
            printf("Enter enque value : ");
            scanf("%d", &a);
            enque(a);
        }
        else if (choice == 2)
        {
            int d = deque();
            printf("deque successful: %d\n", d);
        }
        else if (choice == 3)
        {
            printf("%d\n", peek());
        }
        else if (choice == 4)
        {
            displayQueue();
        }
        choice = menu();
    }

    return 0;
}
int menu()
{
    int ch;
    printf("1. Enque\n");
    printf("2. Deque\n");
    printf("3. Peek\n");
    printf("4. View full data\n");
    printf("0. Exit\n");
    printf("Enter your choice:\n=>");
    scanf("%d", &ch);
    return ch;
}
int isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull()
{
    if ((rear + 1) % SIZE == front)
    {
        // full
        return 1;
        // 1=True
    }
    else
        return 0;
    // not full
};
int enque(int data)
{
    if (isFull())
    {
        printf("Queue overflow!\n");
    }
    else if (isEmpty())
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = data;
    }
    return data;
}
int deque()
{
    if (isEmpty)
    {
        printf("Can not dequeue. Queue is empty!\n");
        return -1;
    }
    else if (front == rear)
    {
        int temp = queue[front];
        front = rear = -1;
        return temp;
    }
    else
    {
        int temp = queue[front];
        front = (front + 1) % SIZE;
        return temp;
    }
}
int peek()
{
    if (rear == -1)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    else
    {
        return queue[front];
    }
}
void displayQueue()
{
    if (rear == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        int i = front;
        while (i != rear+1)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
    printf("front= %d\nrear= %d\n", front, rear);
    // whole array(experimental)
    int i = 0;
    printf("Whole array-\n");

    while (i != SIZE)
    {
        printf("%d ", queue[i]);
        i++;
    }
    printf("\n");
}