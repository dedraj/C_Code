/* Write a program to print sum of the following series:

      1 3 5 7 9 11......

      up to n numbers taking only an integer n as input.

*/

#include<stdio.h>
int main()
{
int i,n,sum=0;

printf("Give number Upto which sum has to find:\n");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
if(i%2!=0)
sum=sum+i;
}
printf("sum is=%d",sum);
}
