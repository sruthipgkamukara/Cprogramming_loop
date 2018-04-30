// C program to split money into currency notes
#include<stdio.h>
int main()
{
int amt;
scanf("%d",&amt);
int note[7]={1000,500,100,50,20,5,1};
int noteCounter[7]={0};
for(int i=0;i<7;i++)
{

noteCounter[i]=amt/note[i];
amt-=(note[i]*noteCounter[i]);
}
printf("Denomination	No of notes\n");
for(int i=0;i<7;i++)
printf("%d		%d\n",note[i],noteCounter[i]);
return 0;
}
