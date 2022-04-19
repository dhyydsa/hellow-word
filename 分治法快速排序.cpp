#include <stdio.h>
#include <stdlib.h>
 
#define BUF_SIZE 10
void display(int array[], int maxlen)
{
    int i;
 
    for(i = 0; i < maxlen; i++)
    {
        printf("%-3d", array[i]);
    }
    printf("\n");
 
    return ;
}
 
void QuickSort(int *arr, int low, int high)
{
    if(low>=high)
    return;
    int i=low;
    int j=high;
    int k=arr[low];
    while(i<j)
    {
    	while(i<j&&arr[j]>=k)
    	{
		    j--;
	    }
    	arr[i]=arr[j];
    	while(i<j&&arr[i]<=k)
    	{
    		i++;
	    }
		arr[j]=arr[i];  	
		
	}
	arr[i]=k;
	QuickSort(arr,low,i-1);
	QuickSort(arr,i+1,high) ;
	
 
       
    
}
 
// 主函数
int main()
{
    int array[BUF_SIZE] = {12,85,25,16,34,23,49,95,17,61};
    int maxlen = BUF_SIZE;
    
    printf("排序前的数组\n");
    display(array, maxlen);
    
    QuickSort(array, 0, maxlen-1);  // 快速排序
    
    printf("排序后的数组\n");
    display(array, maxlen);
    
    return 0;
}
