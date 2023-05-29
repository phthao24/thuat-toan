#include <bits/stdc++.h>

using namespace std;
long long gthua(int n)
{
    if(n <= 1) return 1;
    else return n*gthua(n-1);
}
int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0)
            break;
        cout << gthua(n) << endl;
    }
    return 0;
}
