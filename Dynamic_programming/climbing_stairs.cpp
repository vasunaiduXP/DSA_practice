#include <bits/stdc++.h>
#
int dp[100000009]={0};

int countDistinctWays(int n) {
    dp[0]=dp[1]=1;
    
    //  Write your code here.
    if(n==0) return 1;
    if(n==1) return 1;
    if(dp[n]) return dp[n];
    int t=(countDistinctWays(n-1) + countDistinctWays(n-2));
    return dp[n]=t%(int)(pow(10,9)+7);
}


/*

https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650

*/
