#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printarray(int array[], int size);
int main()
{
    srand(time(0));
    int size;
    printf("Enter array size:\n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    printarray(arr, size);

    for (int i = 0; i < size; i++)
    {
        int countrepeats = 0;
        int isSeen = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] == arr[i])
            {
                isSeen = 1;
            }
        }
        if (!isSeen)
        {
            for (int k = i; k < size; k++)
            {
                if (arr[k] == arr[i])
                {
                    countrepeats++;
                }
            }
            printf("count for %d = %d\n",arr[i],countrepeats);
        }
    }
}

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}