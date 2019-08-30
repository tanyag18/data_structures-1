#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

void swap(int *n1, int*n2) {
int temp=*n1;
*n1=*n2;
*n2=temp;}


int partition(int arr[], int low, int high) {
	int pivot = arr[low]; 
    int i = low - 1, j = high + 1; 
   
    while(1) 
    { 
        
        do
        { 
            i++; 
        } while (arr[i] < pivot); 
   
        
        do
        { 
            j--; 
       } while (arr[j] > pivot); 
   
      
        if (i >= j) 
            return j; 
   
        swap(&arr[i],&arr[j]); 
}
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
	int arr[] = {8,6,7,19,5,2};
	//srand(time(0));
	quickSort(arr,0,5);
	for (int i=0;i<6;i++)
		printf("%d",arr[i]);
	
	return 0;
}

