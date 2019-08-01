#include<stdio.h>
#include<stdlib.h>
int pivot_point(int a[],int n)
{
	int r;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1]){
			r=i;
		}

	}
	return r;
}

void left_rot(int a[],int n, int d)
{
	int t;
	for(int i=0;i<d;i++)
	{	
		t=a[0];	
		for(int j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=t;
	}
}


int main(int argc, const char *argv[])
{
	int i,arr[argc-1];
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	//int element=atoi(argv[argc-1]);
	int p=pivot_point(arr,argc-1);
	//printf("\n%d",p);
	left_rot(arr,argc-1,p+1);
	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;

}
