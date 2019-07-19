#include <stdio.h>
int main(void)
{
	int n,arr[10],r,i,j,last=0;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number of times to right rotate the array : ");
	scanf("%d",&r);
	for(i=0;i<r;i++){
		last=arr[n-1];
		for(j=n-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=last;
	}
	printf("\nRotated array==\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}


