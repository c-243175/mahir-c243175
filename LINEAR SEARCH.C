#include<stdio.h>
int main()
{
    int a[]={2,14,12,3,7,10};
    int pos=-1,i;
    int value=10;
    for(i=0;i<=6;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
    }
}
if(pos==-1)
    printf("not found");
else
    printf("found");
return 0;
}
