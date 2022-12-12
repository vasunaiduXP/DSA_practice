#include <bits/stdc++.h> 
int fun(int n, vector<int> &ht, vector<int> &dp);
int frogJump(int n, vector<int> &heights)
{    
    vector<int> dp(n+1,-1);
    return fun(n-1, heights, dp);
}

int fun(int n, vector<int> &ht, vector<int> &dp) {
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    
    int left = fun(n-1, ht, dp) + abs(ht[n]-ht[n-1]);
    int right = INT_MAX;
    if(n>1) 
    right = fun(n-2, ht, dp) + abs(ht[n]-ht[n-2]);
    
    return dp[n] = min(left, right);
}

//-----------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h> 
int fun(int n , vector<int> &ht, vector<int> &dp);

int frogJump(int n, vector<int> &heights)
{    vector<int> dp(n, 0);
     dp[0] = 0;
     for(int i=1;i<n;++i) {
         int left = dp[i-1] + abs(heights[i]-heights[i-1]);
         int right = INT_MAX;
         if(i>1) right = dp[i-2]+abs(heights[i]-heights[i-2]);
         
         dp[i]=min(left, right);
     }
    return dp[n-1];
}


/*

Sample Input 1:
2
4

10 20 30 10
3
10 50 10
Sample Output 1:
20
0
Explanation Of Sample Input 1:
For the first test case,
The frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost).
Then a jump from the 2nd stair to the last stair (|10-20| = 10 energy lost).
So, the total energy lost is 20 which is the minimum. 
Hence, the answer is 20.

For the second test case:
The frog can jump from 1st stair to 3rd stair (|10-10| = 0 energy lost).
So, the total energy lost is 0 which is the minimum. 
Hence, the answer is 0.
Sample Input 2:
2
8
7 4 4 2 6 6 3 4 
6
4 8 3 10 4 4 
Sample Output 2:
7
2

*/
