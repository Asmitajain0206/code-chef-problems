#include <stdio.h>
#include<string.h>

int main(void) {
	long int t,M0,M1,Y0,Y1;

	char M[100000],Y[100000];
	scanf("%d",&t);
	while(t--)
	{
	    M0=M1=Y0=Y1=0;
	    scanf("%s",M);
	    scanf("%s",Y);
	    long int n=strlen(M);
	    long int o=strlen(Y);
	    for(long int i= 0;i<n;i++)
	    {
	        if(M[i]=='0')
	        M0++;
	        else
	        M1++;
	    }
	    for(int i= 0;i<o;i++)
	    {
	        if(Y[i]=='0')
	        Y0++;
	        else
	        Y1++;
	    }
	    if(M0>=Y0 && M1>=Y1)
	    printf("YES");
	    else
	    printf("NO");

	}
	return 0;
}

