#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;
int n;
ll stackDP(const int &i,const int &j){
    //return dp[n][0];   
    //dp[i][j]  i is in queue,j is in stack,(i+j)max = n
    //dp[0][j] = 1 j!=0
    //dp[i][0] = dp[i-1][1]; i!=0
    //dp[i][j] = dp[i-1][j+1] + dp[i][j-1]
    if(i == 0) return 1;
    if(i != 0 && j == 0) return stackDP(i-1,1);
    if(i != 0 && j != 0) return stackDP(i-1,j+1) + stackDP(i,j-1);
    return 0;
}

int main(int argc, char** argv)
{
    cin >> n;
    ll  ans = stackDP(n,0);
    cout << ans <<endl;
    return 0;
}
