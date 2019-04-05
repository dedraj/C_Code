/*Write the following two sorting functions

   

      1. Fastest sorting algorithm that you know

      2. Second fastest sorting algorithm that you know

 

     compare them by sorting 100000 randomly generated integers in range 1 to 100 & also print the time taken by both of them.
*/


#include <stdio.h>
void quicksort(int [],int,int);
int main()
{
int arr[50];
int size, i;
printf("Enter the number of elements to be sorted\n");
scanf("%d",&size); 

printf("Enter the elements to be sorted:\n");
for (i=0;i<size;i++)
{
  scanf("%d",&arr[i]);
} 

quicksort(arr,0,size-1);
printf("After applying quick sort\n");

for (i = 0;i<size;i++)
{
  printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

void quicksort(int arr[], int low, int high)
{
int pivot, i, j, temp;
if (low < high)
{
pivot = low;
i = low;
j = high;
while (i < j) 
{
 while(arr[i]<=arr[pivot] && i<=high)
{
i++;
}
while (arr[j] > arr[pivot] && j >= low)
{
j--;
}
if (i < j)
{
temp =arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}

temp =arr[j];
arr[j] =arr[pivot];
arr[pivot] = temp;
quicksort(arr, low, j - 1);
quicksort(arr, j + 1, high);
}
}













