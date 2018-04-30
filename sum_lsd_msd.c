//product of digits

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int m=n,d,sum=n%10;
while(m!=0)
{
d=m%10;

m/=10;
}
sum+=d;
printf("Sum of LSD AND MSD  is %d\n",sum);
return 0;
}
