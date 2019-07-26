#include <stdio.h>
#include <stdlib.h>

int binarySearch();


int main(int argc, const char *argv[])
{	
	int array[argc-2];
	int i;
	for(i=0;i<argc-2;i++)
	{
		array[i]=atoi(argv[i+1]);
	}

	int first, last, middle, n, search,b;

	printf("Enter value to find\n");
	scanf("%d", &search);

	first = 0;
	last = argc - 2;

	b=binarySearch(array,first,last,search);
	if(b==-1)
		printf("Element not found");

	else
		printf("Element found at: %d",b);

	return 0;
}
int binarySearch(int a[],int f,int l,int s){
	if (f > l) 
		return -1;
	int m=f+(l-f)/2;
	if (a[m] == s) {
		return m;
	}
	if (a[m] < s) 
		return binarySearch(a,m+1,l,s);   
	return binarySearch(a,f,m-1,s);

}
