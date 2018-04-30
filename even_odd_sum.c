/*
*C program to find even no from 1 to n, odd numbers from 1 to n and respective sums
*/

#include<stdio.h>
int main()
{

int i,n;
scanf("%d",&n);
int s_even=0,s_odd=0;

for(i=1;i<=n;i++)
{

if((i%2)==0)
s_even+=i;
else
s_odd+=i;


}

printf("Even numbers :");
for(i=1;i<=n;i++)
{
if((i%2)==0)
printf("%d	",i);

}
printf("\n");

printf("Odd numbers :");
for(i=1;i<=n;i++)
{
if((i%2)==1)
printf("%d      ",i);

}
printf("\n");





printf("Sum of even numbers :%d\n",s_even);
printf("Sum of odd numbers :%d\n",s_odd);





return 0;
}
