#include<stdio.h>
#include<stdlib.h>
int gcd_array(int[],int);
int gcd(int,int);

int main(int argc, const char *argv[])
{
	int arr[argc-1];
	int i,g;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	g=gcd_array(arr,argc-1);
	
	printf("GCD of numbers: %d\n",g);
	return 0;
}

int gcd_array(int a[],int n)
{
	int r=a[0];
	for(int i=1;i<n;i++)
	{
		r=gcd(a[i],r);
	}
	return r;
}
int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
