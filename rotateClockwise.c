#include<stdio.h>
#define ROTATIONS 2
#define M 3
#define N 4

void rotate(int r,int c,int a[M][N],int m, int n)
{
	if(r>=M/2 || c>=N/2)
		return;
	int curr=0,prev=0;
	prev=a[r+1][c];
	for(int i=c;i<n;i++)
	{
		curr=a[r][i];
		a[r][i]=prev;
		prev=curr;
	}
	for(int i=r+1;i<m;i++)
	{
		curr=a[i][n-1];
		a[i][n-1]=prev;
		prev=curr;
	}
	 for(int i=n-2;i>=c;i--)
        {
                curr=a[m-1][i];
                a[m-1][i]=prev;
                prev=curr;
        }

	 for(int i=m-2;i>0;i--)
        {
                curr=a[i][c];
                a[i][c]=prev;
                prev=curr;
        }
	 rotate(--m,--n,a,++r,++c);
}


int main(void){
int a[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int m=M;
int n=N;
for(int i=0;i<ROTATIONS;i++)
	rotate(0,0,a,m,n);
for(int i=0;i<M;i++){
	for(int j=0;j<N;j++){
		printf("%d ",a[i][j]);}
	printf("\n");}
return 0;
}
