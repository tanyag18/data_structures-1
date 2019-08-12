#include<iostream>
#include<string>
using namespace std;


void selectionSort(string a[], int n)
{
	int i,j, min;
	string t;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)  {
			if (a[j].compare(a[min])<0) {
				min = j; } }
		
		t=a[i];
		a[i]=a[min];
		a[min]=t;

	}
}


int main(int argc,const char *argv[])
{
	string arr[argc-1];
	int i;
	for(i=0;i<argc-1;i++){
		arr[i]=(argv[i+1]);
		
	}
	selectionSort(arr,argc-1);
	for(i=0;i<argc-1;i++)
	{
		cout<<arr[i]+"  ";
	}
	return 0;
}


