//Stable and recursive
//T : O(N^2)
//Auxillary Space : O(1)

#include<iostream>
using namespace std;
void selectionSort(int a[],int i, int n)  
{  
	int t, j, min;
	if(i>n)
		return;

	min =i;
	for (j = i+1; j < n; j++)  {
		if (a[j] <= a[min]) {
			min = j;  }}

	//using rotation     
	int key =a[min];
	while(min>i)
	{
		a[min]=a[min-1];
		min--;
	}	    
	a[i]=key;   
	selectionSort(a,i+1,n);
}  
int main(int argc,const char *argv[])
{
	int arr[argc-1];
	int i;
	for(i=0;i<argc-1;i++){
		arr[i]=atoi(argv[i+1]);
		//atoi used to convert string to integer
	}
	selectionSort(arr,0,argc-1);
	for(i=0;i<argc-1;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return 0;
}
