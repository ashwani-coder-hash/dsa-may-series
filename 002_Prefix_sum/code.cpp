#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {30, 10, 10, 5, 50};
    int n = arr.size();

    

    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i]+arr[i-1];

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
}