//----------- At Beginning -------------------//

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// vector<int> arr = {10, 20, 30, 40};
// int element = 50;
// int size = arr.size();

// for(int i=size;i>0;i--)
// {
//     arr[i]=arr[i-1];
    
// }
// arr[0]=element;

// for(int i=0;i<=size;i++)
// {
//     cout<<arr[i]<<" ";
// }
    
// }

//------------------- At Given Position ------------------------//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {10, 20, 30, 40};
    int pos = 2;
    int ele = 50;

    int size = arr.size();

    for(int i= size;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];

    }

    arr[pos-1]=ele;

     for(int i=0;i<=size;i++)
{
    cout<<arr[i]<<" ";
}
    
}