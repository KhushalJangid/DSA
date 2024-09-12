#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n==1)
    {
        return n;
    }
    int sum = fibo(n - 1) + fibo(n - 2);
    return sum;
}

int main()
{
    cout << fibo(47) << endl;
    return 0;
}
