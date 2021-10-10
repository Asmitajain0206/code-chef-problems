#include <stdio.h>
#include<stdio.h>
void quicksort(int arr[],int start,int end)
{
 int pivot,i,j,temp;
 if(start<end)
 {
 pivot=start;
 i=start;
 j=end;
 while (i<j){
 while(arr[i]<=arr[pivot] && i<=end)
 {
 i++;
 }
 while (arr[j]>arr[pivot])
 {
 j--;
 }
 if(i<j)
 {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 }
 temp=arr[pivot];
 arr[pivot]=arr[j];
 arr[j]=temp;
 quicksort(arr,0,j-1);
 quicksort(arr,j+1,end);
 }
 }
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}


int main(void) {
	long int t,N,count;
	scanf("%d",&t);
	while(t--)
	{
	    count=0;
	    scanf("%d",&N);
	    long int A[N];
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    quicksort(A,0,N);
	    A[N-1] = findGCD(A,N);
	    long int x= findGCD(A,N);
	    for(int i=0;i<N-1;i++)
	    {
	        count+=(A[i]/x);
	    }
	    printf("%d",count+1);
	}
	return 0;
}

