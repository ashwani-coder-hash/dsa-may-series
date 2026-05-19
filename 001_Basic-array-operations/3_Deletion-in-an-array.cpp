// -------------- At Beginning --------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = { 10, 20, 30, 40 };
//     int n = arr.size();

//     for(int i=1;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
    
//     for(int i=0;i<n-1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// ----------------------- At given Position --------------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      vector<int> arr = { 10, 20, 30, 40 };
//      int pos = 2;
//     int n = arr.size();

//     for(int i=pos;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


// ----------------------- At first occurance --------------------------------------//
// ---------- my juggad -----------------//


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// vector<int> arr = {10, 20, 30, 40};
// int ele = 25; 
// int n = arr.size();

// //finding position
// int pos =0;
// for(int i=0;i<n;i++)
// {
//     if(arr[i]==ele)
//     {

//         pos = i;
//         break;
//     }
// }

// if(pos!=0)
// {

// for(int i=pos;i<n;i++)
// {
//     arr[i]= arr[i+1];
// }

//  for(int i=0;i<n-1;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
//  for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }


// }   

// --------------------------------Best approach --------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  vector<int> arr = { 10, 20,20, 20,20,30, 40 };
//     int n = arr.size();
//     int ele = 20;   

//     bool found = false;

//     for(int i=0;i<n;i++)
//     {

//         if(found)
//         {
//             arr[i-1]=arr[i];
//         }

//         else if(arr[i]==ele)
//         {
//             found = true;
//         }
//     }

//     if(found == true)
//     {
//         n--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

// ------------------------------------ Remove all occurance --------------------------------------//
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> arr = {3, 2, 2, 3};
    int ele = 3;
    int n = arr.size();

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            count++;
        }
    }

    cout<<n-count;
    
}