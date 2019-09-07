#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int Longest_common_substring(string s1, string s2, int n, int m)
{
	int a[n+1][m+1];
	int maxm=0,i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				a[i][j]=0;
			else if(s1[i-1]==s2[j-1]){
				a[i][j]=a[i-1][j-1]+1;
				// maxm=max(maxm,a[i][j]);

			}
			else
				a[i][j]=0;

		
		maxm=max(maxm,a[i][j]);
		}

	}
	return maxm;
}


int main(int argc, char* argv[])
{
	string str1=argv[1];
	string str2=argv[2];
	int l1=str1.length();
	int l2=str2.length();
	int len=Longest_common_substring(str1,str2,l1,l2);
	cout<<len;
	return 0;
}
