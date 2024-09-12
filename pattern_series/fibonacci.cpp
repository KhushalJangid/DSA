#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

// 4 byte int works upto 46
long long unsigned int a[10001];

long long unsigned int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    return a[n] ? a[n] : (a[n] = fibonacci(n - 1) + fibonacci(n - 2));
}
long long unsigned int dp[10001];

long long unsigned int fibonacci_dp(int n)
{
    // long long unsigned int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cout<<"Enter a num: ";
    cin>>n;

    auto start = high_resolution_clock::now();
    cout<<fibonacci(n)<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout <<"Runtime of Memoization: "<< duration.count() / 10000 << " nanoseconds\n";
    auto start1 = high_resolution_clock::now();
    cout<<fibonacci_dp(n)<<endl;
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout <<"Runtime of DP: "<< duration1.count() / 10000 << " nanoseconds\n";
}
