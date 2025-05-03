#include<stdio.h>
int main()
{
    int N,i,j,flag=0;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
        for(i=0;i<N/2;i++)
        {
            if(A[i]!=A[N-i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag=1)
        {
            printf("not palindrome");
        }
        else
        {
            printf("palindrome");
        }

    return 0;
}
