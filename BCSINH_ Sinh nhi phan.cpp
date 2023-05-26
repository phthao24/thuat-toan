#include <bits/stdc++.h>

using namespace std;

int n;
int a[15];

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}
void sinh(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n-1)
            xuat();
        else sinh(i+1);
    }
}
int main()
{
    cin >> n;
    sinh(0);
    return 0;
}
