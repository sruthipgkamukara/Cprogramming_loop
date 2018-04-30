//twos complement
#include<string.h>
#include<stdio.h>
int main()
{
char str[10];
scanf("%s",str);int flag=0;
for(int i=strlen(str)-1;i>=0;i--)
{
if(flag==1)
{
if(str[i]=='1')
str[i]='0';
else
str[i]='1';
}


if(str[i]=='1')
flag=1;



}

printf("2's complement :%s\n",str);



return 0;
}
