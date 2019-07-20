#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char *argv[])
{	
	int arr[argc-2];
	int i;
	for(i=0;i<argc-2;i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	int r=atoi(argv[argc-1]);
	int temp[r];
	for(i=0;i<r;i++)
	{
		temp[i]=arr[i];
	}
	for(i=r;i<argc-2;i++)
	{
		arr[i-r]=arr[i];
	}
	
	for(i=0;i<r;i++)
	{
		arr[argc-2-r+i]=temp[i]; // to replace last r elements by temo array
	}
	printf("Left Rotated Array::\n");
	for(i=0;i<argc-2;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
