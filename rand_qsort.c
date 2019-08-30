#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *n1, int*n2) {
int temp=*n1;
*n1=*n2;
*n2=temp;}


int partition(int arr[], int low, int high) {
	srand(time(0));
	//int pivot_index = low+ rand()%(high-low);
	int pivot_index=(rand()%(high-low+1)) + low;
	//int pivot_index = low;
	swap(&arr[pivot_index],&arr[high]);

	int pivot=arr[high];
	int i=low-1;
	
	for(int j=low; j<=high-1; j++) {
		//if(j == pivot_index)
			//continue;

		if(arr[j]<=pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quickSort(int arr[], int start, int end){
	if(start>=end)
		return;
	int pi=partition(arr,start,end);

	quickSort(arr,start,pi-1);
	quickSort(arr,pi+1,end);
}
int main()
{
	int arr[] = {9,8,8,9,6,7,19,5,10};
	//srand(time(0));
	quickSort(arr,0,8);
	for (int i=0;i<9;i++)
		printf("%d ",arr[i]);
	
	return 0;
}

