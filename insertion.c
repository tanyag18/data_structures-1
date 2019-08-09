//Stable Sort
//T: O(N^2)
//Auxillaryspace (O(1))	

#include<stdio.h>
#include<stdlib.h>
void insertionSort(int a[],int n)
{
	 int i,j,temp; 
    for (i = 1;i <n; i++) {
	  for(j=i-1;j>=0;j--)
	  {
		  if(a[j]>a[j+1])
		  {
			  //Swap one by one
			  temp=a[j+1];
			  a[j+1]=a[j];
			  a[j]=temp;
		  }
	  }
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
	insertionSort(arr,argc-1);
	for(i=0;i<argc-1;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
