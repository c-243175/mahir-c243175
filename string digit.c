#include<stdio.h>
int main()
{char str[100],ch;
int i,digit,other;
gets(str);
i=digit=other=0;
while((ch=str[i])!='\0')
{
if(ch>='0'&&ch<='9')
digit++;
i++;
}
printf("Number of digit=%d\n",digit);
return 0;
}
