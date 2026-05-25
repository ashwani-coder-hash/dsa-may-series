#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aabbccaa";
    int n = s.size();
    
    vector<bool> visited(n,false);

    for(int i=0;i<n;i++)
    {
        int count =1;

        if(visited[i]== true)
        {
            continue;
        }

        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                visited[j]=true;
                count++;
            }

        }
        cout<<s[i]<<" "<<count<<endl;
    }
    
}