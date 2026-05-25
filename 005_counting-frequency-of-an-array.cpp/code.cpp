// naive approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {10,20,10,5,20};
    int n = arr.size();
    vector<bool> visited(n,false);
    


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
        cout << arr[i] << " -> "
             << count << endl;
        
    }    

 
}