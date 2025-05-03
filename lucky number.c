#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
    }
    }
    int freq=0;
    for(i=0;i<n;i++)
        {
            if(a[i]==min)
            {
                freq ++;
            }
        }
        if(freq%2==1)
        {
            printf("lucky number");
        }
        else
        {
            printf("not lucky number");
        }
        return 0;
    }
