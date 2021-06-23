#include<stdio.h>

int main()
{
    int T,X,A,B,P;
    printf("enter t: ");
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        printf("\nENTER X A B: ");
        scanf("%d%d%d",&X,&A,&B);
        P=(A+(100-X)*B)*10;
        printf("\n%d",P);
    }
    return 0;
}
