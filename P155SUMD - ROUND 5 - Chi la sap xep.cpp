#include <bits/stdc++.h>

using namespace std;
void quickSort(int a[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = a[(left + right)/2];     // gia tri chot  giua mang
    while(i <= j){
        while(a[i] < pivot)
            i++;
        while(a[j] > pivot)
            j--;
        if(i <= j){
            tmp = a[i];
            a[i]= a[j];
            a[j]= tmp;
            i++;
            j--;
        }
    };
    if(left < j)
        quickSort(a,left,j);
    if(i < right)
        quickSort(a, i, right);

}
int binarySearch(int a[], int Value, int left, int right)
{
    int ans = -1;
    while(left <= right){
        int middle = (left+right)/2;
        if(a[middle] <= Value){
            ans = middle;          // vi tri/ so ptu <= b[j]
            left = middle + 1;
        }
        else
            right = middle - 1;
    }
    return ans;
}
int main()
{
    int n , m;
    cin >> n >> m;
    int a[n+5], b[m+5];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for(int i = 0; i < m; i ++){
        cin >> b[i];
    }
    for(int i = 0; i < m; i++){
        //if(b[i] < a[0])
            //cout << 0 << endl;
        //else
            cout << binarySearch(a,b[i],0,n-1) + 1 << endl;
    }
    return 0;
}
