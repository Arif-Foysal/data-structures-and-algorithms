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
    printarray(numbers, n);
    insertionSort(numbers, n);
    printf("After insertion sorting:\n");
    printarray(numbers, n);
    printf("Done! doing selection sort--\n");
    selectionsort(numbers, n);
    printarray(numbers, n);
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
void selectionsort(int array[], int size){
    int min_index, i,j;
    for ( i = 0; i < size-1; i++)
    {
        min_index=i;
        j=i+1;
        while (array[j]<array[min_index])
        {
            min_index=j;
            int temp=array[j];
            array[j]=array[min_index];
            array[min_index]=temp;
        }
     
    }
}
