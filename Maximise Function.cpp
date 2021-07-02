#include <iostream>
#include <climits>                                      //climits directory for defining sizes of integral types

using namespace std;

#define ll long long                                    //defining abbreviation for long terms for less time consumption  

int main(){
    ll t;
    cin>>t;
    while(t--){                                         //for no. of inputs 
        ll n;
        cin>>n;                                         //taking input
        ll a[n];
        int max = INT_MIN;                              //max=-2147483647   
        int min = INT_MAX;                              //min=2147483647
        for (ll i=0; i<n; i++){                         //loop for array input
            cin>>a[i];
            if (a[i]>max){                              //if element is greater than max
                max=a[i];                               //change max to that element 
            }
            if (a[i]<min){                              //if element is less than min
                min=a[i];                               //change min to that element
            }
        }
        ll ans=max-min;                                 //ans = 2*(max-min), basically maximizing the function 
        ans*=2;                                         
        cout<<ans<<endl;                                //output
    }

    return 0;
}
