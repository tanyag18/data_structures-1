#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int start,int end,int find)
{
	if(start>end)
		return -1;
        int mid=start+(end-start)/2;
        if(find==arr[mid])
                return mid;
	if(arr[start]<=arr[mid])
	{
		if(find>=arr[start]&&find<=arr[mid])
                 	return binary_search(arr,start,mid-1,find);
                return binary_search(arr,mid+1,end,find);
	}
	if(find>=arr[mid+1]&&find<=arr[end])
	{
		return binary_search(arr,mid+1,end,find);
	}
		  return binary_search(arr,start,mid-1,find);
      
}
int main(int argc,const char *argv[])
{
        int arr[argc-2],ele,i,result;
        for(i=0;i<argc-2;i++)
        {
		arr[i]=atoi(argv[i+1]);
        }
        ele=atoi(argv[argc-1]);
        result=binary_search(arr,0,argc-3,ele);
	printf(" Element found at position: %d\n",result);
        return 0;
}
