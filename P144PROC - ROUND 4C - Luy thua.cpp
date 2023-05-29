#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
long long mu(long long a, long long n)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return a;
    else{
        long long temp = (mu(a,n/2))%mod;
        if(n%2 == 0)
            return temp*temp%mod;
        else return (a*(temp*temp)%mod)%mod;
    }
}
int main()
{
    long long a, n;
    while(1){
        cin >> a >> n;
        if(a==0 && n == 0)
            break;
        else
            cout << mu(a,n) << endl;
    }
    return 0;
}
