#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
        for(i=0;i<N;i++)
        {

    if(A[i]>0)
    {
        A[i]=1;
    }
    else if(A[i]<0)
    {
        A[i]=2;
    }
        }
    for(i=0;i<N;i++)
    printf("%d",A[i]);
    return 0;
}
