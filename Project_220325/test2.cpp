////#include<bits/stdc++.h>
//#define _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
//using namespace std;
//int dp[109] = {};
//#define inf 0x3f3f3f3f
//
//int  min(int dp1, int dp2) {
//	printf("dp1= %d    dp2= %d\n", dp1, dp2);
//	return dp1 > dp2 ? dp2:dp1;
//}
//int main() {
//
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 1;i < n;i++) {
//		dp[i] = inf;
//		if (i >= 1) dp[i] = min(dp[i],dp[i-1]+1);
//		if (i >= 5) dp[i] = min(dp[i], dp[i - 5] + 1);
//		if (i >= 11) dp[i] = min(dp[i], dp[i - 11] + 1);
//	
//		printf("f(%d) = %d\n",i,dp[i]);
//	}
//
//	return 0;
//}