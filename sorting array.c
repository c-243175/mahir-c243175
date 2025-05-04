#include<stdio.h>
int main()
{
    int i,j,arr[10]={2,5,8,7,1,4,3,9,8};
    for(i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(arr[j]<arr[i])
            {

                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}
