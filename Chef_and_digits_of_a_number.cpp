#include <iostream>
#include <cstring>

using namespace std;

#define ll long long

int main(){
    ll t;                                       // initialize variable 
    cin>>t;
    while(t--){                                 // no. of test cases
    	string c;
    	ll cnt0=0, cnt1=0;
    	cin>>c;
    	ll n = c.length();                      // taking inputs
    	for (int i=0; i<n; i++){
    		if (c[i]=='1'){                     // condition check on input 
    			cnt1++;
    		}
    		else{
    			cnt0++;
    		}
    	}
    	if (cnt0==1){                           // checking count
    		cout<<"Yes"<<endl;
    	}
    	else if (cnt1==1){
    		cout<<"Yes"<<endl;
    	}
    	else{
    		cout<<"No"<<endl;
    	}
    }

    return 0;
}