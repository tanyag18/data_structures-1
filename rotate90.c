#include<stdio.h>
#define N 4
int main(void)
{
	int a[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int temp;
	for(int i=0;i<N/2;i++)
	{
		for(int j=i;j<N-1-i;j++)
		{
			temp=a[i][j];
			a[i][j]=a[N-j-1][i];
			a[N-1-i][i]=a[N-1-i][N-1-j];
			a[N-1-i][N-1-j]=a[j][N-1-i];
			a[j][N-1-i]=temp;
		}
	}
	  for(int i=0;i<N;i++)
        {
                for(int j=0;j<N;j++)
                {
                        printf("%d ",a[i][j]);
                }
		printf("\n");
        }

}
