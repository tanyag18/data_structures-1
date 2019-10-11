#include <stdio.h>
#include <stdlib.h>

void binarySearch();
 
int main(void)
{
   int i, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers in ascending order\n", n);  //array needs to be sorted
 
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   binarySearch(array,first,last,middle,search);

   return 0;
}
 void binarySearch(int a[],int f,int l,int m,int s){
   while (f <= l) {
	 if (a[m] == s) {
         printf("%d found at location %d.\n", s, m+1);
         break;}
      if (a[m] < s)
         f = m + 1;    
      else
         l = m - 1;
 
      m = (f + l)/2;
   }
   if (f > l)
      printf("Not found!");  
}
