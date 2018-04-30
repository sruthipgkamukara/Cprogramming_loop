//print all factors of a number
#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int i;
printf("Factors of %d are :\n",n);
for(i=1;i<=n;i++)
{

if(n%i==0)
printf("%d\n",i);

}










return 0;
}
