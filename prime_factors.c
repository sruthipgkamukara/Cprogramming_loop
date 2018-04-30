//find prime factors of a number
#include<stdio.h>
int isPrime(int num)
{
int i,nf=0;
for(i=1;i<=num;i++)
{
if(num%i == 0)
++nf;
}
if(nf==2)
return 1;

return 0;

}
int isFactor(int n,int i)
{
if(n%i==0)
return 1;

return 0;
}
int main()
{
int n;
scanf("%d",&n);
printf("Prime factors of %d are:\n",n);
for(int i=2;i<n;i++)
{
if(isPrime(i) && isFactor(n,i))
printf("%d	",i);


}
printf("\n");
return 0;
}
