#include <iostream>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                           //no. of test cases
    	ll n;
    	cin>>n;                                           //taking in the input
    	ll a[n];
    	for (ll i=0; i<n; i++){
    		cin>>a[i];                                    
    	}
    	ll min=a[0];                                      //taking minimum of the array
    	for (ll i=0; i<n; i++){
    		if (a[i]<min){
    			min=a[i];
    		}
    	}
    	cout<<min*(n-1)<<endl;                            //output min by multiplying n-1 i.e. 
    	                                                  //no. of times adjacent no. are taken for finding minimum
    }

    return 0;
}
