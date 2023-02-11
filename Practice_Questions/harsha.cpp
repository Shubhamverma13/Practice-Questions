#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
 
vector<vector<int>> dp;
 
// This function returns the required number
// of ways where idx is the current index and
// diff is number of boxes having different
// color from box on its left
int solve(int idx, int diff, int N, int M, int K)
{
    // Base Case
    if (idx > N) {
        if (diff == K)
            return 1;
        return 0;
    }
 
    // If already computed
    if (dp[idx][ diff] != -1)
        return dp[idx][ diff];
 
    // Either paint with same color as
    // previous one
    int ans = solve(idx + 1, diff, N, M, K);
 
    // Or paint with remaining (M - 1)
    // colors
    ans = ans % MOD + ((M - 1) % MOD * solve(idx + 1, diff + 1, N, M, K) % MOD) % MOD;
 
    return dp[idx][ diff] = ans;
}
 
// Driver code
int main()
{
    int N = 2, M = 3, K = 0;
    dp = vector<vector<int>>(N+1,vector<int>(N+1,-1));
 
    // Multiply M since first box can be
    // painted with any of the M colors and
    // start solving from 2nd box
    cout << (M * solve(2, 0, N, M, K)) << endl;
 
    return 0;
}