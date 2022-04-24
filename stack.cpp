#include <stdio.h>
int push(int stack[], int val);
int pop(int stack[]);
int peek(int stack[]);
int menu();
void printStack(int stack[]);
int stackSize;
int top = -1;
int main()
{
    printf("Enter the size of your stack:\n");
    scanf("%d", &stackSize);
    int stack[stackSize];
    int choice = menu();
    while (choice)
    {
        if (choice == 1)
        {
            int pushVal;
            printf("Enter a value to push-\n");
            scanf("%d", &pushVal);
            push(stack, pushVal);
            printf("operation complete.\n");
        }
        else if (choice == 2)
        {
            int temp = pop(stack);
            printf("Popped-%d\n", temp);
        }
        else if (choice == 3)
        {
            printf("Last item-%d\n", peek(stack));
        }
        else if (choice == 4)
        {
            printStack(stack);
        }
        choice = menu();
    }

    return 0;
}
int menu()
{
    int choice;
    printf("select an operation below:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Print whole\n");
    printf("0. Exit\n");
    scanf("%d", &choice);
    return choice;
}
int push(int stack[], int val)
{
    if (top >= stackSize - 1)
    {
        printf("stack overflow!\n");
    }
    else
    {
        top++;
        stack[top] = val;
    }
    return stack[top];
}
int pop(int stack[])
{
    if (top < 0)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        top--;
    }
    return stack[top];
}

int peek(int stack[])
{
    if (top < 0)
    {
        printf("Empty stack!\n");
        return -1;
    }
    return stack[top];
}
void printStack(int stack[])
{
    if (top < 0)
    {
        printf("Empty stack.\n");
    }
    else if (top <= stackSize - 1)
    {
        int i = 0;
        while (i < top+1)
        {
            printf("%d ", stack[i]);
            i++;
        }
    }

    printf("\n");
}