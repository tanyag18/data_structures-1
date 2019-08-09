//Not Stable
//T : O(N^2)
//Auxillary Space : O(1)

#include<stdio.h>
#include<stdlib.h>

void selectionSort(int a[], int n)  
{  
	int i,t, j, min;  
	for (i = 0; i < n-1; i++)  
	{    
		min = i;  
		for (j = i+1; j < n; j++)  {
			if (a[j] < a[min]) {
				min = j;  }}
		t=a[i];
		a[i]=a[min];
		a[min]=t;      
		
	}  
}  


int main(int argc,const char *argv[])
{
	int arr[argc-1];
	int i;
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[i+1]);
		//atoi used to convert string to integer
	}
	selectionSort(arr,argc-1);
	for(i=0;i<argc-1;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
