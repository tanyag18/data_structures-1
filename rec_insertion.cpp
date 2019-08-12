//Stable Sort
//T: O(N^2)
//Auxillaryspace (O(1))	

#include<iostream>
#include<string>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void insertionSort(int a[],int n)
{
	 int i=1,j,temp; 
if(n<=1)
	return;

	  for(j=n-1;j>=0;j--)
	  {
		  if(a[j]>a[j+1])
		  {
			  //Swap one by one
			  swap(&a[j+1],&a[j]);
		  }
	  }
	  n--;
	  insertionSort(a,n);
    
	  
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
		cout<<arr[i]<<" ";
	}
	return 0;
}
