#include<stdio.h>

int main()
{
    int t, n,x,k,i;
    printf("enter t: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("\nenter n x k: ");
        scanf("%d%d%d",&n,&x,&k);
        if(x<=(n+1) && (x%k==0 || (n+1-x)%k==0))
                printf("\nYES");
        else
                printf("\nNO");

    }
    return 0;
}
