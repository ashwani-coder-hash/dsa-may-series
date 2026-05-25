// find the sum from L to R//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2,4,1,6,3};
    int L = 1 ,R = 3;

    
    int sum =0;

    while (L<=R)
    {
        sum  = sum + arr[L];
        L++;
    }
  
    cout<<sum;
}