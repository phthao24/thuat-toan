#include <bits/stdc++.h>

using namespace std;
#define base 1000000007
long long fi(int n)
{
    if(n == 0 || n == 1)
        return n;
    else{
    int i,f1=0,f2=1,f;
    for (i=2; i<=n; i++)
    {
        f=(f1+f2)%base;
        f1=f2;
        f2=f;
    }
    return f;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fi(n);
    return 0;
}
