//one's complement
#include<string.h>
#include<stdio.h>
int main()
{
char str[10];
scanf("%s",str);
for(int i=0;i<strlen(str);i++)
{
if(str[i]=='1')
str[i]='0';
else
str[i]='1';

}
printf("One's complement is :%s\n",str);








return 0;
}
