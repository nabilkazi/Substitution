#include<stdio.h>
void main()
{
FILE *fp;
int i=0,key=0,x,temp;
char ch[30],a;
printf("Enter key \n");
scanf("%d",&key);
fp = fopen("/root/Desktop/substitution/output.txt","r");
while((a = getc(fp))!= EOF)
{
if((temp = (int)a-key-97)<0)
temp = temp+26;
ch[i]=(char)(temp%26);
i++;
}
fclose(fp);
fp = fopen("/root/Desktop/substitution/deciphered.txt","w+");
x=i;
while(x!=0)
{
putc(ch[i-x]+97,fp);
x--;
}
fclose(fp);
}


