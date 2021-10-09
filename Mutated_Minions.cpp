#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll t;                            // initialize variable 
    cin>>t;
    while(t--){                      // no. of test cases
    	ll n, k, cnt=0;
    	cin>>n>>k;                   // input
    	ll m[n];
    	for (int i=0; i<n; i++){
    	    cin>>m[i];
    	    m[i]=m[i]+k;
    	    if (m[i]%7==0){          // no. divisible by 7 
    		cnt++;                   // increasing count
    	    }
    	}
    	cout<<cnt<<endl;
    }

    return 0;
}