#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                             //taking no. of inputs 
    	ll n;
    	cin>>n;                                             //taking input
    	ll a[n], count=0;
    	for (int i=0; i<n; i++){
    		cin>>a[i];
    	}
    	sort(a, a+n);                                       //sorting the array
    	for (int i=0; i<n; i++){
    	    if (i==n-1){                                    //n-1 i.e. last element if equal to i then print it 
    		cout<<a[i]<<endl;
    		break;
    	    }
    	    if (a[i]==a[i+1]){                              //if first element equal to second do nothing just continue
    		i++;
    		continue;
    	    }
    	    else{                                           //if not equal then simply output that element
    		cout<<a[i]<<endl;
    		break;
    	    }
    	}
    }

    return 0;
}


























