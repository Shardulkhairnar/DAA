#include <bits/stdc++.h>
using namespace std;
int knapSack(int capacity, int wt[], int val[], int n)
{vector<vector<int>> DP(n + 1, vector<int>(capacity + 1));
for(int i = 0; i <= n; i++){
    for(int w = 0; w <= capacity; w++){
        if (i == 0 || w == 0)
            DP[i][w] = 0;
        else if (wt[i - 1] <= w)
            DP[i][w] = max(val[i - 1] +
            DP[i - 1][w - wt[i - 1]],
            DP[i - 1][w]);
        else
            DP[i][w] = DP[i - 1][w];}}
    return DP[n][capacity];}
int main(){
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int capacity = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout <<"Value is : "<< knapSack(capacity, wt, val, n);
    return 0;}
