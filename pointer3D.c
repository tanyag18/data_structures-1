#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m=4,n=3;
	int *arr=(int *)malloc(m*n*sizeof(int));
	int c=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		{
			*(arr+i*n+j)=c++;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",*(arr+i*n+j));
		}
		printf("\n");
	}
	return 0;
}
