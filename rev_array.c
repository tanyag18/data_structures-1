#include<stdio.h>
#include<stdlib.h>

void reverse_array(int[],int,int);

int main(int argc, char *argv[])
{
	int i,arr[argc-1];
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	/*for(i=argc-1;i>=1;i--)
	{
		printf("%d\n",arr[i]);
	}   iterative 
	*/

	// recursive

	reverse_array(arr,0,argc-2);  //argc-2 - end element

	for(i=0;i<argc-1;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

void reverse_array(int a[],int s,int e)
{
	int temp=0;
	if(s>=e){
	 return;}

	temp=a[s];
	a[s]=a[e];
	a[e]=temp;
	
	reverse_array(a,++s,--e);	
}
