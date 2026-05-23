#include<bits/stdc++.h>
using namespace std;

bool two_point(vector<int> arr ,int target)
{   int n = arr.size();
    int srt =0,end=n-1;
    
    while(srt<end)
        {
            int sum = arr[srt] + arr[end];
        if(sum==target)
        {
            return true;
        }
        else if(sum<target)
        {
            srt++;
        }
        else
        {
            end--;

        }


    }
    return false;

}
int main()
{
    vector<int> arr = {-3, -1, 0, 1, 2};
    int target = -2;

    if(two_point(arr,target))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;

}