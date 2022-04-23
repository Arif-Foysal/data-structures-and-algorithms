#include <stdio.h>
void printarray(int array[], int size);
void insertionSort(int array[], int size);
void selectionsort(int array[], int size);

void main()
{
    printf("Size of the array?\n");
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Your array:\n");
    printarray(numbers,n);
    selectionsort(numbers,n);
    printf("After selectionsort:\n");
    printarray(numbers,n);

}
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
// Insertion sort
void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (current < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}
// selection sort
void selectionsort(int array[], int n){
int min_index,i,j;
for ( i = 0; i < n-1; i++)
{
    min_index=i;
    for ( j = i+1; j < n; j++)
    {
        if (array[min_index]>array[j])
        {
            min_index=j;
        }
        
    }
    int temp=array[i];
    array[i]=array[min_index];
    array[min_index]=temp;
}

}
