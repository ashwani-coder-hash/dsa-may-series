// naive approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,2,3,1,2};
    int n = arr.size();
    vector<bool> visited(n,false);
    
    int max_freq =0;
    int ans =-1;


    for(int i=0;i<n;i++)
    {
        int count=1;
        if(visited[i]==true)
        {
            continue;
        }

        for(int j=i+1;j<n;j++)
        {

            if(arr[i]==arr[j])
            { visited[j]=true;
                count++;
            }
        }
       

             if(count>max_freq)
             {
                max_freq =count;
                ans =arr[i];
             }
        
    }    
    cout<<ans;

 
}