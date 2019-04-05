/*Write the following two sorting functions

   

      1. Fastest sorting algorithm that you know

      2. Second fastest sorting algorithm that you know

 

     compare them by sorting 100000 randomly generated integers in range 1 to 100 & also print the time taken by both of them.
*/




//Insertion sort
#include <stdio.h>
#define MAX 100000
void insertion_sort(int *);
int main()
{
int a[MAX],i;
printf("Enter elements to be sorted:");
for(i=0;i<MAX;i++)
{
scanf("%d", &a[i]);
}

insertion_sort(a);

printf("sorted elements are:\n");
for(i=0;i<MAX;i++)
{
 printf("%d",a[i]);
}
printf("complexity of insertion sort is=%d",MAX-1);

}

void insertion_sort(int * x)
{
int temp, i, j;
for (i=1;i<MAX;i++)
{
temp=x[i];
j=i-1;
while(temp<x[j] && j>=0)
{
x[j+1]=x[j];
j=j-1;
}
x[j+1]=temp;
}

}

