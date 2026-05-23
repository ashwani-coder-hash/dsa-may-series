// ---------------------- My bruteforce ---------------------------------//


#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
     int n = arr.size();

    int s = 0,e = n-1;

    while (s<e)
    {
        if(arr[e]==0)
        {
            e--;
        }

        if(arr[s]==0)
        {
            swap(arr[s],arr[e]);
        }
        else
        {
            s++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}