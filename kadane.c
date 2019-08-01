#include <stdio.h>
#include <stdlib.h>
int max_sum_subarray(int arr[],int size)
{
	int max_ending_here=0,max_so_far=0,start_index=0,end_index=0,s=0;
	for(int i=0;i<size;i++)
		{
			max_ending_here+=arr[i];
			if(max_ending_here<0)
			{
				max_ending_here=0;
				s=i+1;
			}
			else if(max_so_far < max_ending_here)
			{
				max_so_far=max_ending_here;
				start_index=s;
				end_index=i;
			}
		}
	printf("Subarray is : from %d to %d\n",start_index,end_index);
	for(int i=start_index;i<=end_index;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	return max_so_far;

}
int main(int argc,const char *argv[])
{
   int n,i,j=0,k,max=0,sum=0,start,end;
   int arr[argc-1];
   for(i=1;i<argc;i++)
   {
	arr[j]=atoi(argv[i]);
	j++;
   }
   int l=max_sum_subarray(arr,j);
   printf("Maximum sum= %d\n",l);
    return 0;
}
