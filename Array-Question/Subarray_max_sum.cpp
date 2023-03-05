#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int currsum[n+1];                ]
    // currsum[0]=0;                     ]
    // for(int i=1; i<=n; i++){           ]
    // currsum[i]=currsum[i-1]+arr[i-1];
    // }
    // int maxsum=INT_MIN;                   Cumulative sum approach
    // for(int i=1; i<=n; i++){
    //     int sum=0;
    //     for(int j=0; j<i; j++){                  ]
    //         sum=currsum[i]-currsum[j];          ]
    //         maxsum=max(sum, maxsum);           ]
    //     }
    // }
    // cout<<maxsum;
    int curr=0;                             //]
    int sum=INT_MIN;
    for(int i=0; i<n; i++){
        // curr=0;
        // for(int j=i; j<n; j++){            // <<< Kadane's algorithm >>>
            curr+=arr[i];
            sum=max(sum, curr );             //]  
            if(curr<0){
                curr=0;
            }
        // }
    }
    cout<<sum<<endl;
    return 0;
}