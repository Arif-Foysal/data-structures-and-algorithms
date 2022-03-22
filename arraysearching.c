#include<stdio.h>
int binarysearch(int array[], int low, int high, int key);
int linearsearch(int array[],int n,int key);
void printarray(int array[], int size);
int main(){
    int s;
    int sv;
    printf("Enter size of your array:\n");
    scanf("%d",&s);
    int numbers[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Enter your search value:\n");
    scanf("%d",&sv);    
    printarray(numbers,s);
    printf("linear search result: %d [result will be -1 if not found]", linearsearch(numbers,s,sv));
    printf("binary search result: %d",binarysearch(numbers,0,1,sv));
    return 0;
}
int binarysearch(int array[], int low, int high, int key){
    int mid;
   while (low<=high)
   {
       mid=(low+high)/2;
       if (key==array[mid])
       {
           return mid;
       }
       else if (key<array[mid])
       {
           high=mid-1;
       }
       else if (key>array[mid])
       {
           low=mid+1;
       }
   }
   return -1;
}
int linearsearch(int array[],int n,int key){
    int i=0;
    while (i<n)
    {
        if (array[i]==key)
        {
            return i;
        }
        i++; 
    }
    return -1;
}

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}