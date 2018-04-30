//prime numbers from 1 to n 
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("Prime numbers from 1 to %d are :\n",n);
for(int i=2;i<=n;i++)
{

	int nf=0;
	for(int j=1;j<=i;j++)
	{
		if(i%j==0)
			nf+=1;


	}
//	printf("i= %d nf= %d\n",i,nf);	
	if(nf==2)
		printf("%d	",i);




}//numbers

printf("\n");


return 0;
}

