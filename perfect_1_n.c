//find perfect numbers from 1 to n
#include<stdio.h>
int isPerfect(int num)
{

int i,sum=0;
for(i=1;i<num;i++)
{
if(num%i == 0)
sum+=i;


}
if(sum==num)
return 1;
else
return 0;

}
int main()
{

int n;
scanf("%d",&n);
int i;
printf("Perfect numbers are :\n");
for(i=1;i<=n;i++)
{

if(isPerfect(i))
printf("%d	",i);



}

printf("\n");


return 0;
}
