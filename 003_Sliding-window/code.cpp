// ------------------------naive approach -----------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
//     int k = 4;
//     int n = arr.size();

//     int max = 0;
//     for(int i=0;i<n-k+1;i++)
//     {   
//         int sum=0;
//         for(int j=i; j<k+i ;j++)
//         {
//             sum = sum + arr[j] ;

//         }

//        if(sum>max)
//        {
//         max = sum;
//        }
//     }
    
//     cout<<max;
// }


// --------------------------------------- sliding window approach  ------------------------------------//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = arr.size();

    int max_sum = 0;
    int window_sum =0;
    
    for(int i=0;i<k;i++)
    {
        window_sum = window_sum + arr[i];
    }
   
   max_sum = window_sum;

   for(int i=1;i<n-k+1;i++)
   {
    window_sum = window_sum + arr[i+k-1] - arr[i-1];

    

    // if(window_sum>max_sum)
    // {
    //     max_sum = window_sum;
    // }

     max_sum = max(max_sum, window_sum);
   }

   cout<<max_sum;

}