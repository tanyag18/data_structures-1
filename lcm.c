#include<stdio.h>
#include<stdlib.h>
int gcd_array(int[],int);
int gcd(int,int);
int lcm(int[],int,int);
int main(int argc, const char *argv[])
{
	int arr[argc-1];
	int i,g,l;
	for(i=0;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i+1]);
	}
	g=gcd_array(arr,argc-1);
	l=lcm(arr,argc-1,g);
	printf("LCM of numbers: %d\n",l);
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

int lcm(int ar[],int n,int gcd)
{
	int product=1;
	for(int i=0;i<n;i++)
	{
		product=product*ar[i];

	}
	return product/gcd;
}
