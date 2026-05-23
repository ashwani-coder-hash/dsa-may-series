// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1  //


// -------------------BY aditya verma sir --------------------------------------//

#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {2,5,1,8,2,9,1};
    int n = arr.size();
    int k=3;

    int i=0,j=0;
    int max_sum=0, sum=0;

    while(j<n)
    {
    sum = sum + arr[j];

     if(j-i+1<k)
    {
        j++;
    }

     else if(j-i+1 == k)
    {
        max_sum = max(max_sum,sum);

        sum  = sum - arr[i];
        i++;
        j++;
    }

    }
    cout<<max_sum;
    
}