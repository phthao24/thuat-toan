#include <bits/stdc++.h>

using namespace std;
long long D;
float a[505];
float Cal(float x)   //Ham tinh nghiem
{
    float cal = 0;
    for(long i = 0; i <= D; i++){
        cal = cal + a[i]*pow(x,i);
    }
    return cal;
}
float binarySearch(float left, float right)
{
    float middle = (left + right)/2;;
    while(left != middle && right != middle){
        if(Cal(right)*Cal(middle) < 0)
             left = middle;
        else if(Cal(left)*Cal(middle) < 0)
             right = middle;
        middle = (left + right)/2;
    }
    return middle;
}
int main()
{
    cin >> D;                 // Nhap vao bac cua da thuc
    for(long i = 0; i <= D; i++){
        cin >> a[i];
    }
    cout << long(binarySearch(-1000000,1000000)*1000);
    return 0;
}
