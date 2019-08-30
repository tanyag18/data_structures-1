
        swap(&arr[i],&arr[j]);
}
}
void quickSort(int arr[], int start, int end){
        if(start>=end)
                return;
        int pi=partition(arr,start,end);

        quickSort(arr,start,pi-1);
        quickSort(arr,pi+1,end);
}
int main()
{
        int arr[] = {8,6,7,19,5,2};
        //srand(time(0));
        quickSort(arr,0,5);
        for (int i=0;i<6;i++)
                printf("%d",arr[i]);

        return 0;
}

"hoare_qsort.c" 54L, 827C                                     54,0-1        Bot

