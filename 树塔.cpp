#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int dp[110][110];
int main(){
	int n,t; 
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				scanf("%d",&dp[i][j]);
			}
		}
		for(int i=n-1;i>0;i--){
			for(int j=1;j<=i;j++){      //ÿ����������ȡ����
				dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
			}
		}
		printf("%d\n",dp[1][1]);
	}
	return 0;
}


