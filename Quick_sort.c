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
	//int pivot_index=(rand()%(high-low+1)) + low;
	int pivot_index = high;
	//swap(&arr[pivot_index],&arr[high]);
	int pivot=arr[pivot_index];
	int i=low-1;
	
	for(int j=low; j<high; j++) {
		//if(j == pivot_index)
			//continue;

		if(arr[j] < pivot){
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
	int arr[] = {8,6,7,9,5};
	//srand(time(0));
	quickSort(arr,0,4);
	for (int i=0;i<6;i++)
		printf("%d",arr[i]);
	
	return 0;
}

