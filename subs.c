#include<stdio.h>
void main()
{
FILE *fp;
int i=0,key=0,x;
char ch[30],a;
printf("Enter key \n");
scanf("%d",&key);
fp = fopen("/root/Desktop/substitution/inputsubs.txt","r");
while((a = getc(fp))!= EOF)
{
ch[i]=(char)(((int)a+key-97)%26);
i++;
}
fclose(fp);
fp = fopen("/root/Desktop/substitution/output.txt","w+");
i--;
x=i;
while(x!=0)
{
putc(ch[i-x]+97,fp);
x--;
}
fclose(fp);
}
