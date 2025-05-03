#include<stdio.h>
int main()
{
    char str[100];
    char temp;
    int i,j,len;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("sorting string is %s" ,str);
    return 0;
}
