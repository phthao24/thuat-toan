#include <bits/stdc++.h>
using namespace std;
void quickSort(long long a[], long long l, long long r)
{
	long long i = l, j = r;
	long long tmp;
	long long pivot = a[(l+r)/2];
	while(i <= j){
		while(a[i] > pivot)
		i++;
		while(a[j] < pivot)
		j--;
		if(i <= j){
			tmp = a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
			j--;
		}
	}
	if(l < j)
	quickSort(a,l,j);
	if(i < r)
	quickSort(a,i,r);
}
int main() {
    long long n,k;
    cin >> n >> k;
    long long a[n+5];
    long long ans = 0;
    for(long long i = 0; i < n; i++){
    	cin >> a[i];
    }
    quickSort(a,1,n-1);
    for(long long i = 0; i < n; i++){
    	if(i <= k) ans += a[i];
    	else ans -= a[i];
    }
    cout << ans;
	return 0;
}
