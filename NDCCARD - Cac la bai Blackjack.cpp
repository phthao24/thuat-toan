#include <bits/stdc++.h>

using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    long long a[n+5];
    vector <long long> v(a,a+n);
    for(long long i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    //SAP XEP GIAM DAN
    sort(a,a+n,cmp);
    long long maxSum = 0;
    bool finish = 0;
    for(long i = n-1; i >= 0; i--)
    {
        for(long j = i-1; j >= 0; j--)
        {
            long long temp = m - (a[i]+a[j]);
            if(temp <= 0){
                finish = 1;                     // KTRA DE KTHUC SOM, NEU TONG 2 SO MÀ LON HƠN = M THI DUNG
                break;
            }
            long long k = lower_bound(a,a+n,temp,cmp) - a;      //TIM RA VI TRI THU K MA A[K] <= TEMP
            if(k == i || k == j)
                break;
            long sum = a[i] + a[k] + a[j];
            if(sum > maxSum)
                maxSum = sum;
        }
        if(finish)break;
    }
    cout << maxSum ;
    return 0;
}
