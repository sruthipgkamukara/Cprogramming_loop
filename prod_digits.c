//product of digits

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int m=n,d,prod=1;
while(m!=0)
{
d=m%10;
prod=prod*d;
m/=10;
}
printf("Product of digits is %d\n",prod);
return 0;
}
