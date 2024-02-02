#include<stdio.h>
int main()
{
	int n,sum=0;
	int i;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int array[n];
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	for(i=0;i<n;i++){
		sum +=array[i];
	}
	printf("sum of elements %d",sum);
	return 0;
	
	
	
}
