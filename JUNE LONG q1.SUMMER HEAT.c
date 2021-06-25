#include <stdio.h>

int main(void) {
	int xa, xb, Xa, Xb,T;
	printf("enter no. of test cases : ");
	scanf("%d",&T);
	while(T)
	{
	    printf("\nENTER xa , xb , Xa, Xb : ");
	    scanf("%d%d%d%d",&xa, &xb , &Xa, &Xb);
	    printf("%d\n",(Xa/xa)+(Xb/xb));
	    T--;
	}
	return 0;
}

