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
    printf("��Ҫ������ٸ����֣�\n");
	scanf("%d",&len);
	printf("��ʼ��������Ҫ���������:\n");
	for(i=0;i<len;i++){
	    scanf("%d",&a[i]);
	}
    printf("\n����Ӷκ�Ϊ:%d\n",MaxSum(len,a));
}

