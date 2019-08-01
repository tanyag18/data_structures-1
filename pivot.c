#include<stdio.h>
#include<stdlib.h>
int pivot_point(int a[],int n)
{
	int r;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]<a[i]){
			r=i;
		}

	}
	return r;
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
	printf("\n%d",p);
	return 0;

}

