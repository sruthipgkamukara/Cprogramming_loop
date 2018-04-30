//gcd of two numbers
#include<stdio.h>
int main()
{

int a,b;
int hcf=1;
scanf("%d %d",&a,&b);
int sm=a<b?a:b;

for(int i=1;i<=sm;i++)
{

if((a%i==0) && (b%i==0))
hcf=i;
}
printf("HCF :%d\n",hcf);
return 0;









}
