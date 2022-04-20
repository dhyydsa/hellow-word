#include<stdio.h>
#include<string.h>
#define N 100
int MaxSum(int n,int a[])
{
	int sum=0,b=0;
	for(int i=0;i<n;i++){
	   if(b>0)
		   b+=a[i];
	   else
		   b=a[i];
	   if(b>sum)
		   sum=b;
	}
    if(sum<0)
		return 0;
	else
		return sum;
 
}
int main()
{
    int a[N],len,i;
    printf("需要输入多少个数字？\n");
	scanf("%d",&len);
	printf("开始输入你需要输入的数字:\n");
	for(i=0;i<len;i++){
	    scanf("%d",&a[i]);
	}
    printf("\n最大子段和为:%d\n",MaxSum(len,a));
}

