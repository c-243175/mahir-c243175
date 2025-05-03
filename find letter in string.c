#include<stdio.h>
int main()
{
    char str[100],ch;
int i,letter;
gets(str);
i=letter=0;
while((ch=str[i])!='\0')
{
if(ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'
   ||ch=='H'||ch=='I'||ch=='J'||ch=='K|'|ch=='L'||ch=='M'
   ||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||
   ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
    letter++;
i++;
}
printf("Number of digit=%d\n",letter);
return 0;
}
