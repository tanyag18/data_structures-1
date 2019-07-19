#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])  //cli input
{
	int arr[argc-1];
	int ele,i;
	for(i=1;i<argc;i++){
		arr[i]=atoi(argv[i]);
		//atoi used to convert string to integer
	}
	printf("Enter element to be searched: ");
	scanf("%d",&ele);

	//no need of \n , will go to next line itself
	
	for(i=1;i<argc;i++)
	{
		if(arr[i]==ele){
			printf("Element present at position : %d\n",i-1);
			break;
		}
	}
	if(i==argc)    //reaching end of loop condition
	{
		printf("Element not present");
	}



	return 0;
}
